using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;
 
public class GameManager : MonoBehaviour
{    
    public InputAction m_input_Mover;
    public Vector2 m_movementValue;
    public float m_fSpeed = 0.01f;
    private void OnEnable()
    {
        m_input_Mover.Enable();
    }
    private void OnDisable()
    {
        m_input_Mover.Disable();
    }

    GameObject new_instance;        //新しいオブジェクトの生成用
    public GameObject UnderWall;
    public GameObject GameOver;
    public GameObject start_text;
    public GameObject go_title;
    public GameObject scoreText;
    public GameObject hi_scoreText;
    public GameObject star_light;

    AudioSource soundPlayer;
    public AudioClip meGameStart;
    public AudioClip meGamePlaying;
    public AudioClip meGameOver;
    public AudioClip block_erase;
    public AudioClip block_move;
    public AudioClip block_rakka;

    GameObject block; 

    //float game_Time = 0.0f;
    //float game_Time_Cnt = 0.0f;

    Block_move script;
    int rensa_cnt;
    int axisH;
    int axisH_old;
    int axisV;
    int axisV_old;
    bool ini_block = true;   //ゲームスタート時は、初期ブロックを強制生成するよう
    static public bool player_control = false;   //プレイヤーがブロックを動かせる状態か？
    int mat_x;
    int mat_y;
    int temp_cnt;
    int first_cnt;
    int first_block;
    float temp_x;
    float temp_y;

    static public int game_level = 0;

    static public int hi_score;
    public int score = 0;

    static public int next_block = 1;     
    
    static public int Advent_num = 0;  //新規生成するブロックの背番号 0:wall 1:erase 2:～ブロック
    
    static public int trigger = 0;
    int list_num;
    float next_x;
    float next_y;
    float next_z;

    public bool all_seishi = false; //全てのオブジェクトが静止しているか？
    public List<GameObject> blockList = new List<GameObject>();   //管理するブロックのリスト
    public List<GameObject> deleteList = new List<GameObject>();  //消去するブロックのリスト
    static public int [,] block_matrix = new int [11,8]{
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,1,1,1,1,1,1,1}
    }; 

    static public int [,] block_matrix_tag = new int [11,8]{
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,1,1,1,1,1,1,1}
    };    

    // Start is called before the first frame update
    void Start()
    {


        soundPlayer = GetComponent<AudioSource>();

        Physics2D.gravity = new Vector3(0, -9.81f, 0);  //重力を初期化

        //game_level = 0;         //初期のゲームレベル（落下の加速値）

        rensa_cnt = 1;          //連鎖消去のカウンタ

        GameOver.SetActive(false);  //ゲームオーバー文字を消す
        go_title.SetActive(false);  //タイトル画面へ戻るボタンを消す

        //初期のNEXTブロックの値をつくる
        next_block = Random.Range(1, 5);
;
        if (hi_score == 0)
        {
            hi_score = 100;  //ハイスコアの初期値
        }        
        scoreText.GetComponent<Text>().text = score.ToString();
        hi_scoreText.GetComponent<Text>().text = hi_score.ToString();

        
        if(soundPlayer != null)
        {
            //soundPlayer.Stop();
            soundPlayer.PlayOneShot(meGameStart);
            soundPlayer.Play();
        }
        
        Invoke("InactiveImage",2.0f);
    }

    // Update is called once per frame  
    void FixedUpdate()
    {


        GameObject block_1_Prefab = Resources.Load<GameObject>("block1");
        GameObject block_2_Prefab = Resources.Load<GameObject>("block2");
        GameObject block_3_Prefab = Resources.Load<GameObject>("block3");
        GameObject block_4_Prefab = Resources.Load<GameObject>("block4");
        GameObject block_5_Prefab = Resources.Load<GameObject>("Block5");
        GameObject star_1_Prefab = Resources.Load<GameObject>("star1");
        GameObject star_b_Prefab = Resources.Load<GameObject>("starB");
        GameObject star_c_Prefab = Resources.Load<GameObject>("starC");
        if ( ini_block )
        {
            ini_block = false;  //初期ブロック出力完了
            //ブロックの新規生成
            
            int i = 0;
            while(i<1)    //同時生成するブロックの数
            {


                if (Random.Range(1,20)==1)
                {                                    //お邪魔ブロック５の処理
                    first_block = 5;

                    next_x = -5.0f + Random.Range(0,6)*0.75f;
                    next_y = 3.24f;
                    next_z = 0.0f;

                }
                else
                {                
                                                            //通常ブロックの処理
                    first_block = next_block;
                    next_block = Random.Range(1, 5);


                    // nextblockを表示

                    next_x = -3.5f+ i*0.5f;
                    next_y = 3.24f;
                    next_z = 0.0f;
                
                }

                Vector3 v3 = new Vector3(next_x,next_y,next_z);

                new_instance = block_1_Prefab;
        
                switch(first_block)
                {
                    case 1:
                        new_instance = block_1_Prefab;
                        break;
                    case 2:
                        new_instance = block_2_Prefab;
                        break;
                    case 3:
                        new_instance = block_3_Prefab;
                        break;
                    case 4:
                        new_instance = block_4_Prefab;
                        break;
                    case 5:
                        new_instance = block_5_Prefab;
                        break;
                }   

                if (block_matrix[0,3] == 0)
                {
                    block = Instantiate(new_instance,v3, Quaternion.Euler(0, 0, 0));
                    Block_move component = block.AddComponent<Block_move>();
                    component.advent_no = Advent_num;    //出現させるのは何個目のブロックか
                    component.advent_type = first_block +1;    //出現させるブロックの種類  ２～５ブロック　０：消すブロック
                    if (first_block == 5){
                        component.rakka = true;     //落下モードにさせる 
                        player_control = false;
                    }
                    else 
                    {
                        player_control = true;
                    }


                    blockList.Add(block);

                    if (blockList.Count != 0)
                    {
                        list_num = blockList.Count-1 ;
                    }
                    else
                    {
                        list_num = blockList.Count;
                    }

                    //player_control = true;
                }
                else
                {
                    trigger = 5;             //出現位置に既にブロックがあったら、ゲームオーバー処理へ
                
                    soundPlayer.Stop();
                    soundPlayer.PlayOneShot(meGameOver);
                
                    Physics2D.gravity = new Vector3(0, -100, 0);  //重力を加える
                    
                    //ブロックを全て配列から削除する
                    foreach (var item in blockList)
                    {
                        temp_x = ( item.transform.position.x +5.75f )/0.75f;
                        mat_x = (int)temp_x;
                        temp_y = 10.0f - ( item.transform.position.y +4.175f )/0.75f;  
                        mat_y = (int)temp_y;

                        Debug.Log("delete mat_x : mat_y:"+ mat_x +":"+ mat_y);
                        block_matrix[(int)mat_y, (int)mat_x] = 0;
                        block_matrix_tag[(int)mat_y, (int)mat_x] = 0;
                    
                        script = item.GetComponent<Block_move>();
                        //script.advent_type = 1;         //ブロック種類を 1 （消去ブロック）へ
                        //Destroy(item);
                    }


                }
                i++; 
            }     
            
            Advent_num++;  //生成するブロックの背番号を更新　　0:wall 1:None 2:～ブロック

        }


        m_movementValue = m_input_Mover.ReadValue<Vector2>();
        axisH = (int)m_movementValue.x; 

        //マトリクス上の現在位置を取得
        if ( blockList[list_num] !=null ) 
        {

            temp_x = ( blockList[list_num].transform.position.x +5.75f )/0.75f;
            mat_x = (int)temp_x;
            temp_y = 10.0f - (blockList[list_num].transform.position.y +4.175f )/0.75f;  //origin4.175f
            mat_y = (int)temp_y;

            //下が押されたら強制落下させる
            axisV = (int)m_movementValue.y;

            if(axisV_old != axisV)
            {
                if ( axisV == -1 && player_control == true )
                    {
                        script = blockList[list_num].GetComponent<Block_move>();
                        script.rakka = true;     //落下モードにさせる 
                        player_control = false;
                    }
            }
            else
            {

                if (player_control == true && axisH != axisH_old)    //動作対象のブロックを左右に動かす
                {
                    if ( block_matrix_tag[mat_y , mat_x + axisH ] == 0)
                    {

                        AudioSource soundPlayer = GetComponent<AudioSource>();
                        if(soundPlayer != null)
                        {
                            soundPlayer.PlayOneShot(block_move);
                        }


                        blockList[list_num].transform.Translate (0.75f*axisH, 0, 0);   //指定したブロックを動かす
                    }
                }

            }
            

            axisH_old = axisH;
            axisV_old = axisV;
        }

        //ブロックが全て静止したか確認する。ー＞ブロック消去フェーズへ
        if ( trigger == 1 )             //Block_move.csからtrigger=1（衝突あり）が入力されたら
        {
            all_seishi = true;
            int i = 0;
            while ( i< blockList.Count )
            {
                if (blockList[i] != null) 
                {
                    script = blockList[i].GetComponent<Block_move>();
                    if (script.seishi != true)
                    {
                        all_seishi = false;                    
                    }
                    
                }
                i++;
            }
            if (all_seishi == true)
            {
                AudioSource soundPlayer = GetComponent<AudioSource>();
                if(soundPlayer != null)
                {
                    soundPlayer.PlayOneShot(block_rakka);
                }
                trigger = 2;
                temp_cnt=10;            //ブロックが静止してからの待機時間
                //Debug.Log("trigger:"+trigger);

                }
    
        }

        if (trigger == 2)           //全てのオブジェクトが静止したら
        {
            temp_cnt--;
            if (temp_cnt <= 0) {
                trigger = 3;
            }
        }
        if (trigger == 3)           //３つ並んでいるか、チェックを開始する
        {
            //下の行からヨコのつながりを確認
            int k = 0;
            for (int i = 0; i < block_matrix.GetLength(1); i++)

            {

                //右から２つ目以降は確認不要（width-2）

                for (int j = 0; j < block_matrix.GetLength(0)-2; j++)

                {

                    //同じタグのキャンディが３つ並んでいたら。Ｘ座標がｊなので注意。

　　　　    //念のため、ふたつの式それぞれをカッコで囲んでいる。

                    if ((block_matrix_tag[j,i] > 1) && (block_matrix_tag[j,i] == block_matrix_tag[j+1,i]) )

                    {
                        if (block_matrix_tag[j, i] == block_matrix_tag[j + 2, i])
                        {
                            Debug.Log("height_success3!");
                            score += 30 * rensa_cnt;
                            UpdateScore();
                            //block_moveのisMatchingをtrueに
                            k = (int)block_matrix[j,i];
                            Debug.Log("success_block_no:"+k);                        
                            Block_move script1 = blockList[k].GetComponent<Block_move>();
                            script1.isMatching = true;

                            k = (int)block_matrix[j+1,i]; 
                            Debug.Log("success_block_no:"+k);   
                            Block_move script2 = blockList[k].GetComponent<Block_move>();
                            script2.isMatching = true;

                            k = (int)block_matrix[j+2,i]; 
                            Debug.Log("success_block_no:"+k);    
                            Block_move script3 = blockList[k].GetComponent<Block_move>();
                            script3.isMatching = true;
                        }
                        else
                        {
                            if (block_matrix_tag[j, i] == block_matrix_tag[j + 1, i +1])
                            {
                                Debug.Log("height L1_success3!");
                                score += 30 *rensa_cnt;
                                UpdateScore();
                                //block_moveのisMatchingをtrueに
                                k = (int)block_matrix[j,i];
                                Debug.Log("success_block_no:"+k);                        
                                Block_move script1 = blockList[k].GetComponent<Block_move>();
                                script1.isMatching = true;

                                k = (int)block_matrix[j+1,i]; 
                                Debug.Log("success_block_no:"+k);   
                                Block_move script2 = blockList[k].GetComponent<Block_move>();
                                script2.isMatching = true;

                                k = (int)block_matrix[j+1,i+1]; 
                                Debug.Log("success_block_no:"+k);    
                                Block_move script3 = blockList[k].GetComponent<Block_move>();
                                script3.isMatching = true;
                            }    
                            else
                            {
                                if (block_matrix_tag[j, i] == block_matrix_tag[j + 1, i -1])
                                {
                                    Debug.Log("height L2_success3!");
                                    score += 30 *rensa_cnt;
                                    UpdateScore();
                                    //block_moveのisMatchingをtrueに
                                    k = (int)block_matrix[j,i];
                                    Debug.Log("success_block_no:"+k);                        
                                    Block_move script1 = blockList[k].GetComponent<Block_move>();
                                    script1.isMatching = true;

                                    k = (int)block_matrix[j+1,i]; 
                                    Debug.Log("success_block_no:"+k);   
                                    Block_move script2 = blockList[k].GetComponent<Block_move>();
                                    script2.isMatching = true;

                                    k = (int)block_matrix[j+1,i-1]; 
                                    Debug.Log("success_block_no:"+k);    
                                    Block_move script3 = blockList[k].GetComponent<Block_move>();
                                    script3.isMatching = true;
                                }
                                else
                                {
                                    if (block_matrix_tag[j, i] == block_matrix_tag[j , i +1])
                                    {
                                        Debug.Log("height LSP_success3!");
                                        score += 30*rensa_cnt;
                                        UpdateScore();
                                        //block_moveのisMatchingをtrueに
                                        k = (int)block_matrix[j,i];
                                        Debug.Log("success_block_no:"+k);                        
                                        Block_move script1 = blockList[k].GetComponent<Block_move>();
                                        script1.isMatching = true;

                                        k = (int)block_matrix[j+1,i]; 
                                        Debug.Log("success_block_no:"+k);   
                                        Block_move script2 = blockList[k].GetComponent<Block_move>();
                                        script2.isMatching = true;

                                        k = (int)block_matrix[j,i+1]; 
                                        Debug.Log("success_block_no:"+k);    
                                        Block_move script3 = blockList[k].GetComponent<Block_move>();
                                        script3.isMatching = true;
                                    }
                                }
                            }
                        }       
                    }
                }    
            }

            //同様にｘ方向もチェック
            for (int i = 0; i < block_matrix.GetLength(0); i++)

            {

                //右から２つ目以降は確認不要（width-2）

                for (int j = 0; j < block_matrix.GetLength(1)-2; j++)

                {

                    //同じタグのキャンディが３つ並んでいたら。Ｘ座標がｊなので注意。

　　　　    //念のため、ふたつの式それぞれをカッコで囲んでいる。

                    if ((block_matrix_tag[i,j] > 1) && (block_matrix_tag[i,j] == block_matrix_tag[i,j+1]) )

                    {
                        if (block_matrix_tag[i, j] == block_matrix_tag[i , j +2])
                        {
                            Debug.Log("width_success3!");
                            score +=30 *rensa_cnt;
                            UpdateScore();
                            //block_moveのisMatchingをtrueに
                            k = (int)block_matrix[i,j];                        
                            script = blockList[k].GetComponent<Block_move>();
                            script.isMatching = true;

                            k = (int)block_matrix[i,j+1];   
                            script = blockList[k].GetComponent<Block_move>();
                            script.isMatching = true;

                            k = (int)block_matrix[i,j+2];    
                            script = blockList[k].GetComponent<Block_move>();
                            script.isMatching = true;
                        }
                        else
                        {
                            if (block_matrix_tag[i, j] == block_matrix_tag[i+1 , j +1])
                            {
                                Debug.Log("width_L3_success3!");
                                score +=30 * rensa_cnt;
                                UpdateScore();
                                //block_moveのisMatchingをtrueに
                                k = (int)block_matrix[i,j];                        
                                script = blockList[k].GetComponent<Block_move>();
                                script.isMatching = true;

                                k = (int)block_matrix[i,j+1];   
                                script = blockList[k].GetComponent<Block_move>();
                                script.isMatching = true;

                                k = (int)block_matrix[i+1,j+1];    
                                script = blockList[k].GetComponent<Block_move>();
                                script.isMatching = true;
                            }
                            else
                            {
                                if (block_matrix_tag[i, j] == block_matrix_tag[i-1 , j +1])
                                {
                                    Debug.Log("width_L4_success3!");
                                    score +=30 * rensa_cnt;
                                    UpdateScore();
                                    //block_moveのisMatchingをtrueに
                                    k = (int)block_matrix[i,j];                        
                                    script = blockList[k].GetComponent<Block_move>();
                                    script.isMatching = true;

                                    k = (int)block_matrix[i,j+1];   
                                    script = blockList[k].GetComponent<Block_move>();
                                    script.isMatching = true;

                                    k = (int)block_matrix[i-1,j+1];    
                                    script = blockList[k].GetComponent<Block_move>();
                                    script.isMatching = true;
                                }
                            }    
                            
                        }
                        
                    }

                }

            }

            //isMatching=trueのものをＬｉｓｔに入れる

            foreach (var item in blockList)
            {
                if (item != null)
                {
                    if (item.GetComponent<Block_move>().isMatching == true)
                        {
                            deleteList.Add(item);
                        }
                }        
            }

            Debug.Log("消去可能なブロック数："+deleteList.Count);

            if (deleteList.Count>0)         //消去可能なブロックはあるか？
            {
                AudioSource soundPlayer = GetComponent<AudioSource>();
                if(soundPlayer != null)
                {
                    soundPlayer.PlayOneShot(block_erase);
                }

                if ( game_level <255 )      //ブロックが消されたら、レベルを上げる（最大値２５５）
                {
                    game_level++;   //ゲームレベルを上げる
                    Physics2D.gravity = new Vector3(0, -5*game_level, 0);  //重力を加える
                }

                //該当する配列をnullにして（内部管理）、ブロックを消去する（見た目）。
                foreach (var item in deleteList)
                {
                    temp_x = ( item.transform.position.x +5.75f )/0.75f;
                    mat_x = (int)temp_x;
                    temp_y = 10.0f - ( item.transform.position.y +4.175f )/0.75f;  
                    mat_y = (int)temp_y;

                    Debug.Log("mat_x : mat_y:"+ mat_x +":"+ mat_y);
                    block_matrix[(int)mat_y, (int)mat_x] = 0;
                    block_matrix_tag[(int)mat_y, (int)mat_x] = 0;
                    
                    script = item.GetComponent<Block_move>();
                    script.advent_type = 1;         //ブロック種類を 1 （消去ブロック）へ
                    Vector3 pos = script.transform.position;
                    
                    new_instance = star_1_Prefab;                     
                    Instantiate( new_instance , pos , Quaternion.Euler(0, 0, 0)); //爆発パターンを生成

                    new_instance = star_b_Prefab;                     
                    Instantiate( new_instance , pos , Quaternion.Euler(0, 0, 0)); //動く星のパターンを生成 

                    new_instance = star_c_Prefab;                     
                    Instantiate( new_instance , pos , Quaternion.Euler(0, 0, 0)); //まわる星のパターンを生成 

                    //Destroy(item);
                }
                rensa_cnt++;   //連鎖消去のカウンタ
                trigger = 1;   //最初のブロック静止判定へ戻る   
            }
            else
            {
                //ブロック消去ルーチン完了時の処理 
                trigger = 0;        //もう消去可能なブロックがなければ、通常処理へ 
                ini_block = true;           //初期ブロックを作成し。通常モードへ
                rensa_cnt = 1;              //連鎖カウンタを初期化
                
            }

            deleteList.Clear();         //消去処理が完了したら、リストをクリアする

        }

        //if (trigger == 4)   {}        

        if (trigger == 5)           //**ゲームオーバー
        {
            UnderWall.SetActive(false);  //床を抜く
            GameOver.SetActive(true);  //ゲームオーバー文字を表示
            go_title.SetActive(true);   //タイトル画面へ戻るボタンを表示

            //AudioListener.volume = 0f;
            
            ini_block = false;

        }


        if ( axisV == 1 ) {   //ブロックマトリクスを表示
            //block_matrix.tagを表示
            Debug.Log("block_matrix.tagを表示");
            for (int i = 0;i < block_matrix.GetLength(0);i++)
            {                
                string str = "";
                for (int j = 0; j < block_matrix.GetLength(1); j++)
                {
                    str = str + block_matrix_tag[i, j] + " ";
                }
                Debug.Log(str);
                }
            //block_matrixを表示
            Debug.Log("block_matrixを表示");
            for (int i = 0;i < block_matrix.GetLength(0);i++)
            {                
                string str = "";
                for (int j = 0; j < block_matrix.GetLength(1); j++)
                {
                    str = str + block_matrix[i, j] + " ";
                }
                Debug.Log(str);
            }
            
        }       

    }
    void InactiveImage()
    {
        start_text.SetActive(false);
    }
    void UpdateScore()
    {
        scoreText.GetComponent<Text>().text = score.ToString();

        if (score > hi_score) 
        {
            hi_score = score;
        } 

        hi_scoreText.GetComponent<Text>().text = hi_score.ToString();

    }

    

}

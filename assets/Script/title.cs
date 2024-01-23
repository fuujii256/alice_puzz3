using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;

public class title : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject select_forPlay;
    public GameObject select_main;
    int next_scene;
  
    void Start()
    {
    next_scene = 0;        
    }

    // Update is called once per frame
    void Update()
    {
        var current = Keyboard.current;
        // キーボード接続チェック
        if (current != null) 
        {
            var eKey = current.enterKey;
            // Aキーが押された瞬間かどうか
            if (eKey.wasPressedThisFrame)
            {   
                if (next_scene == 0 || next_scene == 2) {
                    SceneManager.LoadScene("main");
                }
                if (next_scene == 1) {
                    SceneManager.LoadScene("forPlay");
                }
            }
        
            eKey = current.upArrowKey;
            // c_upキーが押された瞬間かどうか
            if (eKey.wasPressedThisFrame)
            {
                select_forPlay.SetActive(true);
                select_main.SetActive(false);
                next_scene = 1;
            }

            eKey = current.downArrowKey;
            // c_downキーが押された瞬間かどうか
            if (eKey.wasPressedThisFrame)
            {
                select_forPlay.SetActive(false);
                select_main.SetActive(true);
                next_scene = 2;
            }

        }
        
        
    }
}

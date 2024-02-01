using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;
using DG.Tweening;

public class Epilogue : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject windowText;
    Text text_target;
    string[] texts = new string [6]{

        "星たちの力を集めたアリスは、\nお空の流れ星に向かって祈りを捧げます。\n\n「キヴォトスのみんな、\n 大好きな人たちの願いが叶いますように！」"
        ,"すると突然、お空にあらわれた三日月が、\nアリスの目の前まで降りてきました。"
        ,"そしてアリスには、\nお月様からのメッセージが聞こえてきます。"
        ,"「この力を使ってあなたのねがいを\n叶えるときです。\nさあ、あなたの愛する者たちへ\n救いの手を差し伸べましょう」"
        ,"アリスは決意しました。\n\n「はい！ アリスがきっと、\n  みんなのねがいを叶えてみせます！」"
        ,"その言葉を聞いたお月様は、\nとてもやさしく微笑んでくれた気がしました。\n\nそんな二人を、まわりの星々たちは満足げに\nあたたかく見守っていました。"

    }; 
    int num;

    void Start()
    {        
     
        num = 0;
        text_target = windowText.GetComponent<Text>();
        text_target.DOText( texts[num],texts[num].Length * 0.1f).SetEase (Ease.Linear);

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
                if (num != texts.Length - 1)
                {
                    text_target = windowText.GetComponent<Text>();
                    text_target.text = "";
                    num++;
                    text_target.DOText( texts[num],texts[num].Length * 0.1f).SetEase (Ease.Linear);
                }

            }

        }
        
        
    }
}

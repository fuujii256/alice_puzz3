using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;


public class forPlay : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
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
            SceneManager.LoadScene("title");
        }

         }
        
        
    }
}

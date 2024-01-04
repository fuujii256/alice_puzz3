using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class intro : MonoBehaviour
{
    public string sceneName;
    int cn;

    // Start is called before the first frame update
    void Start()
    {
    cn = 0;    
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        cn++;
    
        if (cn > 200)
        {
            SceneManager.LoadScene(sceneName);
        }
    }
}

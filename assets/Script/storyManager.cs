using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class storyManager : MonoBehaviour
{
    Rigidbody2D rbody;
    Animator animator;
    Vector3 pos;  
    
    // Start is called before the first frame update
    void Start()
    {
        rbody = this.GetComponent<Rigidbody2D>(); 
        pos = this.transform.position; 
        //Debug.Log("x:"+pos.x+" y:"+pos.y); 
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        pos = this.transform.position;
        pos.x += -0.05f;
        //Debug.Log("x:"+pos.x+" y:"+pos.y);
        if (pos.x <-16.0f) {
        pos.x = 7.0f;
        }
        this.transform.position = pos;       
    }
}

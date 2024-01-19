using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class titleStar : MonoBehaviour
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
        pos.y += 0.1f;
        //Debug.Log("x:"+pos.x+" y:"+pos.y);
        if (pos.y >6.0f) {
        pos.y = -6.0f;
        }
        this.transform.position = pos;       
    }
}

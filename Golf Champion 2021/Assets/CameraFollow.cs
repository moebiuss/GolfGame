using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    [SerializeField] public GameObject Ball;
    [SerializeField] Vector3 offset;
    Vector3 oldoffset;
    bool shot;
    void Shot(float a,float b,int c)
    {
        shot = true;
    }
    private void OnEnable()
    {
        PlayerController.ThrowBall += Shot;
    }
    private void OnDisable()
    {
        PlayerController.ThrowBall -= Shot;
    }
    void Start()
    {

    }

    void LateUpdate()
    {
        //if (Input.GetMouseButton(0))
        //{
        //    transform.RotateAround(Ball.transform.position, transform.up, -Input.GetAxis("Mouse X") * 5);
        //    Ball.transform.RotateAround(Ball.transform.position, transform.up, -Input.GetAxis("Mouse X") * 5);
        //}
        if (Ball&&Ball.GetComponent<MeshRenderer>().enabled)
        {


            oldoffset = Ball.transform.position;
            oldoffset.x += offset.x;
            oldoffset.z += offset.z;
            oldoffset.y += offset.y;
            transform.position = oldoffset;
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
public class PlayerController : MonoBehaviour
{
    Animator anim;
    public static Action<float, float, int> ThrowBall;
    float a;
    float b;
    void Start()
    {
        anim = GetComponent<Animator>();
    }
    void BallShoot()
    {
        ThrowBall?.Invoke(a, b, 0);
    }
    private void OnEnable()
    {
        ShootController.BallShot += OnShot;
    }
    void OnShot(float a, float b)
    {
        this.a = a;
        this.b = b;
        anim.SetTrigger("Shoot");
    }
    private void OnDisable()
    {
        ShootController.BallShot -= OnShot;
    }

}

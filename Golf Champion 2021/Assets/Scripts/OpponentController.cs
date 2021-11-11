using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
public class OpponentController : MonoBehaviour
{
    float timer;
    [SerializeField] float[] timerval = new float[2];
    [SerializeField] int index;
    public static Action<float, float, int> BallThrown;
    Animator anim;
    bool Thrown;
    [SerializeField]float[] Cross;
    [SerializeField] float[] ShootPower;
    void Start()
    {
        timer = UnityEngine.Random.Range(timerval[0],timerval[1]);
        anim = GetComponent<Animator>();
    }
    private void Awake()
    {
        
    }
    void BallShoot()
    {
        BallThrown(UnityEngine.Random.Range(Cross[0], Cross[1]), UnityEngine.Random.Range(ShootPower[0], ShootPower[1]), index);
        timer = UnityEngine.Random.Range(timerval[0],timerval[1]);
        Invoke("StopAnimator", 3);
    }
    void Update()
    {
        timer -= Time.deltaTime;
        if (timer < 0&&!Thrown)
        {
            Thrown = true;
            anim.SetTrigger("Shoot");
        }
    }
    void StopAnimator()
    {
        anim.enabled = false;
    }
}
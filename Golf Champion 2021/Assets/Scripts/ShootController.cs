using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
public class ShootController : MonoBehaviour
{
    [SerializeField] Slider PowerBar;
    bool OnMax;
    [SerializeField] GameObject Ball;
   [SerializeField] bool CanShoot=false;
    public static Action<float,float> BallShot;
    float CrossX;
    void Start()
    {
        print(Globals.ShotAmount);
    }
    void OnCrossClicked(float x)
    {
        CanShoot = true;
        CrossX = x;
    }
    private void OnEnable()
    {
        CrossHairController.CrossHairClicked += OnCrossClicked;
    }
    private void OnDisable()
    {
        CrossHairController.CrossHairClicked -= OnCrossClicked;
    }
    bool CheckVal(bool val)
    {
        if (PowerBar.value == PowerBar.maxValue)
        {
            val = true;
        }
        else if (PowerBar.value == PowerBar.minValue)
        {
            val = false;
        }
        return val;
    }
    void InputController()
    {
        if (Input.GetMouseButtonDown(0))
        {
            BallShot?.Invoke(CrossX,PowerBar.value);
            CanShoot = false;
        }
    }
    void Update()
    {
        if (CanShoot)
        {
            OnMax = CheckVal(OnMax);
            if (OnMax)
            {
                PowerBar.value -= Time.deltaTime*5;
            }
            else
            {
                PowerBar.value += Time.deltaTime*5;
            }
            InputController();
        }
    }
}

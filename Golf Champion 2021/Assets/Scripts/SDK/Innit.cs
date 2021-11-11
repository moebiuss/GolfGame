using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Yodo1.MAS;
using System;
public class Innit : MonoBehaviour
{
    public static Action Initialized;

    void Start()
    {
        Yodo1U3dMas.InitializeSdk();
        Initialized?.Invoke();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

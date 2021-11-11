using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Globals 
{
    public static int[] ShotAmount = new int[4];
    static Globals()
    {
        ResetGlobals();
    }
    public static void ResetGlobals()
    {
        for (int i = 0; i < ShotAmount.Length; i++)
        {
            ShotAmount[i] = 2;
        }
    }
}   

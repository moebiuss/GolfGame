using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Put : MonoBehaviour
{
    public static Put Instance;
    private void Awake()
    {
        if(!Instance)
        Instance = this;
    }

}

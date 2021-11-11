using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;


public class GroundPiece : MonoBehaviour
{
     public int Score;

    Material m;
    [SerializeField] Color[] colorList;
    void Start()
    {
        try
        {
            GetComponent<MeshRenderer>().material.color = colorList[transform.GetSiblingIndex()];

        }
        catch 
        {

        }
        if (GetComponentInChildren<TextMesh>())
            GetComponentInChildren<TextMesh>().text = "X" + Score.ToString();
    }

    void Update()
    {

    }
}

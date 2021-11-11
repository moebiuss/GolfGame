using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;

public class CrossHairController : MonoBehaviour
{
    public static Action<float> CrossHairClicked;
    bool CrossHairMove = true;
    bool OnMax;
    Slider CrossBar;
    void Start()
    {
        CrossBar = GetComponent<Slider>();
    }
    bool CheckValue(bool onMax)
    {
        if (CrossBar.value == CrossBar.maxValue) onMax = true;
        else if (CrossBar.value == CrossBar.minValue) onMax = false;
        return onMax;
    }
    void Update()
    {

        if (CrossHairMove)
        {


            OnMax = CheckValue(OnMax);
            if (OnMax)
            {
                CrossBar.value -= Time.deltaTime * 10;
            }
            else CrossBar.value += Time.deltaTime * 10;

            if (Input.GetMouseButtonDown(0))
            {
                CrossHairMove = false;
                Invoke("CrossHairActivate", 0.3f);
            }
        }
    }
    void CrossHairActivate()
    {
        CrossHairClicked(CrossBar.value);
    }
}

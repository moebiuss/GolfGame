using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
public class UIElementsController : MonoBehaviour
{
    [SerializeField] GameObject GameFailedPanel;
    [SerializeField] GameObject GameSucceedPanel;
    [SerializeField] Button NoThanksBtn;
    [SerializeField] Button SkipBtn;
    [SerializeField] Text PutDistanceTxt;
    float putDistance;
    [SerializeField] Color[] ColorList;

    public float PutDistance
    {
        get { return putDistance; }
        set { putDistance = value; if (value >= 500) TextColor(ColorList[4]); else if (value >= 100) TextColor(ColorList[2]); else if (value >= 50) TextColor(ColorList[0]); PutDistanceTxt.text = (putDistance/2).ToString("F0") + " Meters"; }
    }


    int number;
    void TextColor(Color newcolor)
    {
        PutDistanceTxt.color = newcolor;
    }
    private void OnEnable()
    {
        VarContainer.GameEnded += OnGameEnded;
    }

    void OnGameEnded(int _number)
    {
        number = _number;
        if (_number == 0)
        {
            GameSucceedPanel.SetActive(true);
        }
        else GameFailedPanel.SetActive(true);
    }
    void Start()
    {
        NoThanksBtn.onClick.AddListener(() => { GameEnder(number); });
        SkipBtn.onClick.AddListener(() => { GameEnder(number); });
    }
    void GameEnder(int index)
    {
        if (index == 0)
        {
            VarContainer.ResetScore();
            Extension.LoadNextLevel();
        }
        else
        {
            VarContainer.ResetScore();
            Extension.Restart();
        }
    }
    private void OnDisable()
    {
        VarContainer.GameEnded -= OnGameEnded;
    }
    void Rotations(bool LeftCheck)
    {
        if (LeftCheck)
        {

        }
    }


}

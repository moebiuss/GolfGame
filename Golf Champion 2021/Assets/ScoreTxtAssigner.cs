using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using DG.Tweening;
public class ScoreTxtAssigner : MonoBehaviour
{
    [SerializeField] int index;
    private void OnEnable()
    {
        transform.parent.tag = "ScoreUI";
        VarContainer.ScoreChanged += ScoreChanged;
        Sub();
    }


    private void Sub()
    {
        PlayerController.ThrowBall += HideText;
        SceneManager.sceneLoaded += OnSceneLoaded;
    }
    void ScoreChanged(int i)
    {
        if (i == index)
        {

            GetComponent<Text>().DOColor(Color.green, 1.5f).OnComplete(() => GetComponent<Text>().DOColor(Color.white, 3));

        }
        GetComponent<Text>().text = 100 + "/" + VarContainer.Scores[index];

    }

    void HideText(float a = 0, float b = 0, int c = 0)
    {
        GetComponent<Text>().enabled = false;
    }
    void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        GetComponent<Text>().enabled = true;
    }
    private void OnDisable()
    {
        UnSub();
    }
    private void OnDestroy()
    {
        UnSub();
    }

    private void UnSub()
    {
        SceneManager.sceneLoaded -= OnSceneLoaded;
        PlayerController.ThrowBall -= HideText;
        VarContainer.ScoreChanged -= ScoreChanged;
    }

    void Start()
    {
        ScoreChanged(-1);
    }

    
}

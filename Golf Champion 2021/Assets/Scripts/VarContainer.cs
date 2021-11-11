using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Linq;
public static class VarContainer
{
    public static int[] Scores = new int[3];
    public static Action<int> GameEnded;
    public static Action<int> ScoreChanged;
    public static void SetScore(int index, int score,GameObject g = null)
    {
        Scores[index] += score;
        ScoreChanged?.Invoke(index);
        var (number, _index) = Scores.Select((n, i) => (n, i)).Max();
        if (number >= 100)
        {
            GameEnded?.Invoke(_index);
        }
        else if (index == 0)
        {
            Extension.Restart();
        }
        
        
    }
    public static void ResetScore()
    {
       
        for (int i = 0; i < Scores.Length; i++)
        {
            Scores[i] = 0;
        }
    }
}

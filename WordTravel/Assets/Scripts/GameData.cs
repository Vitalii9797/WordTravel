using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class GameData
{
    private static int Scores;
    private static int LevelIndex;

    public static int GetScores()
    {
        Scores = PlayerPrefs.GetInt("scores");
        return Scores;
    }

    public static void SetScores(int scores)
    {
        PlayerPrefs.SetInt("scores", scores);
    }

    public static int GetLevelIndex()
    {
        LevelIndex = (PlayerPrefs.GetInt("levelIndex"));
        LevelIndex = LevelIndex == 0 ? 1 : LevelIndex;
        return LevelIndex;
    }

    public static void SetLevelIndex(int levelIndex)
    {
        PlayerPrefs.SetInt("levelIndex", levelIndex + 1);
    }
}

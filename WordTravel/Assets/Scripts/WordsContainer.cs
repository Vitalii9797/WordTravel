using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class WordsContainer : MonoBehaviour
{
    [SerializeField] private int levelIndex;
    [SerializeField] private string nextLevel;
    [Space]
    [SerializeField] private List<ClueWord> clueWords;
    [SerializeField] private GameObject winPopUp;
    [SerializeField] private GameObject watchAdPopUp;
    [SerializeField] private Text totalScoresText;
    [SerializeField] private Text scoreText;

    private int scores;

    private const int letterHintCost = 5;
    private const int wordHintCost = 10;

    private void Start()
    {
        scores = clueWords.Count;
        scoreText.text = GameData.GetScores().ToString();
    }
    public void CheckWord(string currentWord)
    {
        for (int i = 0; i < clueWords.Count; i++)
        {
            if(clueWords[i].clueWord == currentWord && clueWords[i].wordSolved == false)
            {
                clueWords[i].SolveClueLetters();
            }
        }
        CheckSolvedWords();
    }

    public void CheckSolvedWords()
    {
        if(clueWords.Count > 0)
        {
            for (int i = 0; i < clueWords.Count; i++)
            {
                if(clueWords[i].wordSolved == true)
                {
                    clueWords.RemoveAt(i);
                }
            }
        }
        if(clueWords.Count == 0)
        LevelComplete();
    }

    public void UseLetterHint()
    {
        if(GameData.GetScores() >= letterHintCost)
        {
            if (clueWords.Count != 0)
            {
                int randomIndex = Random.Range(0, clueWords.Count - 1);
                clueWords[randomIndex].RevealRandomLetter();

                scores -= letterHintCost;
                GameData.SetScores(scores);
            }
            CheckSolvedWords();
        }
        else
        {
            watchAdPopUp.SetActive(true);
        }
    }

    public void UseWordHint()
    {
        if (GameData.GetScores() >= wordHintCost)
        {
            if (clueWords.Count != 0)
            {
                int randomIndex = Random.Range(0, clueWords.Count - 1);
                clueWords[randomIndex].SolveClueLetters();

                scores -= wordHintCost;
                GameData.SetScores(scores);
            }
            CheckSolvedWords();
        }
        else
        {
            watchAdPopUp.SetActive(true);
        }
        
    }

    private void LevelComplete()
    {
        totalScoresText.text = scores.ToString();
        GameData.SetScores(scores);
        GameData.SetLevelIndex(levelIndex);
        winPopUp.SetActive(true);
    }

    public void HomeButton()
    {
        SceneManager.LoadScene(0);
    }

    public void NextLevelButton()
    {
        SceneManager.LoadScene(nextLevel);
    }

    public void CancelAdsButton()
    {
        watchAdPopUp.SetActive(false);
    }
}

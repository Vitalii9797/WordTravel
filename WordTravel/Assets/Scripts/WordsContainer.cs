using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class WordsContainer : MonoBehaviour
{
    [Header("Level indexes")]
    [SerializeField] private int levelIndex;
    [SerializeField] private string nextLevel;

    [Space][Header("Words Lists")]
    [SerializeField] private List<ClueWord> clueWords;
    [SerializeField] private List<string> extraWords;

    [Space][Header("Assigned private fields")]
    [SerializeField] private GameObject winPopUp;
    [SerializeField] private GameObject watchAdPopUp;
    [SerializeField] private Text totalScoresText;
    [SerializeField] private Text scoreText;
    [SerializeField] private Text extraWordsText;
    [SerializeField] private AudioSource rightWord;
    [SerializeField] private Animator extraWordsAnim;
    [SerializeField] private AudioSource extraWord;
    [SerializeField] private SkipAdScript skipAdScript;

    private int scores;
    private int extraWordsCount;

    private const int letterHintCost = 5;
    private const int wordHintCost = 10;

    private void Start()
    {
        scores = clueWords.Count;
        scoreText.text = GameData.GetScores().ToString();
        extraWordsCount = PlayerPrefs.GetInt("extraWordsCount");
        extraWordsText.text = extraWordsCount.ToString() + "/10";
    }
    public void CheckWord(string currentWord)
    {
        for (int i = 0; i < clueWords.Count; i++)
        {
            if (clueWords[i].clueWord == currentWord && clueWords[i].wordSolved == false)
            {
                clueWords[i].SolveClueLetters();
                rightWord.Play();
            }
        }
        CheckExtraWord(currentWord);
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

    private void CheckExtraWord(string currentword)
    {
        if(!extraWords.Contains(currentword))
        {
            return;
        }
        else
        {
            extraWord.Play();
            extraWords.Remove(currentword);
            extraWordsCount++;
            PlayerPrefs.SetInt("extraWordsCount", extraWordsCount);
            extraWordsText.text = extraWordsCount.ToString() + "/10";

            if (extraWordsCount > 9)
            {
                GameData.SetScores(GameData.GetScores() + 5);
                scoreText.text = GameData.GetScores().ToString();
                extraWordsCount = 0;
                PlayerPrefs.SetInt("extraWordsCount", extraWordsCount);
                extraWordsText.text = extraWordsCount.ToString() + "/10";
                extraWordsAnim.SetTrigger("addStar");
            }
            else
            {
                extraWordsAnim.SetTrigger("addWord");
            }
        }
    }

    public void UseLetterHint()
    {
        if(GameData.GetScores() >= letterHintCost)
        {
            if (clueWords.Count != 0)
            {
                int randomIndex = Random.Range(0, clueWords.Count - 1);
                clueWords[randomIndex].RevealRandomLetter();
                GameData.SetScores(GameData.GetScores() - letterHintCost);
                scoreText.text = GameData.GetScores().ToString();

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
                rightWord.Play();
                GameData.SetScores(GameData.GetScores() - wordHintCost);
                scoreText.text = GameData.GetScores().ToString();
            }
            CheckSolvedWords();
        }
        else
        {
            watchAdPopUp.SetActive(true);
        }
        
    }

    public void AddExtraScores()
    {
        GameData.SetScores(GameData.GetScores() + 10);
        scoreText.text = GameData.GetScores().ToString();
    }

    private void LevelComplete()
    {
        totalScoresText.text = scores.ToString();
        GameData.SetLevelIndex(levelIndex);
        winPopUp.SetActive(true);
        if(levelIndex != 0 && levelIndex % 3 == 0)
        {
            skipAdScript.ShowAd();
        }
    }

    public void HomeButton()
    {
        SceneManager.LoadScene(0);
        GameData.SetScores(GameData.GetScores() + scores);

    }

    public void NextLevelButton()
    {
        GameData.SetScores(GameData.GetScores() + scores);
        SceneManager.LoadScene(nextLevel);

    }

    public void CancelAdsButton()
    {
        watchAdPopUp.SetActive(false);
    }

    public void ExitButton()
    {
        SceneManager.LoadScene(0);
    }
}

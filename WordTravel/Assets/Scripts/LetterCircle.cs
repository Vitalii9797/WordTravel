using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LetterCircle : MonoBehaviour
{
    [Header("Level Main Word")]
    public string word;

    [HideInInspector]public bool wordSelectionStarted;
    [HideInInspector]public string currentWord;

    [Space][Header("Lists of letters and their positions")]
    [SerializeField] private Letter[] letters;
    [SerializeField]private Vector3[] lettersPositions;

    [Space][Header("Constantly assigned fields")]
    public Text currentWordText;
    [SerializeField] private Alphabet alphabet;
    [SerializeField] private WordsContainer wordsContainer;

    System.Random random = new System.Random();
    void Start()
    {
        SetLetters();
        currentWordText.text = string.Empty;
    }

    private void SetLetters()
    {
        for (int i = 0; i < word.Length; i++)
        {
            letters[i].gameObject.GetComponent<SpriteRenderer>().sprite = alphabet.Sprites[alphabet.Letters.IndexOf(word[i].ToString())];
        }
        for(int i = 0; i < word.Length; i++)
        {
            letters[i].letterValue = word[i].ToString();
        }
        for (int i = 0; i < letters.Length; i++)
        {
            lettersPositions[i] = letters[i].gameObject.transform.localPosition;
        }
    }


    public void ShuffleLetters()
    {
        for (int i = lettersPositions.Length - 1; i >= 1; i--)
        {
            int j = random.Next(i + 1);

            var temp = lettersPositions[j];
            lettersPositions[j] = lettersPositions[i];
            lettersPositions[i] = temp;
        }

        for (int i = 0; i < letters.Length; i++)
        {
            letters[i].ChangePosition(lettersPositions[i]);
        }
    }

    public void UpdateCurrentWord(string letter)
    {
        currentWord += letter;
        currentWordText.text = currentWord;
    }

    public void CheckWord()
    {
        wordsContainer.CheckWord(currentWord);
        DisableSelection();
    }

    private void DisableSelection()
    {
        currentWord = string.Empty;
        currentWordText.text = currentWord;
        wordSelectionStarted = false;   
        for (int i = 0; i < letters.Length; i++)
        {
            letters[i].UncheckWord();
        }
    }

}

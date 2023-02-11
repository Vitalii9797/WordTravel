using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClueWord : MonoBehaviour
{
    public string clueWord;
    public bool wordSolved = false; 

    [SerializeField] ClueLetter[] clueLetters;
    [SerializeField] Alphabet alphabet;
    [SerializeField] WordsContainer wordsContainer;

    public List<ClueLetter> letterList = new List<ClueLetter>();

    private void Start()
    {
        SetLettersSprites();
    }
    private void SetLettersSprites()
    {
        for (int i = 0; i < clueLetters.Length; i++)
        {
            clueLetters[i].SetLetterSprite(alphabet.Sprites[alphabet.Letters.IndexOf(clueWord[i].ToString())]);
        }
    }

    public void SolveClueLetters()
    {
        for (int i = 0; i < clueLetters.Length; i++)
        {
            clueLetters[i].RevealLetter();
        }
        wordSolved = true;
    }

    public void CheckSolvedLetters()
    {
        for (int i = 0; i < clueLetters.Length; i++)
        {
            if(clueLetters[i].letterSolved == false)
            {
                return;
            }
        }

        wordSolved = true;
        wordsContainer.CheckSolvedWords();
    }

    public void RevealRandomLetter()
    {
       int randomIndex = Random.Range(0, letterList.Count - 1);

        letterList[randomIndex].RevealLetter();
        letterList.RemoveAt(randomIndex);

    }

   

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HintButton : MonoBehaviour
{
    [SerializeField] private WordsContainer wordsContainer;
    [SerializeField] private GameObject hintPanel;


    private void OnMouseDown()
    {
        hintPanel.SetActive(true);
    }

    public void CancelHintButton()
    {
        hintPanel.SetActive(false);
    }

    public void LetterHint()
    {
        wordsContainer.UseLetterHint();
        hintPanel.SetActive(false);
    }

    public void WordHint()
    {
        wordsContainer.UseWordHint();
        hintPanel.SetActive(false);
    }
}

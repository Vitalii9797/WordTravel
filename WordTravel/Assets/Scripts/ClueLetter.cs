using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClueLetter : MonoBehaviour
{
    [SerializeField] SpriteRenderer sRenderer;
    [SerializeField] ClueWord clueWord;

    public Sprite letterSprite;
    public bool letterSolved;

    private Animator clueAnim;
    void Start()
    {
        clueAnim = GetComponent<Animator>();
    }

    public void SetLetterSprite(Sprite sprite)
    {
        letterSprite = sprite;
    }
    public void RevealLetter()
    {
        sRenderer.sprite = letterSprite;
        letterSolved = true;
        clueAnim.SetTrigger("reveal");
        clueWord.CheckSolvedLetters();
    }
}

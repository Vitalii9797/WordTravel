using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Letter : MonoBehaviour
{
    public SpriteRenderer sRenderer;
    public string letterValue;

    [SerializeField] Color defaultColor;
    [SerializeField] Color pressedColor;
    [SerializeField] LetterCircle letterCircle;
    [SerializeField] AudioSource clickSound;

    private bool selected = false;
    private bool pressed = false;   

    private Animator letterAnim;
    void Start()
    {
        letterAnim = GetComponent<Animator>();
    }

    private void OnMouseDown()
    {
        pressed = true;
        selected = true;
        if(pressed == true)
        {
            letterCircle.wordSelectionStarted = true;
            sRenderer.color = pressedColor;
            letterCircle.currentWord = letterValue;
            letterCircle.currentWordText.text = letterCircle.currentWord;
            clickSound.Play();
        }
        
    }

    private void OnMouseEnter()
    {
        if(letterCircle.wordSelectionStarted == true && selected == false)
        {
            selected = true;
            sRenderer.color = pressedColor;
            clickSound.Play();
            letterCircle.UpdateCurrentWord(letterValue);
        }
    }

    private void OnMouseUp()
    {
       letterCircle.CheckWord();    
    }

    public void UncheckWord()
    {
        selected = false;
        sRenderer.color = defaultColor;
    }

    public void ChangePosition(Vector3 position)
    {
        letterAnim.SetTrigger("shuffle");
        transform.localPosition = position;
    }


}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShuffleButton : MonoBehaviour
{
    [SerializeField] private LetterCircle letterCircle;

    private void OnMouseDown()
    {
        letterCircle.ShuffleLetters();
    }
}

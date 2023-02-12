using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Photo : MonoBehaviour
{
    [SerializeField] private int unlockIndex;

    [SerializeField] private Sprite lockedPhoto;
    [SerializeField] private Sprite unlockedPhoto;
    void Start()
    {
        GetComponent<SpriteRenderer>().sprite = SetPhoto();
    }

    private Sprite SetPhoto()
    {
        if (GameData.GetLevelIndex() > unlockIndex) return unlockedPhoto;
        else return lockedPhoto;
    }
}

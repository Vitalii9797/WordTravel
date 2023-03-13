using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LoadLevel : MonoBehaviour
{
    [SerializeField] private int levelIndex;
    [SerializeField] AudioSource clickSound;
    [SerializeField] private Text levelNumber;

    private void Start()
    {
        if(GameData.GetLevelIndex() < levelIndex)
        {
            GetComponent<Button>().interactable = false;
            levelNumber.color = Color.gray;
        }
        else
        {
            GetComponent<Button>().interactable = true;
            levelNumber.color = Color.white;
        }
    }
    public void StartLevel(string level)
    {
        clickSound.Play();
        SceneManager.LoadScene(level);
    }
}

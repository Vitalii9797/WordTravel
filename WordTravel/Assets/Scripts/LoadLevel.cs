using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LoadLevel : MonoBehaviour
{
    [SerializeField] private int levelIndex;

    private void Start()
    {
        if(GameData.GetLevelIndex() < levelIndex)
        {
            GetComponent<Button>().interactable = false;
        }
    }
    public void StartLevel(string level)
    {
        SceneManager.LoadScene(level);
    }
}

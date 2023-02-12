using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    [SerializeField] private AudioSource clickSound;
   public void PlayButton()
    {
        clickSound.Play();
        SceneManager.LoadScene(1);
    }
}

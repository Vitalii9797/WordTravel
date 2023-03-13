using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Advertisements;

public class MainMenu : MonoBehaviour, IUnityAdsInitializationListener
{
    [SerializeField] private AudioSource clickSound;

    [SerializeField] private string _gameId;

    private void Awake()
    {
        InitializeAds();
    }
    public void PlayButton()
    {
        clickSound.Play();
        SceneManager.LoadScene(1);
    }

    public void InitializeAds()
    {
        Advertisement.Initialize(_gameId, true, this);
    }

    public void OnInitializationComplete()
    {
        Debug.Log("Unity Ads initialization complete.");
    }

    public void OnInitializationFailed(UnityAdsInitializationError error, string message)
    {
        Debug.Log($"Unity Ads Initialization Failed: {error.ToString()} - {message}");
    }
}

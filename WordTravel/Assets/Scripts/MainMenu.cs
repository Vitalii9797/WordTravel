using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Advertisements;

public class MainMenu : MonoBehaviour, IUnityAdsInitializationListener
{
    [SerializeField] private AudioSource clickSound;
    [SerializeField] private GameObject ratePanel;
    [SerializeField] private string _gameId;

    private int firstPlay;
    private int rated;
    private void Awake()
    {
        InitializeAds();
        firstPlay = PlayerPrefs.GetInt("firstPlay");
        rated = PlayerPrefs.GetInt("rated");
    }

    private void Start()
    {
        if (firstPlay > 0 && rated == 0)
        {
            ratePanel.SetActive(true);
        }

        firstPlay = 1;
        PlayerPrefs.SetInt("firstPlay", firstPlay);
    }

    public void YesButton()
    {
        rated = 1;
        PlayerPrefs.SetInt("rated", rated);
        ratePanel.SetActive(false);
        Application.OpenURL("https://play.google.com/store/apps/details?id=com.CockStar.WordTravel&pli=1");
    }

    public void NoButton()
    {
        ratePanel.SetActive(false);
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

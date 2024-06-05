using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Main_Menu : MonoBehaviour
{

    public void PLayGame(){
        UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(1);
    }

    public void Tutorial(){
        UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(2);
    }

    public void Nazad(){
        UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);
    }

    public void Quit(){
        Application.Quit();
    }
}

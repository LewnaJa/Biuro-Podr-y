using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Sceny : MonoBehaviour
{
    public void Wakacje()
    {
        SceneManager.LoadScene(0);
    }

    public void Wycieczki()
    {
        SceneManager.LoadScene(1);
    }

    public void Loty()
    {
        SceneManager.LoadScene(2);
    }

    public void Ulubione()
    {
        SceneManager.LoadScene(3);
    }

    public void Rezerwacje()
    {
        SceneManager.LoadScene(4);
    }

    public void Konto()
    {
        SceneManager.LoadScene(5);
    }

    public void UlubioneWycieczki()
    {
        SceneManager.LoadScene(6);
    }
}

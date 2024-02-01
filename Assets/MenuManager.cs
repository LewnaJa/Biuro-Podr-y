using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuManager : MonoBehaviour
{
    public Transform BackgroundCanvas1;

    public Transform BackgroundCanvas2;

    public Transform BackgroundCanvas3;

    public void Close()
    {
        BackgroundCanvas1.gameObject.SetActive(false);
    }

    public void Close2()
    {
        BackgroundCanvas2.gameObject.SetActive(false);
    }

    public void Close3()
    {
        BackgroundCanvas3.gameObject.SetActive(false);
    }
}

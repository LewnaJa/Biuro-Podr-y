using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuMenager : MonoBehaviour
{
    public Transform BackgroundCanvas1;
    public Transform BackgroundCanvas2;
    public Transform BackgroundCanvas3;

    public void Close()
    {
        BackgroundCanvas1.gameObject.SetActive(false);
        BackgroundCanvas2.gameObject.SetActive(false);
        BackgroundCanvas3.gameObject.SetActive(false);
    }

}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DropDownSA : MonoBehaviour
{
    [SerializeField]
    private InputField mainInput;

    [SerializeField]
    private InputField mainInput2;

    [SerializeField]
    private InputField mainInput3;

    [SerializeField]

    public GameObject WakacjeWysz1;

    public GameObject WakacjeWysz2;

    public GameObject WakacjeWysz3;

    public GameObject WakacjeWysz4;

    public GameObject WakacjeWysz5;

    public GameObject WakacjeWysz6;

    // Update is called once per frame
    void Update()
    {
        if (mainInput.text == "polska" && mainInput3.text == "06.04.2022-20.04.2022" && mainInput2.text == "2 os." | mainInput2.text == "3 os." | mainInput2.text == "4 os.")
        {
            WakacjeWysz1.gameObject.SetActive(false);
            WakacjeWysz2.gameObject.SetActive(false);
            WakacjeWysz3.gameObject.SetActive(false);
            WakacjeWysz4.gameObject.SetActive(true);
            WakacjeWysz5.gameObject.SetActive(false);
            WakacjeWysz6.gameObject.SetActive(false);
        }
        else if (mainInput.text == "chiny" && mainInput3.text == "01.05.2022-10.05.2022" &&  mainInput2.text == "6 os." | mainInput2.text == "5 os." | mainInput2.text == "4 os.")
        {
            WakacjeWysz1.gameObject.SetActive(false);
            WakacjeWysz2.gameObject.SetActive(false);
            WakacjeWysz3.gameObject.SetActive(false);
            WakacjeWysz4.gameObject.SetActive(false);
            WakacjeWysz5.gameObject.SetActive(true);
            WakacjeWysz6.gameObject.SetActive(false);
        }
        else if (mainInput.text == "francja" && mainInput3.text == "10.05.2022-24.05.2022" && mainInput2.text == "1 os." | mainInput2.text == "2 os.")
        {
            WakacjeWysz1.gameObject.SetActive(false);
            WakacjeWysz2.gameObject.SetActive(false);
            WakacjeWysz3.gameObject.SetActive(false);
            WakacjeWysz4.gameObject.SetActive(false);
            WakacjeWysz5.gameObject.SetActive(false);
            WakacjeWysz6.gameObject.SetActive(true);
        }
        else
        {
            WakacjeWysz1.gameObject.SetActive(true);
            WakacjeWysz2.gameObject.SetActive(true);
            WakacjeWysz3.gameObject.SetActive(true);
            WakacjeWysz4.gameObject.SetActive(false);
            WakacjeWysz5.gameObject.SetActive(false);
            WakacjeWysz6.gameObject.SetActive(false);
        }

    }
}
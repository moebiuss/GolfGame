using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Yodo1.MAS;

public class Banner : MonoBehaviour
{


    private void OnEnable()
    {
        Innit.Initialized += BannerShow;
    }
    void BannerShow()
    {
        Yodo1U3dMas.SetBannerAdDelegate((Yodo1U3dAdEvent adEvent, Yodo1U3dAdError error) => {
            Debug.Log("[Yodo1 Mas] BannerdDelegate:" + adEvent.ToString() + "\n" + error.ToString());
            switch (adEvent)
            {
                case Yodo1U3dAdEvent.AdClosed:
                    Debug.Log("[Yodo1 Mas] Banner ad has been closed.");
                    break;
                case Yodo1U3dAdEvent.AdOpened:
                    Debug.Log("[Yodo1 Mas] Banner ad has been shown.");
                    break;
                case Yodo1U3dAdEvent.AdError:
                    Debug.Log("[Yodo1 Mas] Banner ad error, " + error.ToString());
                    break;
            }
        });
        //for banner on bottom
        //for banner on top
        int align = Yodo1U3dBannerAlign.BannerTop;

        Yodo1U3dMas.ShowBannerAd(align);

    }
    private void OnDisable()
    {
        Innit.Initialized -= BannerShow;
    }
}

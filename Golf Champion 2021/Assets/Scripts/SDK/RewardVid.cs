using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using Yodo1.MAS;

public class RewardVid : MonoBehaviour
{
    private void OnEnable()
    {
        Innit.Initialized += ShowVid;
    }
   public void ShowVid()
    {
        bool isLoaded = Yodo1U3dMas.IsRewardedAdLoaded();
         Yodo1U3dMas.ShowRewardedAd();
        Yodo1U3dMas.SetRewardedAdDelegate((Yodo1U3dAdEvent adEvent, Yodo1U3dAdError error) => {
            Debug.Log("[Yodo1 Mas] RewardVideoDelegate:" + adEvent.ToString() + "\n" + error.ToString());
            switch (adEvent)
            {
                case Yodo1U3dAdEvent.AdClosed:
                    Debug.Log("[Yodo1 Mas] Reward video ad has been closed.");
                    break;
                case Yodo1U3dAdEvent.AdOpened:
                    Debug.Log("[Yodo1 Mas] Reward video ad has shown successful.");
                    break;
                case Yodo1U3dAdEvent.AdError:
                    Debug.Log("[Yodo1 Mas] Reward video ad error, " + error);
                    break;
                case Yodo1U3dAdEvent.AdReward:
                    Debug.Log("[Yodo1 Mas] Reward video ad reward, give rewards to the player.");
                    break;
            }
        });
    }
    private void OnDisable()
    {
        Innit.Initialized -= ShowVid;
    }
}

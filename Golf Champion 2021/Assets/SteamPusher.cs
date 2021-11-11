using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SteamPusher : MonoBehaviour
{
    bool BallTouched;
    GameObject contactedObj;
    bool BallonGround;
    float timer = 3;
    [SerializeField] float SteamTimer;
    void Start()
    {

    }
    private void OnEnable()
    {
        BallController.InfoSend += FlagCheck;
    }
    void FlagCheck()
    {
        BallonGround = true;
    }
    private void OnDisable()
    {
        BallController.InfoSend -= FlagCheck;
    }
    void Update()
    {
        SteamTimer -= Time.deltaTime;
        if (SteamTimer < 0)
        {
            GetComponent<BoxCollider>().enabled = false;
        }
        if (SteamTimer < -8.6f)
        {
            GetComponent<BoxCollider>().enabled = true;
            SteamTimer = 6;
        }
        if (BallTouched)
        {
         
        }
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.GetComponent<BallController>() != null)
        {

            other.gameObject.GetComponent<BallController>().SetState(BallStates.Steamed);
        }
    }
    
}

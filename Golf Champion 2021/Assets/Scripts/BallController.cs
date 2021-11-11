using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.SceneManagement;
public enum BallStates
{
    Normal,
    Idle,
    Steamed,
    Shot,
    None
}
public class BallController : MonoBehaviour
{
    Rigidbody rb;
    float CrossX;
    float ShootPower;
    bool OnShot;
    float timer = 2.3f;
    GameObject ContactedObj;
    bool InfoSent;
    public static Action InfoSend;
    int LastScore;
    [SerializeField] int index;
    Vector3 originPos;
    [SerializeField] BallStates State;
    private void OnEnable()
    {
        Subscribe();
        if (index == 0)
        {
            gameObject.tag = "PlayerBall";
            FindObjectOfType<UIElementsController>().PutDistance = Vector3.Distance(Put.Instance.transform.position,transform.position);
        }
    }
    public void SetState(BallStates state)
    {
        State = state;
    }
    void OnGameEnded(int _number)
    {
        Destroy(gameObject);
    }
    private void Subscribe()
    {
        if (index == 0)
            PlayerController.ThrowBall += BallStart;
        else OpponentController.BallThrown += BallStart;
        VarContainer.GameEnded += OnGameEnded;
    }

    void BallStart(float a, float b, int x)
    {
        if (x == index)
        {
            rb.isKinematic = false;
            CrossX = a;
            ShootPower = b * 5;
            OnShot = true;
            Vector3 offset = transform.forward;
            offset.x += CrossX;
            offset.z += ShootPower * 5;
            offset.y += ShootPower;
            rb.velocity = offset * 0.9f;
            rb.AddForce(offset);
            State = BallStates.Shot;
        }
    }
    private void OnDestroy()
    {
        Unsubscribe();
        VarContainer.GameEnded -= OnGameEnded;
        VarContainer.SetScore(index,0);
    }
    private void Unsubscribe()
    {
        if (index == 0)
            PlayerController.ThrowBall -= BallStart;
        else OpponentController.BallThrown -= BallStart;
    }
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        rb.isKinematic = true;
        if (GetComponentInChildren<ParticleSystem>())
            GetComponentInChildren<ParticleSystem>().Stop();

    }
    int GetScore()
    {
        return ContactedObj.GetComponent<GroundPiece>().Score;
    }
    void Update()
    {

        if (timer < 0)
        {
            if (!rb.isKinematic)
            {

                rb.isKinematic = true;
                Unsubscribe();
                if (index == 0)
                {

                    
                    DontDestroyOnLoad(gameObject);
                }
                LastScore = GetScore();
                VarContainer.SetScore(index, LastScore);
                timer = 2.3f;
            }
        }
        if (OnShot)
        {
            if (transform.position.y < Put.Instance.transform.position.y - 5)
            {
                Destroy(gameObject);
            }
            if (timer > 0)
            {
                if (ContactedObj != null)
                {
                    if (!InfoSent)
                    {
                        InfoSend?.Invoke();
                        InfoSent = true;
                        if (index != 0) DontDestroyOnLoad(gameObject);
                    }

                    timer -= Time.deltaTime;
                }
                else if (State == BallStates.Shot)
                {
                    rb.AddForce(-transform.up * 1.5f);
                    transform.Rotate(transform.right);
                }
                else if (State == BallStates.Steamed)
                {
                    gameObject.AddComponent<SteamedBehaviour>();
                    State = BallStates.Idle;
                }
            }
        }
        else
        {

        }
    }
    private void OnCollisionStay(Collision collision)
    {
        if (collision.gameObject.tag == "Ground")
        {
            if(collision.gameObject == Put.Instance)
            {

            }
            ContactedObj = collision.gameObject;
        }
    }
    private void OnCollisionExit(Collision collision)
    {
        ContactedObj = null;
    }

}
class SteamedBehaviour : MonoBehaviour
{
    float timer = 5;
    public void Setters()
    {

    }
    private void Update()
    {
        BallDragger(gameObject);
    }

    void BallDragger(GameObject contact)
    {
        timer -= Time.deltaTime;
        if (timer < 0)
        {
            Destroy(this);
        }
        else
        {
            Vector3 offset = contact.transform.position;
            offset.z += 10;
            offset.y += 30;
            contact.transform.position = Vector3.MoveTowards(contact.transform.position, offset, Time.deltaTime * 20);
        }
    }
}
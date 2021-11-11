using UnityEngine;
using System.Collections;

public class ScrollingUVs_Layers : MonoBehaviour
{
    //public int materialIndex = 0;
    public Vector2 uvAnimationRate = new Vector2(1.0f, 0.0f);
    public string textureName = "_MainTex";

    Vector2 uvOffset = Vector2.zero;

    void LateUpdate()
    {
        uvOffset += (uvAnimationRate * Time.deltaTime);
        if (GetComponent<Renderer>().enabled)
        {
            GetComponent<Renderer>().sharedMaterial.SetTextureOffset(textureName, uvOffset);
        }
    }
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.GetComponent<BallController>())
        {
            if (collision.gameObject.GetComponentInChildren<ParticleSystem>())
            {


                collision.gameObject.GetComponentInChildren<ParticleSystem>().Play();
                collision.gameObject.GetComponentInChildren<ParticleSystem>().gameObject.transform.parent = null;
                collision.gameObject.GetComponent<MeshRenderer>().enabled = false;
                Destroy(collision.gameObject, 3);
            }
        }
    }
}
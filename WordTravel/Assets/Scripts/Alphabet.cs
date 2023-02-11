using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
[CreateAssetMenu]
public class Alphabet : ScriptableObject
{
    public List<string> Letters;
    public List<Sprite> Sprites;
}

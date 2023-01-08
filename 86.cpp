// Hash table-linear probing
#include <bits/stdc++.h>
using namespace std;
#define SIZE 10
int Hash(int key)
{
    return key % SIZE;
}
int probe(int H[], int key)
{
    int index = Hash(key);
    int i = 0;
    while (H[(index + i) % SIZE] != 0)
    {
        i++;
    }
    return (index + i) % SIZE;
}
void insert(int H[], int key)
{
    int index = Hash(key);
    if (H[index] != 0)
    {
        index = probe(H, key);
    }
    H[index] = key;
}
int search(int H[], int key)
{
    int index = Hash(key);
    int i = 0;
    while (H[(index + i) % SIZE] != 0 && H[(index + i) % SIZE] == key)
    {
        i++;
    }
    return (index + i) % SIZE;
}
int main()
{
    int HT[10] = {0};
    cout << Hash(12);
    cout << endl;
    insert(HT, 12);
    cout << HT[2];
    insert(HT, 25);
    insert(HT, 35);
    insert(HT, 26);
    for (int i = 0; i < 10; i++)
    {
        cout << HT[i] << " ";
    }
    cout << endl;
    cout << "Key found at " << search(HT, 35);
    return 0;
}
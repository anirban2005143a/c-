#include <bits/stdc++.h>
using namespace std;

void putCorrectPosiiton(int arr[], int p, int c)
{
    if (c!= 1 && arr[p] < arr[c] )
    {
        swap(arr[p], arr[c]);
        putCorrectPosiiton(arr, p / 2, p);
    }
}

void insertHeap(int arr[], int key , int size)
{
    arr[size+1] = key;

    putCorrectPosiiton(arr, (size + 1) / 2, size + 1);
}

int main()
{

    int n;
    cin >> n;
    int arr[n+10];
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
       cin>>arr[i];
    }

    int key;
    cin >> key;
    insertHeap(arr, key , n);

    for (int i = 1; i <= n+1; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[] , int n , int key){

    int l = 0; 
    int r = n-1;
    int mid = (l+r) / 2;


    while (l <= r)
    {

        if(arr[mid] == key){
            return mid ;
        }

        if(key < arr[mid])
            r = mid - 1;

        if(key > arr[mid])
            l = mid + 1;

        mid = (l+r) / 2;       
    }

    return -1;
    
}

   
int main()
{
    
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key ; 
    cin>>key;

    int ind = binarySearch(arr , n , key);
    cout<<ind;

    return 0;
}
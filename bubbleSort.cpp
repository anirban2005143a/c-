#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

int arr[n];

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

for (int i = 0; i < n-1; i++)
{
    bool isswap = false;
    for (int j = 0; j < n-i-1; j++)
    {
        if(arr[j]>arr[j+1]){
            isswap = true;
            swap(arr[j],arr[j+1]);
        }
    }
    if(isswap == false) break;
}

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}


    return 0;
}
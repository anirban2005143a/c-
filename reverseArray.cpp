#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    int reverse[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<arr<<endl;

    for(int i=0;i<n;i++){
        reverse[i] = arr[n-i-1];
    }

    // cout<<arr[n]<<endl;
    // cout<<reverse[n]<<endl;

    return 0;
}
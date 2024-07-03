#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int term;
    cin>>term;

    for(int i=0;i<n;i++){
        if(term == arr[i]){
            cout<<term<<" "<<i<<endl;
            break;
        }
        
    
    }
    
    return 0;
}
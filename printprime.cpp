#include<iostream>
using namespace std;

int main(){
    
    int a;
    int b;
    int i;
    cin>>a;
    cin>>b;

    for(int n=a;n<=b;n++){
        for(i=2;i<n;i++){
            if(n%i==0){
                break;
            }
        }

        if(i==n){
            cout<<n<<endl;
        }

    }

    return 0;
}
#include<iostream>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;

    for(int i=1;i<=a;i++){
        for(int i=1;i<=b;i++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
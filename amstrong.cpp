#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int originaln = n ;

    int num=0;

    while(n>0){
        int lastdigit = n%10;
        num = num + pow(lastdigit , 3) ;
        n = n/10;
    }

    if(num == originaln){
        cout<<"amstrong number"<<endl;
    }
    else{
        cout<<"not a amstrong number"<<endl;
        cout<<num<<endl;
    }

    return 0;
}
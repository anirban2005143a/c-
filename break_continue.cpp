#include<iostream>
using namespace std;

int main(){
    
    int pocketmoney = 3000;

    for(int day=1;day<=30;day++){

        if(day%2==0){
            continue;
        }
        if(pocketmoney==0){
            break;
        }
        pocketmoney-=300;
        cout<<"go for today"<<endl;
    }

    return 0;
}
#include<iostream>
using namespace std;

int main(){

    int* arr[10] = {nullptr};
    for (int i = 0; i < 10; i++)
    {
        if(arr[i] == nullptr){
            cout<<"fgg"<<endl;
        }
     }
    
    
    return 0;
}
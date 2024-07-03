#include<iostream>
using namespace std;

int main(){

    int m[4][3] = {{1,2,3},{4,5,6},{7,8,9},{1,2,3}};
    int key=8;
    // cin>>key;

    bool flag = false;

    int row=0,col=2;
    while(row<4 and col>=0){
        if(m[row][col] == key){
            flag = true;
        }
        else if(key > m[row][col]){
            row++;
        }
        else{
            col--;
        }
    }

    if(flag){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }

    return 0;
}
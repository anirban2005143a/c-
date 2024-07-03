#include<iostream>
using namespace std;

int main(){

    int row,col;
    cin>>row>>col;

    for(int i=1;i<=row;i++){
        for(int i=1;i<=col;i++){
            
            if(i==1 || i==row){
                cout<<"* ";
            }
            else if(i==1 || i==col){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
            
            
        }
        cout<<endl;
    }
    


    return 0;
}
#include<iostream>
using namespace std;

int main(){
    
    int m1[3][2] = {{1,2},{3,4},{5,6}};
    int m2[2][4] = {{1,2,1,1},{3,4,2,4}};
    int ans[3][4];

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            ans[i][j]=0;
        }
    }


    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<2;k++){
                ans[i][j] = m1[i][k]*m2[k][j];
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}
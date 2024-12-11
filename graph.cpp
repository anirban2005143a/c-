#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    /*adjacency matrix*/
    vector<vector<int>>mt(n+1 , vector<int>(n+1 , 0));
   
    
    for (int i = 0; i < m; i++)
    {
        int a,b;
        cin>>a>>b;
        mt[a][b] = 1;
        mt[b][a] = 1;
    }
    
    /*adjacency list*/
    // vector<vector<int>>li(n+1);
    // for (int i = 0; i < m; i++)
    // {
    //     int a,b;
    //     cin>>a>>b;
    //     li[a].push_back(b);
    //     li[b].push_back(a);
    // }
    
    for (int i = 1; i < mt.size(); i++)
    {
        for (int j = 1; j < mt[i].size(); j++)
        {
            cout<<mt[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
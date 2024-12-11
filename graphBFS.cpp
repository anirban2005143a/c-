#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    
    /*adjacency list*/
    vector<vector<int>>li(n+1);
    for (int i = 0; i < m; i++)
    {
        int a,b;
        cin>>a>>b;
        li[a].push_back(b);
        li[b].push_back(a);
    }
    
    queue<int>q;
    vector<int> vis(n+1 , 0);
    int ind = 1;

    q.push(1);
    vis[1] = 1;
    while (!q.empty())
    {   
        int temp = q.front();
        q.pop(); 
        cout<<temp<<" ";
        
        for (int i = 0; i < li[temp].size(); i++)
        {
            if(vis[li[temp][i]] == 0) {
                q.push(li[temp][i]);
                vis[li[temp][i]] = 1;    
            }
        }
    }
    

    return 0;
}
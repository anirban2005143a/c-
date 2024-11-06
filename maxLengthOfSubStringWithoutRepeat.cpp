#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    int n = s.size() - 1;
    int maxLength = 0;
   
    int l = 0;
    int r = 0;

    unordered_map<char , int>mp;

    while (r <= n)
    {
        if(mp[s[r]] && mp[s[r]]>= l){
            l = mp[s[r]] + 1;
            mp[s[r]] = r;
            maxLength = max(maxLength , r-l+1);
            r++;
        }else{
            mp[s[r]] = r;
            maxLength = max(maxLength , r-l+1);
            r++;
        }
    }

    cout<<maxLength<<" ";
    

    return 0;
}
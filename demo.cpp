#include <bits/stdc++.h>
using namespace std;

int main()
{

     int t;
     cin >> t;

     while (t--)
     {
          int n ,k,p;
          cin>>n>>k>>p;

          vector<int> arr;
          int max = INT_MIN;
          int sum = 0;
          for (int i = 0; i < n; i++)
          {
               int temp;
               cin>>temp;
               arr.push_back(temp);
               if(max < temp) max = temp;
               else sum += temp;
          }

          if((sum + p) == (max + k)) cout<<""<<endl;
          else if((sum + p) > (max + k)) cout<<""<<endl;
          else cout<<""<<endl;
          
     }

     return 0;
}
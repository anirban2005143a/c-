#include <bits/stdc++.h>
using namespace std;

void sort(vector<int> &arr)
{
  int n = arr.size();

  for (int i = 1; i < n; i++)
  {
    int j = i;

    while (j>0)
    {
        if(arr[j-1] > arr[j]){
            swap(arr[j-1] , arr[j]);
        }
            j--;
    }
  }

}

int main()
{

    int n;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr);

   for(int i: arr){
    cout<<i<<" ";
   }
    

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void countSort(vector<int> &arr , int max)
{

    int n = arr.size();

    vector<int> b;
    vector<int> ans(n);

    // fill all elements to 0
    for (int i = 0; i < max+1; i++)
    {
        b.push_back(0);
    }

    // set the b array
    for (int i = 0; i < n; i++)
    {
        b[arr[i]]++;
    }

    // modify the b array
    for (int i = 1; i < b.size(); i++)
    {
        b[i] = b[i] + b[i - 1];
    }

    // set the ans array
    for (int i = n - 1; i >= 0; i--)
    {
        b[arr[i]]--;
        ans[b[arr[i]]] = arr[i];
    }

    // copy the ans value to original array
    for (int i = 0; i < ans.size(); i++)
    {
        arr[i] = ans[i];
    }
}

int main()
{

    int n;
    cin >> n;
    int max = 0;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
        if (temp > max)
            max = temp;
    }

    countSort(arr , max);

    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}
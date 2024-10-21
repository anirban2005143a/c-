#include <bits/stdc++.h>
using namespace std;

int qs(vector<int> &arr, int low, int high)
{
    int i = low;
    int j = high;

    int pivet = arr[low];

    while (i < j)
    { 
        while (arr[i] <= pivet && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivet && j >= low + 1)
        {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);

    }
    swap(arr[low] , arr[j]);

    return j;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        // cout<<"fvgfgf";
        int pindex = qs(arr, low, high);
        quickSort(arr, low, pindex - 1);
        quickSort(arr, pindex + 1, high);
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

    quickSort(arr, 0, n - 1);

    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}
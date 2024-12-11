#include <bits/stdc++.h>
using namespace std;

class heap
{

public:
    int size = 6;
    int arr[100] = {0, 60, 40, 30, 50, 70, 20};
    

    void printHeap()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void heapify_max(int i, int n)
    {
       
        int largest = i;
        int left = 2 * i;
        int right = 2 * i + 1;

        if (left <= n && arr[left] > arr[largest])
            largest = left;

        if (right <= n && arr[right] > arr[largest])
            largest = right;

        if (largest != i)
        {
            swap(arr[largest], arr[i]);
            heapify_max(largest, n);
        }
    }

    void buildHeap(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            size++;
            cin >> arr[size];
        }
        for (int i = n / 2; i >= 1; i--)
        {
            heapify_max(i, n);
        }
    }

    void non_decreasing(int n)
    {
        for (int i = n; i >= 2; i--)
        {
            swap(arr[1], arr[i]);
            heapify_max(1, i-1);
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int n = 6;
    // cout << "enter no of elements : ";
    // cin >> n;

    heap h;

    // h.buildHeap(n);

    for (int i = n / 2; i >= 1; i--)
    {
        h.heapify_max(i , n);
    }
    h.printHeap();

    h.non_decreasing(n);

    h.printHeap();

    return 0;
}
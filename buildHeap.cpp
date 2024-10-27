#include <bits/stdc++.h>
using namespace std;

class heap
{

public:
    int arr[100];
    int size = 0;

    void insert(int val)
    {
        size++;
        arr[size] = val;
        int child = size;
        int parent = size / 2;
        while (child > 1 && arr[parent] < arr[child])
        {
            swap(arr[parent], arr[child]);
            child = parent;
            parent = child / 2;
        }
    }

    void remove()
    {
        arr[1] = arr[size];
        size--;
        int c = 1;
        while (2*c <= size && (2*c)+1 <= size && (arr[c] < arr[2 * c] || arr[c] < arr[2 * c + 1]))
        {
            if (arr[2 * c] > arr[(2 * c) + 1])
            {
                swap(arr[c], arr[2 * c]);
                c = 2 * c;
            }
            if (arr[2 * c] < arr[(2 * c) + 1])
            {
                swap(arr[c], arr[(2 * c) + 1]);
                c = (2 * c) + 1;
            }
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
    heap h;

    h.insert(30);
    h.insert(50);
    h.insert(55);
    h.insert(60);
    h.insert(40);
    h.insert(70);

    h.print();

    h.remove();

    h.print();

    return 0;
}
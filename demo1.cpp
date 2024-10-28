#include <bits/stdc++.h>
using namespace std;

class heap
{
public:
  int arr[100] = {0, 60, 40, 30, 50, 70, 20};
  int size = 6;

  void takeInput(int val)
  {
    size++;
    arr[size] = val;
  }

  void heapify_max(int i)
  {
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= size && arr[left] > arr[largest])
    {
      largest = left;
    }

    if (right <= size && arr[right] > arr[largest])
    {
      largest = right;
    }

    if (largest != i)
    {
      swap(arr[largest], arr[i]);
      heapify_max(largest);
    }
  }

  void heapify_min(int i)
  {
    int smallest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= size && arr[left] < arr[smallest])
    {
      smallest = left;
    }

    if (right <= size && arr[right] < arr[smallest])
    {
      smallest = right;
    }

    if (smallest != i)
    {
      swap(arr[smallest], arr[i]);
      heapify_min(smallest);
    }
  }

  void insert_key_maxHeap(int key)
  {
    takeInput(key);

    int child = size;
    int parent = child / 2;
    while (child > 1 && arr[parent] < arr[child])
    {
      swap(arr[parent], arr[child]);
      child = parent;
      parent = child / 2;
    }
  }

  void insert_key_minHeap(int key)
  {
    takeInput(key);

    int child = size;
    int parent = child / 2;
    while (child > 1 && arr[parent] > arr[child])
    {
      swap(arr[parent], arr[child]);
      child = parent;
      parent = child / 2;
    }
  }

  int find_max()
  {
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = n / 2; i >= 1; i--)
    {
      heapify_max(i);
    }
    return arr[1];
  }

  int find_min()
  {
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = n / 2; i >= 1; i--)
    {
      heapify_min(i);
    }
    return arr[1];
  }

  int extract_max()
  {
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = n / 2; i >= 1; i--)
    {
      heapify_max(i);
    }

    int temp = arr[1];
    swap(arr[1], arr[size]);

    heapify_max(1);

    size--;

    return temp;
  }

  int extract_min()
  {
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = n / 2; i >= 1; i--)
    {
      heapify_min(i);
    }

    int temp = arr[1];
    swap(arr[1], arr[size]);

    heapify_min(1);

    size--;

    return temp;
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
  int n = 6;

  // for (int i = n / 2; i >= 1; i--)
  // {
  //   h.heapify_max(i);
  // }

  // h.print();

  // h.insert_key_maxHeap(80);

  // h.print();

  for (int i = n / 2; i >= 1; i--)
  {
    h.heapify_min(i);
  }

  h.print();

  // h.insert_key_minHeap(10);

  // h.print();

  cout << h.find_min() << endl;
  // cout << h.find_max() << endl;

  // cout << h.extract_max() << endl;
  cout << h.extract_min() << endl;

  h.print();

  // cout << h.find_max() << endl;
  cout << h.find_min() << endl;

  return 0;
}
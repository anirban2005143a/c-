#include <bits/stdc++.h>
using namespace std;

class heap
{
public:
  int arr[100] = {0,60,40,30,50,70 ,20};
  int size = 6;

  void takeInput(int key)
  {
    size++;
    arr[size] = key;
  }

  void heapify(int i)
  {
    int left = 2 * i;
    int right = 2 * i + 1;

    while ((left <= size || right <= size) && (arr[left] > arr[i] || arr[right] > arr[i]))
    {
      if (arr[left] > arr[right])
      {
        swap(arr[left], arr[i]);
        i = left;
      }
      else
      {
        swap(arr[right], arr[i]);
        i = right;
      }
      left = 2 * i;
      right = 2 * i + 1;
    }
  }

  void insert(int val)
  {
    size++;
    arr[size] = val;
    int c = size;
    int p = c / 2;

    while (c > 1 && arr[p] < arr[c])
    {
      swap(arr[p], arr[c]);
      c = p;
      p = c / 2;
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
  int n = 6;

  for (int i = n/2; i >=1 ; i--)
  {
    h.heapify(i);
  }
  
  h.print();

  h.insert(80);

  h.print();

  return 0;
}
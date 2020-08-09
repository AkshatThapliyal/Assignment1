#include<iostream>
using namespace std;
void print (int *array, int size)
{
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

void sort (int *array, int size)
{
  int t, j;
  for (int i = 1; i < size; i++)
    {
      t = array[i];
      j = i;
      while (j > 0 && array[j - 1] > t)
	{
	  array[j] = array[j - 1];
	  j--;
	}
      array[j] = t;
    }
}

int main ()
{
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;
  int arr[n];
  cout << "Enter elements:" << endl;
  for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

  sort (arr, n);
  cout << "Array after Sorting: ";
  print (arr, n);
}
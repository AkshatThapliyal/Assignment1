#include <iostream>
using namespace std;
int main()
{
  int n, i;
  cout << "Enter number of elements" << "\n";
  cin >> n;
  int arr[n];
  cout << "\n" << "Enter elements of the array" << "\n";
  for (i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
  int t;
  for (i = 0; i < n; i++)
    {
      if (arr[i] > arr[i + 1])
	{
	  t = arr[i];
	  arr[i] = arr[i + 1];
	  arr[i + 1] = t;
	}
    }
  cout << "Second largest number is " << arr[n - 2];
  cout << "\n";
  cout << "Second smallest number is " << arr[1];
  return 0;
}
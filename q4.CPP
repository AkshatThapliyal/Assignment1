#include <iostream>
#include <string.h>
using namespace std;

int
main ()
{
  char x[100], y[100];

  cout << "Enter the string";
  cout << "\n";
  cin >> x;
  int i, n = strlen (x);
  for (i = 0; i < n; i++)
    {
      y[n - 1 - i] = x[i];
    }
  if (strcmp (x, y) == 0)
    cout << "The string is a palindrome";
  else
    cout << "The string is not a palindrome";

  return 0;
}

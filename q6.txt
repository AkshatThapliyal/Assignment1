#include <iostream>
using namespace std;
int
main ()
{
  int n;
  cout << "Enter a number" << "\n";
  cin >> n;
  int i, count = 0;
  for (i = 2; i <= n / 2; ++i)
    {
      if (n % i == 0)
	{
	  count = 1;
	  break;
	}
    }
  if (count == 0)
    cout << "It is a prime number";
  else
    cout << n << "It is not a prime number";
  return 0;
}
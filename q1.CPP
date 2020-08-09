#include <iostream>
using namespace std;
int main ()
{

  int a, b, c, max;
  cout << "Enter Three Numbers";
  cin >> a >> b >> c;
  max = a;
  if (b > max)
    {
      max = b;
    }
  if (c > max)
    {
      max = c;
    }
  cout << "The Greatest Number is " << max;
  
  return 0;
}
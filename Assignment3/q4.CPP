#include<iostream>
#include<math.h>
using namespace std;

 
int sphereVolume (int rd)
{
  
return ((4.00 / 3.00) * 3.14159 * pow (rd, 3));

}


 
int main ()
{
  
 
int r;
  
cout << "Enter the radius\n";
  
cin >> r;
  
int v = sphereVolume (r);
  
cout << "Volume of the sphere is: ";
  
cout << v;

} 
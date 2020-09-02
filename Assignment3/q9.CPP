#include<iostream>
using namespace std;

 
#define ll long long
  
int main ()
{
  
 
int x[500] = { 0 };
  
 
for (int i = 3; i <= 500; i += 2)
    
    {
      
x[i] = 1;
  
} 
for (int i = 3; i <= 500; i += 2)
    
    {
      
if (x[i] == 1)
	
	{
	  
for (int j = i * i; j <= 500; j += i)
	    
	    {
	      
 
x[j] = 0;
	
 
} 
}
    
} 
x[0] = x[1] = 0;
  
x[2] = 1;
  
 
for (int i = 1; i < 500; i++)
    
    {
      
 
if (x[i] > 0)
	{
	  
cout << i << endl;
	
}
    
}
  
return 0;

}
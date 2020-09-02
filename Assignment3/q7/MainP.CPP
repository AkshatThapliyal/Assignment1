#include <iostream>
#include "invoice.h"
using namespace std;

 
int main () 
{
  
invoice i ("Sprite", "Cold Drink", 20, 15);
  
i.setpartNumber ("Bolt Cold Brew");
  
i.setDescription ("Coffee");
  
i.setPriceItem (100);
  
cout << i.getpartNumber () << " " << i.getDescription () << "\n";
  
cout << "item purchased:" << i.getPurchase () << " item price:" << i.
    getPriceItem () << "\n";
  
cout << "total amount:";
  
cout << i.getInvoiceAmount ();
  
return 0;

}

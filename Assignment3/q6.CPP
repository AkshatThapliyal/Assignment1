#include<iostream>
using namespace std;

 
class invoice
{

private:
string partNumber;
  
string description;
  
int purchased;
  
int pricePerItem;

public:
invoice (string partNumber = "name", string description =
	    "something", int purchased = 0, int pricePerItem = 0) 
  {
    
this->partNumber = partNumber;
    
this->description = description;
    
this->purchased = purchased;
    
this->pricePerItem = pricePerItem;
  
 
} 
 
void setpartNumber (string Number) 
  {
    
 
this->partNumber = Number;
  
} 
string getpartNumber () 
  {
    
return partNumber;
  
}
  
void setDescription (string something) 
  {
    
this->description = something;
  
} 
string getDescription ()
  {
    
return description;
  
}
  
void setPurchase (int value)
  {
    
if (purchased < 0)
      {
	
value = 0;
      
}
    
 
this->purchased = purchased;
  
 
}
  
int getPurchase ()
  {
    
return purchased;
  
}
  
void setPriceItem (int value)
  {
    
if (value < 0)
      {
	
value = 0;
      
}
    
this->pricePerItem = value;
  
 
}
  
int getPriceItem ()
  {
    
return pricePerItem;
  
}
  
 
 
int getInvoiceAmount ()
  {
    
int total;
    
total = pricePerItem * purchased;
    
return total;
  
}

};


 
int main ()
{
  
invoice i ("Sprite", "Cold Drink", 20, 15);
  
i.setpartNumber ("Bolt Cold Brew");
  
i.setDescription ("Coffee");
  
i.setPriceItem (100);
  
cout << i.getpartNumber () << " " << i.getDescription () << "\n";
  
cout << "Item purchased:" << i.getPurchase () << " Item price:" << i.
    getPriceItem () << "\n";
  
cout << "Total amount:";
  
cout << i.getInvoiceAmount ();
  
return 0;

}
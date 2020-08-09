#include<iostream>
#include<stdio.h>
using namespace std;


class account
{
private:
  int accountBalance;
public:
    account (int balance)
  {
    if (balance > 0)
      {
	accountBalance = balance;
      }
    else
      {
	cout << "Balace can't be negative.. setting it to zero \n";
	balance = 0;
	accountBalance = balance;


      }
  }
void Credit (int amount)
  {
    accountBalance += amount;


  }
  void Debit (int amount)
  {
    int temp = accountBalance - amount;
    if (temp > 0)
      {
	accountBalance -= amount;


      }
    else
      {
	cout << "Debit amount exceeded account balance. \n";
      }
  }
  int getBalance ()
  {
    return accountBalance;
  }
  };

int main ()
{
  int openBalance;
  cout << "enter the amount you want to start Arcader account with? \n";
  cin >> openBalance;
  account Arcader (openBalance);
  int paisa;
  cout << "enter the amount you want to add in Arcader's account? \n";
  cin >> paisa;
  Arcader.Credit (paisa);
  cout << Arcader.getBalance () << "\n";
  double paisa1;
  cout << "enter the amount you want to remove in Arcader's account? \n";
  cin >> paisa1;
  Arcader.Debit (paisa1);
  cout << Arcader.getBalance () << "\n";
  cout << "enter the amount you want to start Akshat account with? \n";
  cin >> openBalance;
  account Akshat (openBalance);
  cout << "enter the amount you want to add in Akshat's account? \n";
  cin >> paisa;
  Akshat.Debit (paisa);
  cout << Akshat.getBalance () << "\n";
  cout << "enter the amount you want to remove in Akshat's account? \n";
  cin >> paisa1;
  Akshat.Debit (paisa1);
  cout << Akshat.getBalance () << "\n";
  return 0;
}
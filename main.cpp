#include <iostream>

using namespace std;

class SavingsAccount{
private:
float savingsBalance;
static float annualInterestRate;


public:

SavingsAccount(float newbalance=0):savingsBalance(newbalance){}

static void modifyInterestRate(float newinterest){

  annualInterestRate = newinterest;
}

void output(){

  cout<< "Your saving balance are : "<<savingsBalance<<endl;
}


float calculateMonthlyInterest(){
  savingsBalance+=savingsBalance*annualInterestRate/12;
  return savingsBalance*annualInterestRate/12;
}




};
float SavingsAccount::annualInterestRate = 0;

int main(){
SavingsAccount saver1(2000);
SavingsAccount saver2(3000);
saver1.modifyInterestRate(0.3);
  cout<<"Saver 1 : "<<saver1.calculateMonthlyInterest()<<endl;
  saver1.output();
  cout<<"Saver 2 : "<<saver2.calculateMonthlyInterest()<<endl;
  saver2.output();

  saver1.modifyInterestRate(0.4);
    cout<<"Saver 1 : "<<saver1.calculateMonthlyInterest()<<endl;
  saver1.output();
  cout<<"Saver 2 : "<<saver2.calculateMonthlyInterest()<<endl;
  saver2.output();

  
}
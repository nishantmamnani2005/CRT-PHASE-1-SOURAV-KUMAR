#include<iostream>
using namespace std;
// Base class
class Atm{
    private:
    int balance;
    public:
    Atm(){
        cout<<"Welcome to the ATM"<<endl;
       balance=1000;
     
    }
    void withdraw(int amount){
        if(amount>balance){
            cout<<"Insufficient balance"<<endl;
        }
        else{
            balance-=amount;
            cout<<"Amount withdrawn: "<<amount<<endl;
        }
    }
    void showBalance(){
        cout<<"Current balance: "<<balance<<endl;
    }
};

int main()
{

    Atm a;
    
    a.withdraw(400);
    a.showBalance();
    return 0;
}
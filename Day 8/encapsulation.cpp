#include<iostream>
using namespace std;
// Base class
class Atm{
    private:
    int balance;
    public:
    void setBalance(int b){
        balance=b;
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
    int getBalance(){
        return balance;
    }
};
int main(){
    Atm a;
    a.setBalance(10000);
    int amount;
    cout<<"Enter the amount to withdraw: ";
    cin>>amount;
    a.withdraw(amount);
    cout<<"the balance is: "<<a.getBalance()<<endl;
    return 0;
}
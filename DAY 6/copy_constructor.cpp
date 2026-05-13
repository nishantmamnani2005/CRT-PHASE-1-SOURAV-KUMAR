#include<iostream>
#include<string>
using namespace std;
class cricketers{
    public:
    string name;
    int runs;
    //parameterized constructor
    cricketers(string n, int runs){
        this->name=n;
        this->runs=runs;
    }
    //copy constructor
    cricketers(cricketers &c){
        name=c.name;
        runs=c.runs;

    }
    void show(){
        cout<<"Name:"<<name<<endl;
        cout<<"Runs:"<<runs<<endl;
    }
};
int main(){
    cricketers c1("Virat Kohli", 12000);
    c1.show();
    //copy constructor  
  cricketers c2(c1);
    c2.show();
    return 0;
}
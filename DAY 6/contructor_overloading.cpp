#include<iostream>
#include<string>
using namespace std;
class students
{
    // Access specifier    
    public:
    string name;
    int roll_no;
    //default constructor
      students(){
        name="your name please";
        roll_no=0;
    
    }
    //parameterized constructor
    students(string n, int r){
        this->name=n;
        this->roll_no=r;
    }

    void show()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll No:"<<roll_no<<endl;
    }

};

int main(){
    //s1 calling default constructor
    students s1;
    s1.show();
    //s2 calling parameterized constructor
    students s2("Nishant", 19);
    s2.show();
    return 0;
}


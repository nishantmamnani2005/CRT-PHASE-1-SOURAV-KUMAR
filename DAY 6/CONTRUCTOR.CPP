#include<iostream>
#include<string>
using namespace std;
class students
{
    // Access specifier    
    public:
    string name;
    int roll_no;

    students(){
        name="your name please";
        roll_no=0;
    
    }
    void show()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll No:"<<roll_no<<endl;
    }

};
int main(){
    students s1;
    s1.show();
    return 0;

}
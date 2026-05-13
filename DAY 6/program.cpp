#include<iostream>
#include<string>
using namespace std;
class student
{
    public:
    string name;
    int roll_no;
    string email_id;
    string phone_no;
    string batch;
    string crtclass;
    //default constructor
    student(){
        name="your name please";
        roll_no=0;
        email_id="your email id please";
        phone_no="your phone no please";
        batch="your batch please";
        crtclass="your crtclass please";
    }
    //parameterized constructor
     student(string n, int r, string e, string p, string b, string c){
         this->name=n;
        this->roll_no=r;
        this->email_id=e;
        this->phone_no=p;
        this->batch=b;
        this->crtclass=c;
     }
      void show(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll No:"<<roll_no<<endl;
        cout<<"Email Id:"<<email_id<<endl;
        cout<<"Phone No:"<<phone_no<<endl;
        cout<<"Batch:"<<batch<<endl;
        cout<<"CRT Class:"<<crtclass;
      }
};
 int main(){
    //s1 calling default constructor
    student s1;
    s1.show();
    //s2 calling parameterized constructor
    student s2("Nishant", 856, "nishant@example.com", "6376573928", "2026", "14E");
    s2.show();
    return 0;
}
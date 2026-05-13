#include<iostream>
using namespace std;
class student{
    public:
    static int reg_no;
    student(){
        reg_no++;
    }
    void showreg_no(){
        cout<<"Registration Number: "<<reg_no<<endl;
    }
};
int student::reg_no=100;
int main(){
    student s1;
    student s2;
    student s3;
    student s4;
   student::reg_no;
    cout<<"Total number of students registered:"<<student::reg_no;
    return 0;
}
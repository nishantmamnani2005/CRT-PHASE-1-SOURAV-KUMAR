#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
 int main() {
    string st1 = "Hello";
    string st2 = "jecrc";
    cout << "String 1: " << st1 << endl;
    cout << "String 2: " << st2 << endl;
    int n = st1.length();
    cout << "Length of string 1: " << n << endl;
    //append string
    cout<<"after appending string is:"<<st1.append("student")<<endl;
    //empty string
    cout<<"Is string empty? "<<st2.empty()<<endl;
    //concatenate string
    cout<<"after concatenating string is:"<<st1+"bacho"<<endl;
    cout<<"after concatenating string is 2:"<<st1<<endl;
    //push back
    st2.push_back('u');
    cout<<"after pushing back method:"<<st2<<endl;
    //pop back
    st2.pop_back();
    cout<<"after pop_back method:"<<st2<<endl;
    //find() method
    int index = st1.find("ello");
    cout<<"index of 'ello' in string 1: "<<index<<endl;
    //at method .str1[1]
    char ch = st1.at(1);
    cout<<"character at index 1 in st1: "<<ch <<endl;
    //swap method
    st1.swap(st2);
    cout<<"after swapping st1 and st2: "<<endl;
    cout<<"st1: "<<st1<<endl;
    cout<<"st2: "<<st2<<endl;

    //substr() method
    string subst = st2.substr(5, 6);
    cout<<"substring of st2from index 5 of length 6: "<<subst<<endl;
    //getline() method
    string str3;
    //cin >> str3
    getline(cin, str3);
    cout<<"you entered: "<<str3<<endl;
    return 0;
 }

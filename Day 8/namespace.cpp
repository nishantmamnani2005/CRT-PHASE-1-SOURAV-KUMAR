#include<iostream>
using namespace std;
// Namespaces are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries.
namespace Virat{
    void show(){
        cout<<"Virat Kohli is the best batsman in the world."<<endl;
    }
}
//namespace rohit is created to avoid name collision with namespace virat
namespace Rohit{
    void show(){
        cout<<"Rohit Sharma is the part of MI."<<endl;
    }
}
int main(){
    Virat::show();
    Rohit::show();
    return 0;
}
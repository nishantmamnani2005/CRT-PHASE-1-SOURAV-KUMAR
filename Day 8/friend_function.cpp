//friend function
#include<iostream>
using namespace std;
class Area{
    private:
    int length;
    int breadth;
    public:
    //constructor
    Area(int l,int b){
        length=l;
        breadth=b;
    }
    friend void showarea(Area a);
  

};

  void showarea(Area b){
      {
    cout << "Area of rectangle is: " << b.length * b.breadth << endl;
}
    }
int main(){
    Area a1(10,20);
    showarea(a1);   
    return 0;
}
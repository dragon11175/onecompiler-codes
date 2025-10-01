#include <iostream>
using namespace std;

class A{
  public:
  
  void display(){
    cout<<"class a"<<"\n";
  }
  
};


class B:public A{
  public:
  
    void display(){
    cout<<"class b"<<"\n";
  }
};


int main() 
{
    B lalit;
    lalit.A::display();// resulation operator ki madad se hum class a ko acces kerte hai 
    A *ptr;
    ptr=&lalit;
    ptr->display();
}
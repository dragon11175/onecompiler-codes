#include <iostream>
using namespace std;

class student{
  private:
  
  int a;
  
  public:
  student(){ // ye hai default contructor
    cout<<"heeloo";
  }
  
  student(int r){// ye hai constructor parameter
    a=r;
    cout<<"hello lalit "<<a;
  }
  void set_roll_no(int b){
    a=b;
  }
  
};

int main() 
{
   student s1(123);// yha hume parameter dena hi padega warna error ayega
   
   return 0;
}
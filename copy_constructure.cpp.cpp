#include <iostream>
using namespace std;

class demo{
  public:// public data member . in this program we acces directly in main
  int a;// data member
  
  public:
    
    demo(){// default constructure
      a=123;
    }
    
    demo(demo &rr){// copy constructure
      a=rr.a;
    }
    
    
};

int main() 
{
    demo aa;//object 1
    demo bb(aa); // object 2 and get values from object 1
  
    
    cout<<bb.a;// here we directly acces data members
    return 0;
}
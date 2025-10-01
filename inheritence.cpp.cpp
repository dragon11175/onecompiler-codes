#include <iostream>
using namespace std;

//first class of features 
class features{
  public:
  void start(){
    cout<<"your car is start now";
  }
  
};

//inherites feature class in maruti class
class maruti:public features{
  private:
  string name1;
  string color1;
  int model1;
  
  public:
  void putdata(string name,string color,int model){
    name1=name;
    color1=color;
    model1=model;
    }
  
  void display(){
    cout<<"your car name is :"<<name1 <<endl;
    cout<<"your car color is :"<<color1<<endl;;
    cout<<"your model number is :"<<model1<<endl;
  }  
    
};



int main(){
  maruti car1;
  car1.putdata("swift","red",2019);
  car1.display();
  car1.start();
  
}
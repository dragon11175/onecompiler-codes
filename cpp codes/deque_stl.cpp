#include<iostream>
#include<deque>
using namespace std;

int main(){
  
  deque<int> deque1;
  
  deque1.push_back(45);
  deque1.push_back(66);
  deque1.push_front(77);
  deque1.push_front(88);
  deque1.push_front(99);
  deque1.insert(deque1.begin(),2,798);
  
  cout<<"elements after initialize by push font or back funtion:"<<endl;
  for(auto it=deque1.begin();it!=deque1.end();it++){
    cout<<*(it)<<endl;
  }
  
  deque1.pop_front();
  deque1.pop_back();
  
  cout<<"after using pop funtiion to remoave a element form back or fron:"<<endl;
  for(auto ir=deque1.begin();ir!=deque1.end();ir++){
    cout<<*(ir)<<endl;
  }
  
  cout<<"size of deque:"<<deque1.size()<<endl;
  
  deque1.erase(deque1.begin(),deque1.begin()+2);
  cout<<"size of deque after erases:"<<deque1.size()<<endl;
  
  deque1.clear();
  cout<<"size of deque after using clear funtion:"<<deque1.size()<<endl;
  
  
  
  
  
  
  
  
  
  return 0;
}
#include<iostream>
#include<list>
using namespace std;

int main(){
  list<int> list1;
  
  
  list1.push_back(45);
  list1.push_front(55);
  list1.push_front(66);
  list1.push_back(77);
  
  cout<<"push function result:"<<endl;
  list<int>::iterator it;
  for(it=list1.begin();it!=list1.end();it++){
    cout<<*(it)<<endl;
  }
  
  list1.pop_back();
  list1.pop_front();
  
  cout<<"pop functions result:"<<endl;
  for(it=list1.begin();it!=list1.end();it++){
    cout<<*(it)<<endl;
  }
  
  cout<<"front element of list:"<<list1.front()<<endl;
  cout<<"last element of list:"<<list1.back()<<endl;
  cout<<"size of list:"<<list1.size()<<endl;
  
  
  list1.clear();
  cout<<"after clear function size of list"<<list1.size()<<endl;
  
  
  
  
  return 0;
}
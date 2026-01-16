#include<iostream>
#include<stack>
using namespace std;

int main(){
  
  stack<int> s;
  
  s.push(34);
  s.push(88);
  s.push(44);
  s.push(66);
  s.push(85);
  
  cout<<"stack is empty or not:"<<s.empty()<<endl;
  cout<<"size of stack:"<<s.size()<<endl;
  
  
  // now we swap aone stack element into other elements
  stack<int> s1;
  s.swap(s1);
  
  int temp=s.size();
  for(int i=1;i<=temp;i++){
     cout<<"pop:"<<s.top()<<endl;
     s.pop();
  }
  
  // details after swaping of new stack
  cout<<"after swaping!"<<endl;
  cout<<"size of new stack after swap:"<<s1.size()<<endl;
  cout<<"size of old stack after swap:"<<s.size()<<endl;
  
  
  return 0;
}

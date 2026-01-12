#include<iostream>
#include<deque>
using namespace std;

int main(){
  
  deque<int> deque1;
  
  deque1.push_back(45);
  deque1.push_back(66);
  deque1.push_front(77);
  deque1.push_front(88);
  
  deque<int>::iterator it;
  
  for(it=deque.begin();it!=deque.end();it++){
    cout<<*(it)<<endl;
  }
  
  
  
  
  return 0;
}
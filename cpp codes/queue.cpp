#include<iostream>
#include<queue>
using namespace std;

int main(){
  //first declare a queue
  queue<int> q;
  //second nitialize queue
  q.push(44);
  q.push(55);
  q.push(66);
  q.push(88);
  //now we see first element of queue
  cout<<"font element of queue:"<<q.front()<<endl;
  //now print alll values of queue
  int temp=q.size();
  cout<<"elements of queue:"<<endl;
  for(int i=1;i<=temp;i++){
    cout<<"pop:"<<q.front()<<endl;
    q.pop();
  }
  
  //now we check queue is empty or not:
  cout<<"queue is empty:"<<q.empty()<<endl;
  
  //now we swap this queue elements in new queue:
  queue<int>q1;
  q.push(55);
  q.push(88);
  q.swap(q1);
  cout<<"queue 2 is empty:"<<q1.empty()<<endl;
  
  //now we pop elements of queue 
  int temp1=q1.size();
  cout<<"elements of queue 2:"<<endl;
  for(int i=1;i<=temp1;i++){
    cout<<"pop:"<<q1.front()<<endl;
    q1.pop();
  }
    
  
  
  
  return 0;
}
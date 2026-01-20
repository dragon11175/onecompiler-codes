#include<iostream>
#include<queue>
using namespace std;

int main(){
  // here we declare a priorty queue
  priority_queue<int>q;
  
  //now initialize priorty_queue
  q.push(22);
  q.push(44);
  q.push(11);
  q.push(10);
  //now we see top element of priority queue
  cout<<"top element of priority queue:"<<q.top()<<endl;
  //now print all element and pop of priority queue
  int temp=q.size();
  for(int i=1;i<=temp;i++){
    cout<<"pop:"<<q.top()<<endl;
    q.pop();
  }
  
  //now we check queue is empty or not:
  cout<<"priority queue is empty:"<<q.empty()<<endl;
  
  
  //now we initialize its with reverse priority queue:
  priority_queue<int,vector<int>,greater<int>> q1;// it is a reverse priority queue
  
  q1.push(44);
  q1.push(55);
  q1.push(10);
  q1.push(99);
  
  // top element 
  cout<<"top element of reverse priority queue"<<q1.top()<<endl;
  
  //print the value 
  cout<<"print the elements of reverse priority element:"<<endl;
  int temp2=q1.size();
  for(int i=1;i<=temp2;i++){
    cout<<"pop:"<<q1.top()<<endl;
    q1.pop();
    }
  
  
  
  
  return 0;
}
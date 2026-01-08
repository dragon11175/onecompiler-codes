#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
  
  // creation of hash table
  unordered_map<string, int>m;
  //insertation 
  
  //method 1
  m.insert({"lalit",34});
  
  //method 2
  pair<string,int> pair1("jhonny",44);//template method of pair  
  
  //display
  cout<<m["lalit"]<<endl;
  cout<<m["jhonny"]
  
  
  
  return 0;
}



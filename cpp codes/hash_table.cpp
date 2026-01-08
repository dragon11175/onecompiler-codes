#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
  
  unordered_map<string, int>m;
  m.insert({"lalit",34});
  
  
  cout<<m["lalit"]<<endl;
  
  
  
  return 0;
}



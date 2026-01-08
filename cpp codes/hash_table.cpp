#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
  
  unordered_map<string, int>m;
  pair<string, int> pair2("lalit",34);
  m.insert(pair2);
  
  
  cout<<m["lalit"]<<endl;
  
  
  
  return 0;
}



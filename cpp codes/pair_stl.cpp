#include<iostream>
#include<utility>
using namespace std;

int main(){
  
  //here we declare a pair container 
  pair<int,int> p={2,5};  
  cout<<"value first of pair:"<<p.first<<endl;
  cout<<"value second of pair:"<<p.second<<endl;
  

  //her we make pair of another pair
  pair<int,pair<int,string>> p1={2,{4,"lalit"}};
  cout<<"values of pair of pair"<<endl;
  cout<<" first value of pair of pair:"<<p1.first<<endl;
  cout<<"second value first element of pair of pair:"<<p1.second.first<<endl;
  cout<<"second value second element of pair of pair:"<<p1.second.second<<endl;
  
  //here we make a vector of pair
  vector<pair<int,int>> vec;
  vec.push_back({25,37});
  vec.push_back({55,66});
  vec.push_back({67,98});
  vec.push_back({55,78});
  
  // this is range based for loop 
  cout<<"vector of pairs :"<<endl;
  for(auto p: vec){
    cout<<p.first<<" "<<p.second<<endl;
  }
  
  return 0;
}
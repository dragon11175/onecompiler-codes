#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;


int main(){
  //creating hash table
  unordered_map<string,int>m;

  //method 1 to inserte
  pair<string,int> pair2("lalit",34);
  m.insert(pair2);
  //method 2 to insert
  m.insert({"jhonny",44});

  //display  
  cout<<m.at("lalit")<<endl;//at function of unordered map
  cout<<m["jhonny"]<<endl;
  cout<<m["unknown"]<<endl;
  
  //size function
  cout<<m.size()<<endl;//size function of unorder map to check size of hash table
  
  //persence function
  cout<<"persence:"<<m.count("lalit")<<endl;//cout function of unordered map to check persence of any key. it return zero for false and return 1 for true
  cout<<"persence:"<<m.count("bro")<<endl;
  
  //erase function
  m.erase("jhonny");//erase function of unorder map to remove any element 
  cout<<"after erase one element:"<<m.size()<<endl;
  
  //iterator
  
  cout<<"while loop iterator:"<<endl;
  //itration with while loop
  unordered_map<string,int> :: iterator it =m.begin();
  while(it != m.end()){
    cout<<it->first<<" "<<it->second<<endl;
    it++;
  }
  
  cout<<"for loop iterator:"<<endl;
  //itration with for loop
  unordered_map<string,int> :: iterator ik;
  for(ik =m.begin();ik!=m.end();ik++){
    cout<<ik->first<<" "<<ik->second<<endl;
  }
  
  
  return 0;
}
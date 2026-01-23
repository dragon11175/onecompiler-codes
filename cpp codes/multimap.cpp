#include<iostream>
#include<map>
using namespace std;


int main(){
  //declare multi map
  multimap<string,int>m;
  
  //initialize the multimap
  m.insert({"mobile",123});
  m.emplace("laptop",44);
  m.emplace("tv",99);
  m.emplace("tv",88);
  
  //here we iterate map throug a iterator
  for(auto it=m.begin();it!=m.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
    
  }
  
  // here we check size of mutimap
  cout<<"size of multimap:"<<m.size()<<endl;
  
  // here we find element with key name
  cout<<"find a element with key:";
  auto ui=m.find("tv");
  if(ui!=m.end()){
    cout<<ui->first<<":"<<ui->second<<endl;
  }else{
    cout<<"element is not found"<<endl;
    }
  
  //here we erase a element with key name
  ui=m.find("tv");
  if(ui!=m.end()){
    cout<<"earse element :"<<ui->first<<endl;
    m.erase(ui);
  }
  
  //size after erase
  cout<<"size after erase :"<<m.size()<<endl;
  
  
  
  
  return 0;
}
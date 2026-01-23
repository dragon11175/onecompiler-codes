#include<iostream>
#include<map>
using namespace std;

int main(){
  
  //declare a map
  map<string,int> m;
  m.insert({"laptop",55});
  m.insert({"Tv",77});
  m.emplace("mobile",55);
  
  //pop elements from map
  cout<<"size of map:"<<m.size()<<endl;
  
  //iterate the map elements
  for(auto it=m.begin();it!=m.end();it++){
    cout<<it->first<<":"<<it->second<<endl;
  }
  
  cout<<"check index number of laptop: "<<m.count("laptop")<<endl;
  
  auto ui=m.find("laptop");
  if(ui!=m.end()){
    cout<<"your find element is:"<<ui->first<<"=>"<<ui->second<<endl;
  }else{
    cout<<"not found"<<endl;
  }
  
  
  
  return 0;
}
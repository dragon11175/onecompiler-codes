#include<iostream>
using namespace std;

int main(){
  
  //creating a vector
  //initialize elements with size and elements
  vector<int> vec={2,4};
  
  
  //directly initialize elements in vector
  vector<int>vec1={4,5,6};
  
  //initialize vector to another vector
  vector<int>vec2(vec1);
  
  //initialize elements in vector
  vec.push_back(4);
  vec.push_back(6);
  vec.push_back(9);
  
  //erase function to erase a element in vector
  vec.erase(vec.begin());// it erase 2 from vec
  vec.erase(vec.begin()+2);//it erase 4 from vec
  //range erase to earse n number of elements from vector
  cout<<"before range erase size:"<<vec1.size()<<endl;
  vec1.erase(vec1.begin(),vec1.begin()+2);//it structur like vec.erase(start,end),start is include and end is exclude  it earse 4 of index 1
  cout<<"after range erase size:"<<vec1.size()<<endl;
  
  
  //insert function to insert element to spacific position
  cout<<"before insert element of 1 index of vec2: "<<vec2.at(1)<<endl;
  vec2.insert(vec2.begin()+1,100);
  cout<<"after insert element of 1 index of vec2: "<<vec2.at(1)<<endl;
  
  //clear funtion to remove all element of a vector
  cout<<"before clear size of vec2:"<<vec2.size()<<endl;
  vec2.clear();
  cout<<"after clear size of vec2:"<<vec2.size()<<endl;
  
  //empty function to check vector is empty or not
  cout<<"vec2 is empty"<<vec2.empty()<<endl;
  
  //function to check size of vector
  cout<<"size of vector:"<<vec.size()<<endl;
  //funcion to check capacity of vector
  cout<<"capacity of vector:"<<vec.capacity()<<endl;
  
  // function to check front and end element in vectors
  cout<<"front element of vector:"<<vec.front()<<endl;
  cout<<"End element of vector:"<<vec.back()<<endl;


  //iterator to apply loop on vectors
  cout<<"iterator forwor::"<<endl;
  vec1.push_back(34);
  vec1.push_back(54);
  vec1.push_back(664);
  
  //vector<int>::iterator it;
  for(auto it=vec1.begin();it!=vec1.end();it++){
    cout<<*(it)<<endl;
  }
  
  //iterator reverse to apply reverse loop on vectors
  cout<<"iterator backword:"<<endl;
  
  vector<int>::reverse_iterator we;
  for(we=vec1.rbegin();we!=vec1.rend();we++){
    cout<<*(we)<<endl;
  }
  
  
  
  
  
  
  return 0;
}
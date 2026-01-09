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
  
  //
  
  //function to check size of vector
  cout<<"size of vector:"<<vec.size()<<endl;
  //funcion to check capacity of vector
  cout<<"capacity of vector:"<<vec.capacity()<<endl;
  
  // function to check front and end element in vectors
  cout<<"front element of vector:"<<vec.front()<<endl;
  cout<<"End element of vector:"<<vec.back()<<endl;
  
  
  
  
  
  
  return 0;
}
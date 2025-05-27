/*
* Group of related data members
* This concept is available in the cpp only
* gives arbitration or aliasing to the variable
* Tumhara dost hai manlo Aniket. Uska name bhi aniket hai aur chutiya bhi hai.
*/


#include<iostream>

using namespace std;

int play_with_references(){
  int *i = new int[5];
  int &refval = *i;
  for (int index = 0; index < 5; ++index)
    i[index] = index * 10;

  
//  int &refval1; //Refval must be initialize
  int &refval2 = refval;
  
  cout<<"Value in the heap"<<endl;
  for(int index =0; index<5; ++index){
  cout<<i[index] <<" ";
  }
  
  cout<<endl;
  cout<<&refval<<endl;
  cout<<&i<<endl;
  
  delete i; 
  
  cout<<"Value in the heap after deleting array from heap"<<endl;
  for(int index =0; index<5; ++index){
  cout<<i[index] <<" ";
  }
  
  cout<<endl; // kya value ayengi
  cout<<&refval<<endl; // kya value ayengi --> array ka index 0 ka address
  cout<<&refval2<<endl; // -->0
  cout<<&i<<endl; //kya value ayengi --> garbage value

  return 0;
}

int main()
{  
    play_with_references();
    return 0;

}
#include<iostream>
#include<string>

using namespace std;

int main() {
  
  string* mukul = new string ("Mukul Chauhan");
  string *ritika = mukul;
  
  cout << *ritika << endl;
  
  delete ritika;   // ❌ WRONG

  return 0;
}

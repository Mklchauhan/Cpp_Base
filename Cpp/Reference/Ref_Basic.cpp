/*
* Group of related data members
* This concept is available in the cpp only
* gives arbitration or aliasing to the variable
* Tumhara dost hai manlo Aniket. Uska name bhi aniket hai aur chutiya bhi hai.
*/


#include<iostream>

using namespace std;

int main()
{
    int var1 = 10;

    cout<<"var1 before the refrence"<<var1<<endl;
    int &var_update = var1; //It should get initialize with declaration
    cout<<"Address of the var1"<<&var1<<endl;
    var_update++; // Here it is just alias
    cout<<"update the var1 by increasing the var_update: "<<var_update<<endl;
    cout<<"Adress of the var_update"<<&var_update<<endl;

    //Here, Address of the variable will be same for referenced and variable var1
    
    return 0;
}
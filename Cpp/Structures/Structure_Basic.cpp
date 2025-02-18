#include<iostream>

using namespace std;

struct rectangle
    {
        int length;
        int breadth;
    };
struct volume : public rectangle
    {
        int height;
        
    };


int main(){

    //Decleration with seperate initialization
    struct rectangle r;  
     r.length = 10;
     r.breadth = 20;

    // Decleration with intialization
    struct volume rect;
    rect.length = 2;
    rect.breadth = 3;
    rect.height = 4;

    cout<<"Volume of the cube"<<rect.breadth * rect.height * rect.length <<endl;
    
    

     cout<<"Area of the rectangle: "<<r.length * r.breadth <<endl;

     return 0;
    
    
    
}
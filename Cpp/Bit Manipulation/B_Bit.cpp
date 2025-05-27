/*
* Here B stands for the Bit Manipulation section
*/

#include <iostream>
using namespace std;

/*
* writing the function which is setting the setting the bit at nth position
*/
int setbit(int &value,int &position){
    value = value | (1 << position);

    return value;
}

/*
* this functon clearing the nth bit of the number
*/

int clearbit(int &value, int &positon)
{
    value &= (1<<positon);

    return value;
}

/*
* from this function, we can toggle the bit
*/
int togglebit(int &value, int &Bit_position)
{
    value ^= (1<<Bit_position);

    return value;
}

/*
* check the nth position bit is set or not
*/
bool check_bit(int &value, int &position)
{
    bool bit = value & (1<<position);

    return bit;
}

/*
* this function checks the power of 2 number is or not?
*/

bool poweroftwo(int &num){
    num = num & (num-1);

    return num;
}

/*
* this function will count the Set bits of the payload data
*/

int countsetbit(int &data){
    int count = 0;
    for (; data>0; data=data>>1)
    {
        if (data&1)
        {
            count++;
        }
    }
    return count; 
}

int main(){
    int var_1 = 13; // 100
    int var_2 = 5;
    int position = 2; 

    // setbit(var_1,position); // Here if you give literal directly, it will show an binding error
    // cout<< "setting the bit "<< var_1<<" "<<endl; // here we will see the bit will not get set
    // clearbit(var_1,position);
    // cout<<"Cleared the bit "<<var_1<<" "<<endl;
    // togglebit(var_1,position);
    // cout<<"Toggled the bit "<<var_1<<endl;

    // if (check_bit(var_1, position))
    // {
    //     cout<<"Bit is set"<<endl;
    // }
    // else
    // {
    //     cout<<"Bit is not set"<<endl;
    // }

    // if (poweroftwo(var_2))
    // {
    //     cout<< "number is not power of two"<<endl;
    // }
    // else
    // {
    //     cout<<"Number is power of two"<<endl;
    // }

    cout<< countsetbit(var_1)<<endl;
    
    return 0;
}
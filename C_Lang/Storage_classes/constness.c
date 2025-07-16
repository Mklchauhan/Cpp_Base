#include<stdio.h>
#include<stdlib.h>

// void constness_1(){
//     int const data = 10;
//     data = 50; //it will give the error
//     printf("Value of data = %u", data);
// }
void constness_2(){
    int const data = 20;
    int *ptr = (int*) &data;
    *ptr = 50;
    printf("Value of Data in constness_2: %d\n",data);
}
void point_const(){
    int const *pData = (int*) 0x40000000;
    pData = (int*) 0x50000000;
    /*
    *   *pData = 60;
    * error: read-only variable is not assignable
    */

    printf("%d",pData);
    printf("%p",*pData);
}
int main(){
    point_const();
}
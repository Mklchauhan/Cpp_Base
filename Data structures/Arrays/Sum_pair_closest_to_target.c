#include<stdio.h>
#include<stdlib.h>

#define SIZE(arr) (sizeof(arr)/sizeof(arr[0]))

Sum_pair_closest_to_target(int *arr, int size, int target){
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            // NEED TO WRITE FULL CODE
        }
        
    }
    
}

int main(){
    int arr[] = {10,30,20,5};
    int target = 57;
    int size = SIZE(arr);

    Sum_pair_closest_to_target(arr,size,target);

    return 0;
}
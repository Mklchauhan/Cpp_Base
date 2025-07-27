#include<stdio.h>
#include<stdlib.h>

void First_repeating_element(int *arr, int size){
    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = i+1 ; j < size; j++)
        {
            if (*(arr+i) == *(arr+j))
            {
                count++;
            }
        }
        if (count>1)
        {
            printf("First repeating element: %d, repeated %d times, at index: %d\n",*(arr+i),count,i);
            return;
        }
    }
    printf("No Repeating elements found");
}

int main(){
    int arr[] = {1,2,1,3,4,5,1,5,4,3,2};
    int size_of_array = sizeof(arr)/sizeof(arr[0]);

    First_repeating_element(arr,size_of_array);
}
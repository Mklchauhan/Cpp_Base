#include<stdio.h>
#include<stdlib.h>

void Rotate_Array_By_One(int arr[], int size){
    int last = arr[size-1];

    for (int i = size-1 ; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = last;

}

void Print_Array(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size_of_array = sizeof(arr)/sizeof(arr[0]);
    Print_Array(arr,size_of_array);
    Rotate_Array_By_One(arr,size_of_array);
    Print_Array(arr,size_of_array);

    return 0;
}
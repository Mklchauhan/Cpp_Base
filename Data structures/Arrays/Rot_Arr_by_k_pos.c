#include<stdio.h>

void PrintArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void reverse_the_Array(int arr[],int start, int last){
    while (start<last)
    {
        int temp = arr[start];
        arr[start] = arr[last];
        arr[last] = temp;
        start++;
        last--;
    }
}

void Rotate_Array_by_K_position(int arr[],int size,int position){
    position = position % size;

    reverse_the_Array(arr,0,size-1);
    reverse_the_Array(arr,0,position-1);
    reverse_the_Array(arr,position,size-1);
}



int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    int position = 3;

    Rotate_Array_by_K_position(arr,size,position);

    PrintArray(arr,size);
}
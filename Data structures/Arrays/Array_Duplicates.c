#include<stdio.h>
#include<stdlib.h>

void print_array(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0){
            printf("%d\n", arr[i]);
        }
    }
    
}

void Array_Duplicates(int *arr, int size){
    int visited[size];

    for (int i = 0; i < size; i++)
    {
        visited[i]=0;
    }
    
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (*(arr+i)== *(arr+j+1))
            {
                visited[i]= *(arr+i);
            }
        }
    }
    print_array(visited,size);
}

int main(){
    int arr[] = {1,2,3,4,2,4};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    Array_Duplicates(arr,arr_size);

    return 0;
}
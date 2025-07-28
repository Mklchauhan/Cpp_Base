#include<stdio.h>
#include<stdlib.h>

#define SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);  // Ascending
}

void print_array(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0){
            printf("%d ", arr[i]);
        }
    }  
    printf("\n");
}

int main(){
    int arr[] = {2,3,1,4,3,5,7,8,3,21};
    int size = SIZE(arr);

    qsort(arr,size,sizeof(int),compare);
    print_array(arr,size);

    return 0;
}
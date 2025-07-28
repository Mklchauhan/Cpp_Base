#include<stdio.h>
#include<stdlib.h>

#define SIZE(arr) (sizeof(arr)/sizeof(arr[0]))

int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
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

void Sum_of_two_elements_0(int *arr,int size){
    int found[size];
    int k =0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if ((*(arr+i) + *(arr+j))==0)
            {
                found[k++] = arr[i];
                found[k++] = arr[j];
            }
        }
    }
    print_array(found,size);
    
}

int main(){
    int arr[] = {2,3,1,4,3,5,7,8,3,21};
    int size = SIZE(arr);

    Sum_of_two_elements_0(arr,size);

    return 0;
}
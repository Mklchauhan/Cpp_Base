#include<stdio.h>

void Missing_Array(int arr[], int size){
    int largest = 0;

    for (int i = 0; i < size-1; i++)
    {
        if (arr[i]<arr[i+1])
        {
            largest = arr[i+1];
        }
    }

    for (int i = 1; i <= largest; i++)
    {
        int found = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[j]==i)
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            printf("This number %d is missing\n", i);
        }
    }
}

int main(){
    int arr[] = {1,1,1,1,1,1,1,1,1,1,2,3,5,14};
    int size = sizeof(arr)/sizeof(arr[0]);

    Missing_Array(arr,size);

    return 0;
}
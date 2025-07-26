#include<stdio.h>

void min_max(int arr[], int size){
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }
        else if (arr[i]>max)
        {
            max = arr[i];
        }
    }
    printf("MAX:%d\nMIN:%d\n",max, min);
}
int main(){
    int Arr[] = {2,4,5,6,7,8,9,2,43,23,5,6};
    int Arr_size = sizeof(Arr)/sizeof(Arr[0]);

    min_max(Arr,Arr_size);

    return 0;
}
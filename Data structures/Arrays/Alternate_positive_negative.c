#include<stdio.h>
void Print_Array(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void Alt_Pos_Neg(int arr[], int size){
    int Positive_Array[size];
    int Negative_Array[size];
    int positive_number_count = 0;
    int negative_number_count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i]>=0)
        {
            Positive_Array[positive_number_count++] = arr[i];
        }
        else
        {
            Negative_Array[negative_number_count++] = arr[i];
        }
        
    }
    //Filling of the elements into the array sequentially
    int i,p,q;
    i=p=q=0;
    while (p<positive_number_count && q<negative_number_count)
    {
        arr[i++] = Positive_Array[p++];
        arr[i++] = Negative_Array[q++];
    }

    while (p < positive_number_count){
        arr[i++] = Positive_Array[p++];
    }
    
    while (q<negative_number_count){
        arr[i++] = Negative_Array[q++];
    }
    Print_Array(Positive_Array,positive_number_count);
    Print_Array(Negative_Array,negative_number_count);
    Print_Array(arr,size);
}

int main(){
    int arr[] = {1,-2,3,-4,4,-3,5,6,7,-6};

     int size = sizeof(arr)/sizeof(arr[0]);

    printf("The Number of element in the array: %d\n",size);

    Alt_Pos_Neg(arr, size);

}
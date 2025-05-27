#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

//Noe, write a function which stores the pointer as an argument and print the array

void print_array_with_pointer(int arr[], int size){


}

void print_array(int arr[], int size){
    printf("Priting the array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("\nElement %d: %d\n",i, arr[i]);
    }
}

int main(){
    int a[10]={2, 3, 23, 4, 34, 5, 54};

    // int *ptr; // ptr is a interger
    // ptr = &a[0]; //ptr point to the a[10]
    // We can also write above condition like 
    //int* ptr = &a[0]; //interger pointer pointing to the a[10] 

    //In above code we can write int *ptr = a[0]; because *ptr and a[10] are synonyms.

    int *ptr = a;

    //print_array(a, sizeof(a)/sizeof(a[0])); // This will print the array sequnetially

    // We will use the pointer to print the array
    int x = *ptr; // Here, pointer saves the address of the function
    int y = *(ptr+1);
    int z = *ptr+11; // here the value of x stored in thr ptr will increase by 11, 2+11 = 13
    

    printf("\nvalue store on address %p in the ptr: %d\n", ptr, x);
    printf("\nvalue store on address %p in the ptr: %d\n", ptr+1, y);
    printf("\nvalue store on address %p in the ptr: %d\n", ptr, z);


    printf("Using pointer:\n");
    for(int i = 0; i < 5; i++) {
        printf("Value: %d\n", *ptr);
        ptr++;         // OK: move pointer to the next element
    }

    // Now let's try to move the array name like a pointer
    // a++;         // ❌ ILLEGAL: array name is not a variable.

    // a = pa;      // ❌ ILLEGAL: you cannot assign to 'a' (it's fixed at compile time).

    return 0;


}
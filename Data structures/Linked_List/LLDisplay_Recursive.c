//This file is displaying the Linkedlist through recursion

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
}*first=NULL;

void create_node(int arr[], int number_of_element){
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < number_of_element; i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void counting_nodes(struct Node *p){
    int count = 0;
    while (p!=NULL)
    {
        count++;
        p=p->next;
    }

    printf("%d",count);
}

int add_LLD(struct Node *ptr){
    int sum =0;

    while (ptr != NULL)
    {
        sum+=ptr->data;
    }

    return sum;
    
}

void RDisplay(struct Node *p)
{
    if(p!=NULL)
    {
        printf("%d ",p->data);
        RDisplay(p->next);
    }
    printf("\n");
}

int main(){
    int arr[] = {10,2,3,32,13,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);


    create_node(arr, size);         // Step 1: Create the list
    printf("Linked List: ");

    printf("%d\n",add_LLD(first));
}
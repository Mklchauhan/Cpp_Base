#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node *Next;
};
struct Node *first = NULL;

void createNode(int arr[],int n){
  struct Node *t, *last;
  first = (struct Node*)malloc(sizeof(struct Node));
  first->data = arr[0];
  first->Next = NULL;
  last = first;
  for (int i = 1; i < n; i++)
  {
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=arr[i];
    t->Next=NULL;
    last->Next=t;
    last=t;
  }
}

int countNode(struct Node *head){
  int count = 0;
  while(head){
    count++;
    head=head->Next;
  }
  return count;
}

void InsertNode(struct Node* Head, int index, int value){
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = value;
  if(index < 0 || index >countNode(Head)){
    return; // What will happen if we don't return here?
  }
  if(index==0)
  {
    temp->Next = first;
    first = temp;
  }
  else
  {
    for(int i=0;i<index-1;i++)
    {
      Head = Head->Next;
    }
    temp->Next = Head-> Next;
    Head->Next = temp;
  }
}
    

void display(struct Node *first){
  struct Node *temp = first;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->Next;
    }
    printf("NULL\n");
}
  

int main() {
  
  int arr[]={3,4};
  int n = sizeof(arr)/sizeof(arr[0]);
  
  //createNode(arr,n);
  InsertNode(first,0,42);
  InsertNode(first,1,35);
  InsertNode(first,2,4);
  InsertNode(first,3,356);
  printf("Length of the linked list:%d\n",countNode(first));
  display(first);
  return 0;
  }
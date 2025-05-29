#include<iostream>

using namespace std;

// struct Node;
// using Data_Node = Node*;

struct Node
{
    int Data;
    Node *next;
    // Data_Node next;
};
/*
* Creating the Linked list
*/
void create_linked_list(int arr[], int size){

}


/*
* Display all the elements of the Linked list
*/
void display(Node *p) 
{
    while (p != NULL)
    {
        cout<<"Data :"<< p->Data<<endl;
        p=p->next;
    }
    
};



int main()
{
/*
* Writing Here C format
*   // Creating a single node
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;

    printf("Data: %d\n", head->data);

    free(head);
    return 0;
*/

/*
* C++


    Node* First_Node = new Node{10,nullptr};
    cout<< "Data: "<< First_Node->Data<< "Address of the Data: "<< &First_Node->Data<<endl;
    delete First_Node;
    return 0;

    //Now, we are using the concept off aliasing 
*/

}
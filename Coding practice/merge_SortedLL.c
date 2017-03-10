#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

void MoveNode(struct node** destRef, struct node** sourceRef);

struct node* SortedMerge(struct node* a, struct node* b)
{
    struct node dummy;
    struct node* tail = &dummy;
    dummy.next = NULL;
    while (1)
    {
        if (a == NULL)
        {
            tail->next = b;
            break;
        }
        else if (b == NULL)
        {
            tail->next = a;
            break;
        }
        if (a->data <= b->data)
            MoveNode(&(tail->next), &a);
        else
            MoveNode(&(tail->next), &b);

        tail = tail->next;
    }
    return(dummy.next);
}


void MoveNode(struct node** destRef, struct node** sourceRef)
{   struct node* newNode = *sourceRef;
    if(newNode != NULL){
    *sourceRef = newNode->next;
    newNode->next = *destRef;
    *destRef = newNode;
    }
}
void push(struct node** head_ref,int new_data){
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
    }
void pL(struct node *node){
    while(node->next!=NULL){
        printf("%d->",node->data);
        node=node->next;
        if(node->next==NULL)
            printf("%d \n",node->data);
        }
    }
int main()
{
    struct node* res = NULL;
    struct node* a = NULL;
    struct node* b = NULL;
    int k=10;
    for(k=10;k>=0;k--){
            if(k%2==0)
               push(&a,k);
    }
    for(k=10;k>0;k--){
            push(&b,5*k);
    }
    printf("First Linked List is: \n");
    pL(a);
    printf("Second Linked List is: \n");
    pL(b);
    res = SortedMerge(a, b);
    printf("Merged Linked List is: \n");
    pL(res);
    return 0;
}

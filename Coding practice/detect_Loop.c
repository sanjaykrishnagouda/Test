/*program to detect loop */
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
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
int detectLoop(struct node *list){
    struct node *fast_p=list, *slow_p=list;
    while(fast_p&&slow_p&&fast_p->next){
        slow_p=slow_p->next;
        fast_p=fast_p->next->next;
        if(slow_p==fast_p){
            printf("loop detected \n");
            printf("\n loop is at node %d",slow_p->data);
            return 1;}
        }
    return 0;
    }
int main(){
    struct node *head=NULL;
    int k=10;
    for(k=10;k>=0;k--){
            push(&head,k);
    }
    printf("linked list is\n");
    pL(head);
    head->next->next->next->next->next->next=head->next->next;
    /*printf("linked list with loop is\n");
    pL(head); */
    detectLoop(head);
    return 0;
}


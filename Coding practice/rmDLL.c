
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next
};
void rmDP(struct node* head){
    struct node* current=head;
    struct node* next_next;
    if(current==NULL)
        return;
    while(current->next!=NULL){
        if(current->data==current->next->data)
        {
            next_next=current->next->next;
            free(current->next);
            current->next=next_next;

        }
        else
            current=current->next;
    }
}
void pL(struct node *node){
    while(node!=NULL){
        printf("%d",node->data);
        node=node->next;
    }
}
void push(struct node** head_ref,int new_data){
struct node* new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=new_data;
new_node->next=(*head_ref);
*head_ref=new_node;
}
int main(){
struct node* head=NULL;
push(&head,10);
push(&head,11);
push(&head,12);
push(&head,12);
push(&head,13);
push(&head,13);
push(&head,14);
push(&head,15);
push(&head,16);
printf("linked list:\n");
pL(head);
rmDP(head);
printf("\nafter removing dps:\n");
pL(head);
}

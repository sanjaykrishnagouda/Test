/*program to delete next node of any arbitrary node from a linked list*/

#include<stdio.h>
#include<stdlib.h>
main(){
struct node{
int key; struct node *next;};
struct node *head, *z, *t;
list_init(){
head=(struct node *) malloc(sizeof *head);
z=(struct node *) malloc(sizeof *z);
head->next=z;z->next=z;
}
deletenext(struct node *t){  /*easy peasy lemon squeazy*/
t->next=t->next->next;
}
struct node *insertafter(int v, struct node *t)
{
    struct node *x;
    x=(struct node *) malloc(sizeof *x);
    x->key=v;x->next=t->next;
    t->next=x;
    return x;

}
}

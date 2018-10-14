#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *temp=NULL;
    struct node *first=NULL;
    struct node *second=NULL;
    struct node *third=NULL;
    struct node *head;


    temp=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    first->data=1;
    first->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    temp->data=6;
    temp->next=first;
    head=temp;

    while(head!=NULL){
        cout<<" "<<head->data;
        head=head->next;
    }
}

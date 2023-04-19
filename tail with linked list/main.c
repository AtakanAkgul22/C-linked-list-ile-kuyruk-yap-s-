#include <stdio.h>
#include <stdlib.h>
typedef struct n{
    int data;
    struct n* next;
}node;
node* root=NULL;
node* son=NULL;
void enque(int data){
    if(root==NULL){
        root=(node*)malloc(sizeof(node));
        root->data=data;
        son=root;
    }
    else{
        node* temp=(node*)malloc(sizeof(node));
        temp->data=data;
        son->next=temp;
        son=temp;
        son->next=NULL;
    }


}
int deque(){
    int x;
    if(root==NULL){
        printf("queue is empty!!!!\n");
        return -1;
        }
    node* temp=root;
    x=temp->data;
    root=root->next;
    free(temp);
    return x;
}

int main()
{
    enque(40);
    enque(80);
    enque(90);
    enque(50);
    enque(10);
    enque(860);
    for(int i=0;i<8;i++){
        printf("%d  ",deque());
    }

    return 0;
}

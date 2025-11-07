/*Aim:- This C program creates a linked list to store integer elements. 
It prompts the user to enter elements and add them to the list until the user enters 0. It then traverses the list and prints each element and "=>" until reaching the null pointer.
 Finally, it displays the number of nodes in the list.*/

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
};

int main(){
	struct node *head=NULL, *temp=NULL, *newnode;
	int num, count=0;
	printf("\nEnter Data\n");
	while(1)
{
scanf("%d",&num);
if(num==0)
break;
else{

newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=num;
newnode->link=NULL;
}
if(head==NULL){
	head=newnode;
	temp=head;
}
else{
	temp->link=newnode;
}
temp=newnode;
}
temp=head;
  printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
        count++;
    }
    printf("NULL\n");
    printf("Number of Nodes:%d\n",count);
return 0;
}

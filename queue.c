#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

}*rear=NULL,*front=NULL;
void inqueue();
void dequeue();
void display();

void main()
{
int c,i=1;

while(i==1)
{
printf("the choices are:-\n1.inqueue\n2.dequeue\n3.display\n4.exit\n");
printf("enter the choices");
scanf("%d",&c);
switch(c)
  {
  case 1:inqueue();
        break;
  case 2:dequeue();
	      break;
  case 3:display();
	      break;
  case 4:exit(0);
default:printf("enter the corrrect choice");

  }
 }
}
void inqueue()
{
struct node *temp;
temp=(struct node *) malloc(sizeof (struct node));
printf("enter the data\n");
scanf("%d",&temp->data);
temp->next =NULL;
if(front==NULL)

{
front=temp;
}
else
{
rear->next=temp;
}
rear=temp;
}
void dequeue()
{
struct node *temp;
if(front==NULL)
{
printf("your queue is EMPTY");
}
else
{
temp=front;
printf("the deleted element is %d",temp->data);
front=temp->next;
free(temp);
}
}
void display()
{
struct node *temp;
if(front==NULL)
{
printf("your queue is empty");
}
else
{
temp=front;
while(temp!=NULL)
{
    printf("%d\t",temp->data);
    temp=temp->next;
}
}

}

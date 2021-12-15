#include<stdio.h>
void main()
{
 int q[5],ch,data,rear=-1,front=-1,n=5,i;
 char c;
printf("\t\t Queue operations\n");
printf("1.enqueue\n2.dequeue\n3.display\n");
v:
printf("enter your choice:");
scanf("%d",&ch);
switch(ch)
{
 case 1:x:printf("enter the data to be inserted:");
       scanf("%d",&data);
       
        if(rear==n-1)
          printf("queue overflow");
        else
        {
          rear=rear+1;
          q[rear]=data;
        }
         printf("Do You Want to Add More?\n");
          scanf("%s",&c);
         if (c=='y')
          goto x;
       
break;
 case 2:y:
if(rear==-1)
         printf("queue underflow");
       else
        {
         front = front +1;
         data = q[front];
         printf("%d is dequeued",data);
        }
  printf("Do you want to pop more?\n");
  scanf("%s",&c);
  if (c=='y')
   goto y;
break;
 case 3:
      
     for(int i=front+1; i<=rear; i++)
      printf("%d\t",q[i]);
      break;
 default :printf("wrong choice");
}

printf("\ndo you want to continue");
scanf("%s",&c);
if(c=='y')
 goto v;
}


#include<stdio.h>
void main()
{
 int s[5],ch,data,top=-1,n=5,i;
printf("\t\t Stack operations\n");
printf("1.push\n2.pop\n3.display\n");
v:
printf("enter your choice:");
scanf("%d",&ch);
switch(ch)
{
 case 1:printf("enter the data to be inserted:");
       scanf("%d",&data);
       
        if(top==n-1)
          printf("stack overflow");
        else
        {
          top=top+1;
          s[top]=data;
        }
break;
 case 2:
if(top==-1)
         printf("stack underflow");
       else
        {
         data=s[top];
         top=top-1;
printf("%d is poped...",data);
        }
break;
 case 3:
        if(top==-1)
         {
          printf("no elements");
         }
        for(i=0;i<=top;i++)
        printf("%d\t",s[i]);
 break;
 default :printf("wrong choice");
}
char c;
printf("\ndo you want to continue");
scanf("%s",&c);
if(c=='y')
 goto v;
}

       




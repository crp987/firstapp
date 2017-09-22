#include<stdio.h>

int q[10],f=-1,r=-1;



void enqueue(int x)
{
      if(f==(r+1)%10)
      {
              printf("Queue is full so we can't push\n");
              return;
      }
      else if(f==-1 && r==-1)
      {
              f=0;
              r=0;
      }
      else
              r=(r+1)%10;
      q[r]=x;
}

void dequeue()
{
      if(f==-1 && r==-1)
      {
              printf("Queue is empty so can't delete\n");
              return;
      }
      else if(f==r)
      {
              q[f]=0;
              f=-1;
              r=-1;
      }
      else
      {
              q[f]=0;
              f=(f+1)%10;
      }
}

void print()
{
      int i;
      for(i=0;i<10;i++)
      printf("%d ",q[i]);
      printf("\n");
}

int main()
{
      int i;
      for(i=0;i<10;i++)
      q[i]=0;
      char ch;
      int x,choice;
      do
      {
             printf("Enetr choice\n");
             scanf("%d",&choice);
             switch(choice)
             {
                   case 1:
                             printf("Enter no. to be enqueued\n");
                             scanf("%d",&x);
                             enqueue(x);
                   break;
                   case 2:
                             dequeue();
                   break;
                   case 3:
                             print();
                   break;
                   default:
                             printf("Invalid input\n");
                   break;
             }
             printf("Do you want to continue\n");
             getchar();
             ch = getchar();
             
      }while(ch=='y');
}

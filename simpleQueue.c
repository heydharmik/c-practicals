#include<stdio.h>
#define MAX 50
void Queue_insert();
int Queue_delete();
void Queue_display();
int Q[MAX];
int f = -1;
int r = -1;

void main()
{
    int c;
    while(c!=4)
    {
        printf("QUEUE OPERATIONS USING ARRAY\n");
        printf("\n1  : Enque\n2  : Deque\n3  : Display\n4  : Exit\n\nEnter Choice: ");
        scanf("%d",&c);
         switch(c)
            {
                case 1:
                {
                    Queue_insert();
                    break;
                }
                case 2:
                {
                    Queue_delete();
                    break;
                }
                case 3:
                {
                    Queue_display();
                    break;
                }
                case 4:
                {
                    printf("\nYou Choose to exit");
     break;
                }
                default: printf("Invalid Choice\n");
            }
    }
}
void Queue_insert()
{
    int e;
    if(r==MAX-1)
    {
        printf("Queue Overflow\n");
        return;
    }
    else
    {
        if(f== -1)
     f=0;
        printf("Enter value to insert: ");
        scanf("%d",&e);
        r++;
        Q[r] = e;
    }
}

int Queue_delete()
{
    //int y;
    if(f== -1 || f > r)
    {
        printf("\nQueue is Empty");
        return(-1);
    }
    else
{
        printf("Element deleted from queue is : %d\n", Q[f]);
        f++;
    }
}

void Queue_display()
{
    int i;
    if(f==-1)
        printf("Queue is Empty\n");
    else
    {
        printf("Queue is : \n");
        for (i=f; i<=r; i++)
   printf("%d ", Q[i]);
    }

    printf("\n");
}

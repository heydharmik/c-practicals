# include<stdio.h>
#include<stdlib.h>
# define MAX 50

int cqueue_arr[MAX];
int front = -1;
int rear = -1;

/*Begin of insert*/
void insert(int item)
{
    //the second condition comes in scene when the rear completes one whole round and is behind the front end
	if((front == 0 && rear == MAX-1) || (front == rear+1))
	{
		printf("Queue Overflow \n");
		return;
	}
	if (front == -1)  /*If queue is empty */
	{
		front = 0;
		rear = 0;
	}
	else
	{
        //statement changed here
		rear = (rear + 1) % MAX;
	}
	cqueue_arr[rear] = item ;
}
/*End of insert*/

//del function also modified
/*Begin of del*/
void del()
{
    int element;
	if (front == -1)
	{
		printf("Queue Underflow\n");
		return ;
	}
    else{
        element = cqueue_arr[front];
        if(front == rear){ /* queue has only one element */
		    front = -1;
		    rear=-1;
	    }
	    else{
		    front = (front + 1) % MAX;
	    }
        printf("Element to be deleted is %d\n", element);
    }
	
}
/*End of del() */

/*Begin of display*/
void display()
{
	int front_pos = front,rear_pos = rear, i;
	if(front == -1)
	{
		printf("Queue is empty\n");
		return;
	}
    else{
        i=front;
        printf("Queue elements:\n");
        while(i<=rear){
            printf("%d\t", cqueue_arr[i]);
            i = (i + 1) % MAX;
        }
    }
	printf("\n");
}
/*End of display*/

int main()
{
	int choice,item;
	do
	{
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("4.Quit\n");

		printf("Enter your choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1 :
				printf("Input the element for insertion in queue : ");
				scanf("%d", &item);

				insert(item);
				break;
			case 2 :
				del();
				break;
			case 3:
				display();
				break;
			case 4:
                printf("You choose exit the process...");
                exit(0);
                break;
			default:
				printf("Invalid choice\n");
		}
	}while(choice!=4);

	return 0;
}

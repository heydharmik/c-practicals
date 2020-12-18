#include<stdio.h>
//global variables
int stack[100],choice,n,top,x,i;

//declaration of methods
void push(void);
void pop(void);
void display(void);
void peep();
void change();

//main method starts here
void main()
{

    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.PEEP\n\t 4.CHANGE\n\t 5.DISPLAY\n\t 6.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
        break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                peep();
                break;
            }
            case 4:
            {
                change();
                break;
            }
            case 5:
            {
                display();
                break;
            }
            case 6:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4/5/6)");
            }

        }
    }
    while(choice!=6);
}
void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");

    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
}
void peep()
{
    if(top == - 1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top Element is = %d\n", stack[top]);
 }
}
void change()
{
    int no, e;
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        //here it's not necessary that the user will enter only 4 elements to be entered in the stack
        printf("Enter the element you want change (1- %d): ",n);
        scanf("%d", &no);
        //put a condition to check whether the user has entered a valid number
        if(no>n){
            printf("Sorry, stack does not have %d elements..",&no);
        }
        else{
            printf("Enter the number to which you have to change : ");
            scanf("%d", &e);
        }
        stack[no-1] = e;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }

}

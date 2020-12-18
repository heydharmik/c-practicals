// In this code I used the calloc function to dynamically allocate the memory to array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int *a,n,x,i,beg,end,mid,flag=0;

    printf("Enter size of array\n");
    scanf("%d",&n);
    a = (int*) calloc(n, sizeof(int));
    printf("Please enter array elements in ascending order\n");
    for(i=0; i<n; i++)
    {
        printf("Enter element: \n");
       scanf("%d", a+i);
    }
    printf("Enter element to be search\n");
    scanf("%d",&x);

    beg=0;
    end=n-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(*(a+mid)==x)
        {
            printf("Element found at %d position ",mid + 1);
            flag=1;
            break;
        }
        if(*(a+mid)>x)
            end=mid-1;
        else
            beg=mid+1;
    }
    if(!flag)
        printf("No such element is found\n");

    // calling a free function
    free(a);
    getch();
}

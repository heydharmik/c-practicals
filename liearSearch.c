#include<stdio.h>

void main(){
    int a[20], key, i, flag, N;
    printf("Enter the size of array: \n");
    scanf("%d", &N);
    printf("Enter the %d element: \n", N);
    for(i=0; i<N; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the key to be searched:");
    scanf("%d", &key);

    for(i=0; i<N; i++){
        if(a[i]==key){
            flag = 1;
            break;
        }
    }

    //This part of the code was in the for loop, so it was been printed at many times the loop was executed
    if(flag){
        printf("Successful search!");
    }
    else{
            printf("Unsuccessful search!");
    }
}
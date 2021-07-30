#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<math.h>
#include<string.h>

int main(){

    // //Use of malloc()
    // int *arr,n;
    // printf("Enter the no. of block u want: ");
    // scanf("%d",&n);
    // arr=(int*)malloc(n*sizeof(int));
    // for(int i=0;i<n;i++){
    //     printf("Enter value at %d of this array: ",i);
    //     scanf("\n%d",&arr[i]);
    // }
    // for(int i=0;i<n;i++){
    //     printf("value at %d in the array is %d: \n",i,arr[i]);
    // }

    //Use of calloc()
    int *arr,n;
    printf("Enter the no. of block u want: ");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter value at %d of this array: ",i);
        scanf("\n%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("value at %d in the array is: %d \n",i,arr[i]);
    }

    //Use of realloc()
    printf("Enter the new no. of block u want: ");
    scanf("%d",&n);
    arr=(int*)realloc(arr,n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter value at %d of new array: ",i);
        scanf("\n%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("value at %d in the new array is: %d \n",i,arr[i]);
    }

    //Use of free()
    free(arr);

    return 0;
}
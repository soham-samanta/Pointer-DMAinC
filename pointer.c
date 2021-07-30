#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<math.h>
#include<string.h>

int main(){
    int arr[]={3,5,2,8,9,4};
	int *p=arr;
	p++;
	// arr++;  // Not Valid coz Constant cant be tampered
	int a=50;
	int *ptr=&a;
	printf("\nThe Output is %d",a);
	printf("\nThe Output is %d",&a);
	printf("\nThe Output is %d",ptr);
	printf("\nThe Output is %d",*ptr);

	printf("\nOutput Array: %d",(arr));
	printf("\nOutput Array: %d",(&arr[0]));
	printf("\nOutput Array: %d",(arr+1));
	printf("\nOutput Array: %d",(&arr[1]));

	printf("\nOutput Array: %d",*(arr));
	printf("\nOutput Array: %d",*(&arr[0]));
	printf("\nOutput Array: %d",*(arr+1));
	printf("\nOutput Array: %d",*(&arr[1]));



    return 0;
}
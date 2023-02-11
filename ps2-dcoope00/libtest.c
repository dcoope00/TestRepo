#include <stdio.h>
#include "mylib.h"

#define SIZE 10

int main(){
	int numbers[SIZE]={10,33,45,67,87,56,78,98,45,34};
	char str[]="Hello";

	showArray(numbers,SIZE);
	printf("Size of String: %s -> %d\n",str,Strlen(str));

	char dest[100];
	char newStr[] = "testing";
	Strcpy(dest,newStr);

	char src[] = "append";
	char catDest[100] = "String";
       	Strcat(catDest,src);	


	char nextStr[] = "finding";
	int c = 110;
	char *res = Strchr(nextStr, c);
	
	


	return 0;
}

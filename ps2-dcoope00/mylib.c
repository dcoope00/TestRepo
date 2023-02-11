#include <stdio.h>

void showArray(int array[], int size){
	int index;

	printf("[");
	for(index=0;index<size;index++){
		if(index!=0){
			printf(",");
		}
		printf("%d",*(array+index));
	}
	printf("]\n");

}

int Strlen(char *str){
	int len=0;

	while(*str!='\0'){
		len++;
		str++;
	}
	return len;
}


char *Strcpy(char *dest, char*src){
	char *start = dest;

	while(*src != '\0'){
		*dest=*src;
		src++;
		dest++;
	
	}
	*dest = '\0';
	printf("************\n");
	while(*start != '\0'){
		printf("%c,", *start);
		start++;
	}
	printf("****************\n");
	return dest;


}


char *Strcat(char *dest, char *src){
	char *beginning = dest;
	char *start = dest;
	while(*start != '\0'){
		start++;

	}
	*start = *src;
	start++;
	char *srcStart = src+1;
	while(*srcStart != '\0'){
		*start = *srcStart;
		start++;
		srcStart++;
	}

	while(*beginning != '\0'){
		printf("%c,",*beginning);
		beginning++;
	}
	return start;

}

char *Strchr(char *str, int c){
   
  	 char *res = NULL;
    	while(*str != '\0') {
		
        	if ((char) c == *str) {
           		printf("char is %c", *str) ;
			res = str;
			break;
        	}
		str++;
    	}
	
    	return res;
}








































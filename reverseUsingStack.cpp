#include <stdio.h>  
#include <string.h>  
#define max 100  
int top=-1,stack[max];  
void push(char x){ 
    if(top == max-1){  
        printf("stack overflow");  
    }  
  	else {  
	    top++;
        stack[top]=x;  
    }  
  
}  
void pop(){
    printf("%c",stack[top]);  
    top--;
}  
int main(){  
   char str[100];
   printf("Enter the string you want to reverse : ");
   gets(str);  
   int len = strlen(str);  
   int i;  
  
   for(i=0;i<len;i++)  
        push(str[i]);  
  
   for(i=0;i<len;i++)  
      pop(); 
	return 0; 
} 

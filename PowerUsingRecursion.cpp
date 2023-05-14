#include<stdio.h>
 int pow(int ,int );
 int pow(int num,int exp){
 	if(exp==0)
 	  return 1;
 	else 
 	  return num*pow(num,exp-1);
 }
 
 int main(){
 	int num;
 	printf("Enter a Number: ");
 	scanf("%d",&num);
 	int exp;
 	printf("Enter the Exponential: ");
 	scanf("%d",&exp);
 	printf("\nValue of %d^%d = %d",num,exp,pow(num,exp));
 	return 0;
 }

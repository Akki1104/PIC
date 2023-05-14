#include<stdio.h>
int fibo(int ,int ,int);
int fibo(int a,int b,int n){
	if(n==0)
	  return 0;
	else{
	  printf(" %d",a+b);
	  return fibo(b,a+b,n-1);
    }
}
int main(){
	int n;
	printf("Enter the limit of series: ");
	scanf("%d",&n);
	printf("\n");
	printf("0 1");
	fibo(0,1,n-2);
	return 0;
}

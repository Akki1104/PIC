#include<stdio.h>
void fibo(int ,int ,int);
void fibo(int a,int b,int n){
	if(n>0){
	  printf(" %d",a+b);
	  fibo(b,a+b,n-1);
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

#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define max 50
int top=-1;
int stack[max];

void push(int item){
	stack[++top]=item;
}

int pop(){
	return stack[top--];
}

int main(){
	char p[50];
	printf("Enter a postfix expression: ");
	gets(p);

	int i=0,num,a,b,result;
	while(p[i]!='\0'){
		if(isdigit(p[i])){
			num=p[i]-48;
			push(num);
		}
		
		if(p[i]=='+'||p[i]=='-'||p[i]=='*'||p[i]=='/'||p[i]=='^')
		{
			a=pop();
			b=pop();
			
			if(p[i]=='+')
				result=b+a;
			if(p[i]=='-')
				result=b-a;
			if(p[i]=='*')
				result=b*a;
			if(p[i]=='/')
				result=b/a;
			if(p[i]=='^')
				result=pow(b,a);
			
			push(result);
		}
	i=i+1;
	}
	
	result=pop();
	printf("\nResult of %s = %d",p,result);
	return 0;
}

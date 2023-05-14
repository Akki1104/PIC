#include<stdio.h>
#include<stdlib.h>
int main(){
	float x,y,a;
	for(y=1.5;y>-1;y-=0.5){
		for(x=-1.5;x<1.5;x+=0.5){
			a=x*x+y*y-1;
			putchar(a*a*a-x*x*y*y*y<=0.0?'*':' ');
		}
		system("color 04");
		putchar('\n');
	}
	scanf("%f");
}

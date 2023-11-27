#include<stdio.h>
#include<conio.h>

void main(){
	
	int num,n;
	clrscr();
	printf("Enter value of N = ");
	scanf("%d",&n);
	
	for(num=1;num<=10;num++){
		printf("%d*%d=%d\n",n,num,n*num);
		
	
	}
getch();

}

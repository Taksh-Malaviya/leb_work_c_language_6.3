#include<stdio.h>
#include<conio.h>

void main(){
	
	int num,n,sum=0;
	clrscr();
	printf("Enter value of N = ");
	scanf("%d",&n);
	
	for(num=1;num<=n;num++){
		printf("%d\n",num);
		
		sum=sum+n;
	}
	printf("SUM [%d]",sum);
	getch();
}

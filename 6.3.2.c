#include<stdio.h>
#include<conio.h>

void main(){
	
	int num,n,sum;
		clrscr();
	printf("Enter value of N = ");
	scanf("%d",&n);
	
	for(num=1;num<=n;num++){
		
		sum=sum*num;
			printf("%d\n",num);	
	}
	printf("SUM [%d]",sum);
getch();
}

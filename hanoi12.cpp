#include<stdio.h>
void taha(int n, char source, char auxil, char distination){
	if(n==1){printf("move disc 1 from %c to %c\n",source,distination);return;}
    taha(n-1,source,distination,auxil);
	printf("move disc %d from %c to %c\n",n,source,distination);
	taha(n-1,auxil,source,distination);}
	int main(){
		int x;char A,B,C;
		printf("enter the number :");
		 scanf("%d",&x);
		taha( x, 'A', 'B', 'C') ;
		
	}

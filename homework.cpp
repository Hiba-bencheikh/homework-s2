#include<stdio.h>
int add(int x,int y){
	return x+y;
}
int sub(int x,int y){
		return x-y;
}
int mult(int x,int y){
	return x*y;
}
float divi(float x,float y){
	return x/y;
}



int main(){
	int a,b,y,z,h,m; float n;
	printf("enter two integer numbers: ");
	scanf("%d%d",&a,&b); 
	printf("choose an operation:");
	printf("\n 1-addition \n 2-subtraction \n 3-multiplication \n 4-division\n");
	scanf("%d",&m);
	switch (m){
case 1:{	y=add(a,b);
            printf("%d",y);
	break;
       }
case 2:{	z=sub(a,b);
         	printf("\n %d",z);
	break;
       }
case 3:{	h=mult(a,b);
	    	printf("\n %d",h); 
	break;
       }
case 4:{ n=divi( a, b);
    	 printf("\n %.3f",n);
	break;
       }    
	   default:
	   	printf("Error");
	   	break;
}
	
	
}


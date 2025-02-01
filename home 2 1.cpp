#include<stdio.h>
struct student{
	int grad;
	float avg;
	char name[20];
};
int main(){
	int i;
	struct student promotion[3];
	for(i=0;i<3;i++){
		printf("enter the grad :");
		scanf("%d",&promotion[i].grad);
			
			printf("enter the avg :");
		scanf("%f",&promotion[i].avg);
		
			printf("enter the name :");
		scanf("%s",promotion[i].name);
	
	}
	for(i=0;i<3;i++){
	
		printf("\n student %d",i+1);
		    printf("\n   name: %s",promotion[i].name);
        	printf("\n   grad %d",promotion[i].grad);
        	printf("\n    avg %f",promotion[i].avg);
		}
		
	
	
}

#include<stdio.h>
int main(){
	int num,count=0;
//	User Input
	printf("Enter any number:");
	scanf("%d",&num);
	
//	Loop with logic
	for(;num!=0;num/=10){
		count++;
	}
	
//	Output is printed
	printf("%d",count);
}

#include<stdio.h>
int main(){
	int num,sum=0,fd,ld;
//	User Input
	printf("Enter any number:");
	scanf("%d",&num);\
//	Last digit logic
	ld=num%10;
	while(num>=10){
		(num=num/10);
	}
//	First digit logic
	fd=num;
	
//	Sum of First and last digit
	sum=fd+ld;
	
//	Output printing statment
	printf("The sum of the first and the last digit:%d",sum);
}

//c simple c program to prompt user
/*
name:francis gitau njuguna
reg:CT/100/G/26126/25
Description:program to prompt user their height,phone number and weight
*/
#include<stdio.h>

int main()
{
	float height,weight;
	long long phone;
	printf("enter your height:");
	scanf("%f",&height);
	
	printf("enter your phone number:");
	scanf("%lld",&phone);
	
	printf("enter your weight:");
	scanf("%f",&weight);
	
	printf("\nheight:%f",height);
	printf("\nphone:%lld",phone);
	printf("\nweight:%f",weight);
	
	return 0;
	
}
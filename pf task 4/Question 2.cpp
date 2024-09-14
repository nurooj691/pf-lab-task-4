#include<stdio.h>      // question 2
int main(){
	float units, bill = 0.0, total_bill;
	printf("enter your units");
	scanf("%f", &units);
	if(units<=30){
		bill = units*0.60;
	}
	else if(units<=110){
		bill = 30*0.60 + (units-30)*0.85;
	}
	else if(units <= 210){
		bill = 30*0.60 + 80*0.85 + (units-110)*1.30;
	}
	else
	bill = 30*0.60 + 80*0.85 + 100*1.30 + (units-210)*1.6;
	
	
	total_bill = bill + (bill*0.15);
	printf("total bill of electricity is %.2f", total_bill);
	
	return 0;
}
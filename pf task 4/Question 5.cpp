#include<stdio.h> // question 5
int main(){
	int t;
	printf("enter the time in 24-hour format");
	scanf("%d", &t);
	if(t>=6 && t<=11){
		printf("Good Morning");
	}
	else if(t>=12 && t<=17){
		printf("Good Afternoon");
	}
	else if(t>=18 && t<=23){
		printf("Good Evening");
	}
	else if(t>=0 && t<=5){
		printf("Good Night");
	}
	else
	printf("invaled time");
		
	return 0;
}
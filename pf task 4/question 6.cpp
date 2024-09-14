#include<stdio.h> // question 6
int main(){
	int n1, n2;
	printf("enter first number");
	scanf("%d", &n1);
	printf("enter second number");
	scanf("%d", &n2);
	if(n1 > n2){
		if(n1>100)
		printf("first number is significantly larger");
		
	}
	else if(n1<n2){
		
			if(n1<0)
			printf("n1 is negative and smaller");
		
	}
	else{
		if(n1=n2)
		printf("both are equal");
	}
}
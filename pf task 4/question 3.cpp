#include<stdio.h>           // question 3
int main(){
	float cost, new_price, amount_saved;
	printf("enter the cost of item");
	scanf("%f", &cost);
	if(cost<1500){
	
	printf("you have availed 7 percent discount \n");
	printf("your original amount was %.1f\n", cost);
	new_price = cost*0.93;
	printf("new price is now %.1f\n", new_price);
	amount_saved = cost-new_price;
		printf("the amount saved is %.1f", amount_saved);
}
    else if(cost<= 1500 && cost< 3000){
    	printf("you have availed a 12 percent discount\n");
    	printf("your original amount was %.1f\n", cost);
    	new_price = cost*0.88;
    	printf("the new price is %.1f\n", new_price);
    	amount_saved = cost-new_price;
    		printf("the amount saved is %.1f", amount_saved);
	}
	else if(cost<=3000 && cost<5000){
		printf("you have availed 22 percent discount\n");
		printf("your original amount was %.1f\n", cost);
		new_price = cost*0.78;
		printf("new price is %.1f\n", new_price);
		amount_saved = cost-new_price;
		printf("the amount saved is %.1f", amount_saved);
}
    else 
    printf("you have availed 30 percent discount\n");
    printf("your original amount was %.1f\n", cost);
		new_price = cost*0.70;
		printf("new price is %.1f\n", new_price);
		amount_saved = cost-new_price;
		printf("the amount saved is %.1f", amount_saved);
	return 0;
	
}
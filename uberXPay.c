#include <stdio.h>

void pay();

int main(){

	pay();

	return 0;
}

void pay(){
	double minutes;
	double seconds;
	double miles;
	double totalPay;

	printf("\nEnter minutes: ");
	scanf("%lf", &minutes);


	printf("Enter seconds: ");
	scanf("%lf", &seconds);

	printf("Enter miles: ");
	scanf("%lf", &miles);


	totalPay = ((seconds / 60) + minutes) * 0.66 + miles * 1.55;

	printf("Total pay for this ride is: $%.2f\n\n", totalPay);
}
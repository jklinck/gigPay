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
	int minutesResult;

	do{
		printf("\nEnter minutes: ");
		minutesResult = scanf("%lf", &minutes);
	}while(minutesResult < 1);

	printf("Enter seconds: ");
	int secondsResult = scanf("%lf", &seconds);

	printf("Enter miles: ");
	int milesResult = scanf("%lf", &miles);


	totalPay = ((seconds / 60) + minutes) * 0.66 + miles * 1.55;

	printf("Total pay for this ride is: $%.2f\n\n", totalPay);
}
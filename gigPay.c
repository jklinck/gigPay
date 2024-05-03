#include <stdio.h>

// a program for calculating gig ride and gig delivery pay in Seattle,WA, the user is prompted 
// on which type of gig it is (ride or delivery)

void pay(double minutesPay, double milesPay);

int main(){

	int gigType; 
	printf("Would you like to calculate the pay for a uberX ride or an uberEats delivery? Select 1 for uberX ride or 2 for an uberEats delivery:  ");
	scanf("%d", &gigType);

	while(gigType != 1 && gigType != 2){
		printf("Invalid input!\n");
		// clear the input buffer
		while (getchar() != '\n');
		printf("Would you like to calculate the pay for a uberX ride or an uberEats delivery? Select 1 for uberX ride or 2 for an uberEats delivery:  ");
		scanf("%d", &gigType);
	}


	if(gigType == 1){
		pay(0.66, 1.55);
	}
	else if(gigType == 2){
		pay(0.44, 0.74);
	}

	return 0;
}

void pay(double minutesPay, double milesPay){
	double minutes;
	double seconds;
	double miles;
	double totalPay;

	printf("\nEnter minutes: ");
	while (scanf("%lf", &minutes) != 1 || minutes < 1){
		printf("Invalid input!\n");
		// clear the input buffer
		while (getchar() != '\n');
		printf("Enter minutes: ");
	}

	printf("\nEnter seconds: ");
	while (scanf("%lf", &seconds) != 1 || seconds < 0){
		printf("Invalid input!\n");
		// clear the input buffer
		while (getchar() != '\n');
		printf("Enter seconds: ");
	}

	printf("\nEnter miles: ");
	while (scanf("%lf", &miles) != 1 || miles < 1){
		printf("Invalid input!\n");
		// clear the input buffer
		while (getchar() != '\n');
		printf("Enter miles: ");
	}

	totalPay = ((seconds / 60) + minutes) * minutesPay + miles * milesPay;

	printf("Total pay for this ride is: $%.2f\n\n", totalPay);
}







#include <stdio.h>
#include <string.h>

// a program for calculating gig ride and gig delivery pay in Seattle,WA, the user is prompted 
// on which type of gig it is (ride or delivery)

void pay(double minutesPay, double milesPay, int gigType);

int main(){

	int gigType; 
	printf("Would you like to calculate the pay for a gig ride or a gig delivery? Select 1 for a gig ride or 2 for a gig delivery:  ");
	scanf("%d", &gigType);

	while(gigType != 1 && gigType != 2){
		printf("Invalid input!\n");
		// clear the input buffer
		while (getchar() != '\n');
		printf("Would you like to calculate the pay for a gig ride or a gig delivery? Select 1 for a gig ride or 2 for a gig delivery:  ");
		scanf("%d", &gigType);
	}


	if(gigType == 1){
		pay(0.66, 1.55, 1);
	}
	else if(gigType == 2){
		pay(0.44, 0.74, 2);
	}

	return 0;
}

void pay(double minutesPay, double milesPay, int gigType){
	double minutes;
	double seconds;
	double miles;
	double totalPay;
	char type[10] = "";

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

	if(gigType == 1){
		strcpy(type, "ride");
	}
	else{
		strcpy(type, "delivery");
	}

	printf("Total pay for this %s is: $%.2f\n\n", type, totalPay);
}







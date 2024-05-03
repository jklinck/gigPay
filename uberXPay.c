#include <stdio.h>

// a program for calculating uberX and uberEats pay in Seattle,WA, the user is prompted 
// on which type of gig it is (ubeX or uberEats)

void uberXPay();

void uberEatsPay();

int main(){

	int gigType; 
	printf("Would you like to calculate the pay for a uberX ride or an uberEats delivery? 
	select 1 for uberX ride or 2 for an uberEats delivery");
	scanf("%d", gigType);

	while(gigType !=1 || gigType !=2){
		printf("Would you like to calculate the pay for a uberX ride or an uberEats delivery? 
		select 1 for uberX ride or 2 for an uberEats delivery");
		scanf("%d", gigType);
	}
	if(gigType == 1){
		uberXPay();
	}
	else if(gigType == 2){
		uberEatsPay();
	}

	return 0;
}

void uberXPay(){
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
	


	totalPay = ((seconds / 60) + minutes) * 0.66 + miles * 1.55;

	printf("Total pay for this ride is: $%.2f\n\n", totalPay);
}
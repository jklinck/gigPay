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
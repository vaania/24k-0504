#include <stdio.h>

struct flightInfo{
	int flightNo;
	char departCity[50];
	char destinCity[50];
	int seats;
	char date[50];
};

void storeInfo(struct flightInfo *f){
	printf("Enter details of your flight:\n");
	printf("Flight number: ");
	scanf("%d", &f->flightNo);
	getchar();
	printf("Departure city: ");
	scanf("%[^\n]", f->departCity);
	getchar();
	printf("Destination city: ");
	scanf("%[^\n]", f->destinCity);
	getchar();
	printf("Date: ");
	scanf("%[^\n]", f->date);
	getchar();	
	f->seats=50;
}

void displayInfo(struct flightInfo *f, int i){
	printf("Your flight number is %d\n", f->flightNo);
	printf("Your departure city is %s\n", f->departCity);
	printf("Your destination city is %s\n", f->destinCity);
	printf("Date of flight: %s\n", f->date);
	printf("Seats available: %d\n Seats left: %d", f->seats, f->seats-1);
}

int main (){
	int i, numFlights=1;
	struct flightInfo flight[numFlights];
	
	for(i=0; i<numFlights; i++){
		storeInfo(&flight[i]);
	}
	
	for(i=0; i<numFlights; i++){
		displayInfo(&flight[i], i);
	}
	
	
	
	
	return 0;
}





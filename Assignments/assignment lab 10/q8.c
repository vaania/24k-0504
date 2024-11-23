#include <stdio.h>
#include <string.h>

struct cardetails{
	char make[50];
	char model[50];
	int mileage;
	int year;
	int price;
};

void displaycars(struct cardetails cars[], int i, int no_of_cars){
	for (i=0; i<no_of_cars; i++){
	printf("\nMake: %s\n", cars[i].make);
	printf("Model: %s\n", cars[i].model);
	printf("Mileage: %d\n", cars[i].mileage);
	printf("Year: %d\n", cars[i].year);
	printf("Price: %d\n", cars[i].price);
   }
}

void addcars(struct cardetails cars[], int no_of_cars){
	printf("\nProvide following details:\n");
	int i;
	for(i=0; i<no_of_cars; i++){
	printf("Make:");
	scanf(" %[^\n]", cars[i].make);
	printf("Model:");
	scanf(" %[^\n]", cars[i].model);
	printf("Mileage:");
	scanf(" %d", cars[i].mileage);
	printf("Year:");
	scanf("%d", &cars[i].year);
	printf("Price:");
	scanf("%d", &cars[i].price);
   }
}

void searchcar(struct cardetails cars[], int no_of_cars){
	int i,found=0;
	char search[100];
	printf("Enter the make you want to search:");
	scanf(" %[^\n]", search);
	for(i=0; i<no_of_cars; i++){
	if(strstr(cars[i].make, search)){
		printf("Make: %s\n", cars[i].make);
		printf("Model: %s", cars[i].model);
		found=1;
	}
    }
    if(!found){
	printf("No cars found!\n");
}
}

int main(){
	int choice;
	int no_of_cars=3;
	struct cardetails cars[3]={
		{"Toyota", "Corolla", 25000, 2020, 18500},
		{"Honda", "Civic", 30000, 2019, 19000},
		{"Ford", "Mustang", 10000, 2021, 30000}
	};
displaycars(cars, 0, no_of_cars);
	
	printf("\nDo you want to add more cars or search for a specific make? Press 1 to add and press 2 to search.");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			addcars(cars, no_of_cars);
			displaycars(cars, 0, no_of_cars);
			break;
		case 2:
			searchcar(cars, no_of_cars);
			break;
		default:
		printf("Invalid choice!");
		return 0;	
	}

	return 0;
}

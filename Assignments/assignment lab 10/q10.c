#include <stdio.h>
#include <string.h>

struct travelpack{
	char name[50];
	char destination[50];
	int duration;
	int cost;
	int seats;
};

void displaypackages(struct travelpack pack[], int i, int no_of_pack){
	for (i=0; i<no_of_pack; i++){
	printf("\nName: %s\n", pack[i].name);
	printf("Destination: %s\n", pack[i].destination);
	printf("Duration: %d\n", pack[i].duration);
	printf("Cost: %d\n", pack[i].cost);
	printf("Seats: %d\n", pack[i].seats);
   }
}

void book(struct travelpack pack[], int no_of_pack){
	printf("\nProvide following details:\n");
	int i;
	for(i=0; i<no_of_pack; i++){
	printf("Name:");
	scanf(" %[^\n]", pack[i].name);
	printf("Destination:");
	scanf(" %[^\n]", pack[i].destination);
	printf("Duration(enter number of days):");
	scanf(" %d", pack[i].duration);
	printf("Cost:");
	scanf("%d", &pack[i].cost);
	printf("Seats:");
	scanf("%d", &pack[i].seats);
   }
}


int main(){
	int choice;
	int no_of_pack=3;
	struct travelpack pack[3]={
		{"Karachi travel packages", "Islamabad", 20, 20000, 40},
		{"Pak travel packages", "Sawat", 10, 60000, 30},
		{"Lhr travel packages", "Naran", 25, 30000, 50}
	};
displaypackages(pack, 0, no_of_pack);
	
	printf("\nDo you want to book a travel package? If yes then press 1.");
	scanf("%d", &choice);
	
    if(choice=1){
			book(pack, no_of_pack);
			displaypackages(pack, 0, no_of_pack);
			printf("\nPackage booked! CONGRATULATIONS!");
}else{
	printf("Invalid choice!");
	return 0;
}

	return 0;
}

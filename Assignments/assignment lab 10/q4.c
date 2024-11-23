#include <stdio.h>
#include <string.h>

struct moviedetails{
	char title[50];
	char genre[50];
	char director[50];
	int releaseYr;
	float rating;
};

void displayInfo(struct moviedetails movies[], int i, int no_of_movies){
	for (i=0; i<no_of_movies; i++){
	printf("\nTitle: %s\n", movies[i].title);
	printf("Genre: %s\n", movies[i].genre);
	printf("Director: %s\n", movies[i].director);
	printf("Release year: %d\n", movies[i].releaseYr);
	printf("Rating: %.1f\n", movies[i].rating);
   }
}

void addmovies(struct moviedetails movies[], int no_of_movies){
	printf("\nProvide following details:\n");
	int i;
	for(i=0; i<no_of_movies; i++){
	printf("Title:");
	scanf(" %[^\n]", movies[i].title);
	printf("Genre:");
	scanf(" %[^\n]", movies[i].genre);
	printf("Director:");
	scanf(" %[^\n]", movies[i].director);
	printf("Release year:");
	scanf("%d", &movies[i].releaseYr);
	printf("Rating:");
	scanf("%f", &movies[i].rating);
   }
}

void searchgenre(struct moviedetails movies[], int no_of_movies){
	int i,found=0;
	char search[100];
	printf("Enter the genre you want to search:");
	scanf(" %[^\n]", search);
	for(i=0; i<no_of_movies; i++){
	if(strstr(movies[i].genre, search)){
		printf("Title: %s\n", movies[i].title);
		printf("Genre: %s", movies[i].genre);
		found=1;
	}
    }
    if(!found){
	printf("No movies found!\n");
}
}

int main(){
	int choice;
	int no_of_movies=3;
	struct moviedetails movies[3]={
		{"Interstellar", "sci-fi", "Christopher Nolan", 2014, 5.9},
		{"Venom", "action", "Andy Serkis", 2021, 5.7},
		{"Fractured", "thriller", "Brad Anderson", 2019, 6.5}
	};
displayInfo(movies, 0, no_of_movies);
	
	printf("\nDo you want to add more movies or search for a specific genre? Press 1 to add and press 2 to search.");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			addmovies(movies, no_of_movies);
			displayInfo(movies, 0, no_of_movies);
			break;
		case 2:
			searchgenre(movies, no_of_movies);
			break;
		default:
		printf("Invalid choice!");
		return 0;	
	}

	return 0;
}

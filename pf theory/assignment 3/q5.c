#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SPECIES 10
#define MAX_SUPPLIES 20

void initializeInventory(char **speciesSupplies, int *numSpecies) {
    printf("Enter the number of species:");
    scanf("%d", numSpecies);

    speciesSupplies = (char **)malloc(*numSpecies * sizeof(char *));
    for (int i=0; i < *numSpecies; i++) {
        printf("Enter the name of species %d: ", i + 1);

        speciesSupplies[i]=(char *)malloc(MAX_SUPPLIES * sizeof(char));
        
        scanf("%s", speciesSupplies[i]);
    }
}

void addSupplies(char **speciesSupplies, int numSpecies) {
    for (int i=0; i < numSpecies; i++) {
        printf("Enter the number of supplies for %s: ", speciesSupplies[i]);

        int numSupplies;
        
        scanf("%d", &numSupplies);

        speciesSupplies[i] = (char *)realloc(speciesSupplies[i], (numSupplies+1) * sizeof(char));

        for (int j=0; j < numSupplies; j++) {
            printf("Enter supply %d for %s: ", j+1, speciesSupplies[i]);
            scanf("%s", speciesSupplies[i]+j * MAX_SUPPLIES);
        }
    }
}

void updateSupplies(char **speciesSupplies, int numSpecies) {
    printf("Enter the index of the species to update (1-%d): ", numSpecies);

    int speciesIndex;
    
    scanf("%d", &speciesIndex);
    
    speciesIndex--;

    printf("Enter the index of the supply to update (1-%d): ", strlen(speciesSupplies[speciesIndex]) / MAX_SUPPLIES);

    int supplyIndex;

    scanf("%d", &supplyIndex);

    supplyIndex--;

    printf("Enter the new name for the supply: ");
    scanf("%s", speciesSupplies[speciesIndex] + supplyIndex * MAX_SUPPLIES);
}

void removeSpecies(char **speciesSupplies, int *numSpecies, int speciesIndex) {
    speciesIndex--;
    
    free(speciesSupplies[speciesIndex]);

    for (int i=speciesIndex; i < *numSpecies - 1; i++) {
        speciesSupplies[i] = speciesSupplies[i + 1];
    }
    
    *numSpecies -= 1;
}

void displayInventory(char **speciesSupplies, int numSpecies) {
    for (int i=0; i < numSpecies; i++) {
        printf("Species: %s\n", speciesSupplies[i]);
    
        int numSupplies = strlen(speciesSupplies[i]) / MAX_SUPPLIES;
    
        for (int j=0; j < numSupplies; j++) {
            printf("  Supply %d: %s\n", j + 1, speciesSupplies[i] + j * MAX_SUPPLIES);
        }
    }
}

int main() {
    char **speciesSupplies;
    int numSpecies = 0;

    initializeInventory(speciesSupplies, &numSpecies);
    addSupplies(speciesSupplies, numSpecies);

    updateSupplies(speciesSupplies, numSpecies);

    removeSpecies(speciesSupplies, &numSpecies, 2);

    displayInventory(speciesSupplies, numSpecies);

    for (int i=0; i < numSpecies; i++) {
        free(speciesSupplies[i]);
    }
    free(speciesSupplies);

    return 0;
}
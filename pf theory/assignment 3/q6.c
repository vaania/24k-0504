#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    float temperature;
    float rainfall;
    float windSpeed;
} Weather;

typedef struct {
    char cropType[50];
    char growthStage[50];
    float expectedYield;
    Weather* weather;
} Crop;

typedef struct {
    char equipmentName[50];
    char operationalStatus[20];
    float fuelLevel;
    char activitySchedule[100];
} Equipment;

typedef struct {
    float soilNutrients;
    float pHLevel;
    float pestActivity;
} Sensor;

typedef struct {
    float latitude;
    float longitude;
    float soilHealth;
    float moistureLevel;
    int numCrops;
    Crop* crops;
    int numEquipment;
    Equipment* equipment;
    int numSensors;
    Sensor* sensors;
} Field;

typedef struct {
    int numFields;
    Field* fields;
    float aggregateYieldPrediction;
} RegionalHub;

// Function prototypes
Field* createField(int numCrops, int numEquipment, int numSensors);
void displayFieldDetails(const Field* field);
void freeField(Field* field);

RegionalHub* createHub(int numFields);
void displayHubDetails(const RegionalHub* hub);
void freeHub(RegionalHub* hub);

int main() {
    int numHubs, numFields, numCrops, numEquipment, numSensors;

    printf("Enter the number of regional hubs: ");
    scanf("%d", &numHubs);

    RegionalHub* hubs = malloc(numHubs * sizeof(RegionalHub));

    for (int i=0; i < numHubs; i++) {
        printf("\nCreating Hub %d:\n", i + 1);
        printf("Enter the number of fields in this hub: ");
        scanf("%d", &numFields);

        hubs[i] = *createHub(numFields);

        for (int j=0; j < hubs[i].numFields; j++) {
            printf("\nCreating Field %d in Hub %d:\n", j + 1, i + 1);
            printf("Enter number of crops, equipment, and sensors for this field: ");
            scanf("%d %d %d", &numCrops, &numEquipment, &numSensors);

            hubs[i].fields[j] = *createField(numCrops, numEquipment, numSensors);

            hubs[i].fields[j].latitude = 30.0 + j;
            hubs[i].fields[j].longitude = 80.0 + j;
            hubs[i].fields[j].soilHealth = 7.5 + j;
            hubs[i].fields[j].moistureLevel = 25.0 + j;
        }
    }
    for (int i=0; i < numHubs; i++) {
        printf("\n---Hub %d Details---\n", i + 1);
        displayHubDetails(&hubs[i]);
    }

    for (int i=0; i < numHubs; i++) {
        freeHub(&hubs[i]);
    }

    free(hubs);

    return 0;
}

Field* createField(int numCrops, int numEquipment, int numSensors) {
    Field* field = malloc(sizeof(Field));
    field->numCrops = numCrops;

    field->crops = malloc(numCrops * sizeof(Crop));
    field->numEquipment = numEquipment;

    field->equipment = malloc(numEquipment * sizeof(Equipment));
    field->numSensors = numSensors;

    field->sensors = malloc(numSensors * sizeof(Sensor));

    return field;
}

void displayFieldDetails(const Field* field) {
    printf("Location: Latitude %.4f, Longitude %.4f\n", field->latitude, field->longitude);
    printf("Soil Health: %.2f, Moisture Level: %.2f\n", field->soilHealth, field->moistureLevel);
    printf("Crops:\n");

    for (int i=0; i < field->numCrops; i++) {
        printf("  Crop %d: Type: %s, Growth Stage: %s, Expected Yield: %.2f\n",
               i + 1, field->crops[i].cropType, field->crops[i].growthStage, field->crops[i].expectedYield);
    }
}
void freeField(Field* field) {
    for (int i=0; i < field->numCrops; i++) {
        free(field->crops[i].weather);
    }

    free(field->crops);
    free(field->equipment);
    free(field->sensors);
    free(field);
}

RegionalHub* createHub(int numFields) {
    RegionalHub* hub = malloc(sizeof(RegionalHub));
    hub->numFields = numFields;

    hub->fields = malloc(numFields * sizeof(Field));
    hub->aggregateYieldPrediction = 0.0;

    return hub;
}
void displayHubDetails(const RegionalHub* hub) {
    for (int i=0; i < hub->numFields; i++) {
        printf("\nField %d:\n", i + 1);

        displayFieldDetails(&hub->fields[i]);
    }
}

void freeHub(RegionalHub* hub) {
    for (int i=0; i < hub->numFields; i++) {
        freeField(&hub->fields[i]);
    }

    free(hub->fields);
}

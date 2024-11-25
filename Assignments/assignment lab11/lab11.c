#include <stdio.h>
#include <string.h>

int i;
struct player {
    char name[20];
    char team[20];
};

struct bowl {
    char type[10]; //seemer, racer, spinner, etc.
    char arm[6];   // left or right
    struct player ply;
};

struct bat {
    char type[10]; //top-order, middle-order, lower-order
    char handed[8]; //lefty or righty
    struct bowl ply2;
};

//functions
void createPlayer(struct player *p, const char *name, const char *team);
void createBowler(struct bowl *b, const char *type, const char *arm, const char *name, const char *team);
void createBatsman(struct bat *bt, const char *type, const char *handed, const char *bowlType, const char *arm, const char *name, const char *team);
void readPlayer(struct player *p);
void readBowler(struct bowl *b);
void readBatsman(struct bat *b);
void storePlayerData(const char *filename, struct player players[], int size);
void storeBowlerData(const char *filename, struct bowl bowlers[], int size);
void storeBatsmanData(const char *filename, struct bat batsmen[], int size);
void retrievePlayerData(const char *filename, struct player players[], int *size);
void retrieveBowlerData(const char *filename, struct bowl bowlers[], int *size);
void retrieveBatsmanData(const char *filename, struct bat batsmen[], int *size);

int main() {
    struct player players[5];
    struct bowl bowlers[3];
    struct bat batsmen[2];
    int playerSize, bowlerSize, batsmanSize;
    
    createPlayer(&players[0], "Rohit", "India");
    createPlayer(&players[1], "Smith", "Australia");
    createPlayer(&players[2], "Kane", "New Zealand");
    createPlayer(&players[3], "Stokes", "England");
    createPlayer(&players[4], "Warner", "Australia");
    createBowler(&bowlers[0], "Seemer", "Right", "Starc", "Australia");
    createBowler(&bowlers[1], "Pacer", "Left", "Anderson", "England");
    createBowler(&bowlers[2], "Spinner", "Right", "Ashwin", "India");

    createBatsman(&batsmen[0], "Top-Order", "Lefty", "Seemer", "Right", "Gill", "India");
    createBatsman(&batsmen[1], "Middle", "Righty", "Pacer", "Left", "Maxwell", "Australia");

    // display of players, bowlers, and batsmen
    printf("Players:\n");
    storePlayerData("players.txt", players, 5);
    retrievePlayerData("players.txt", players, &playerSize);
    for (i=0; i<playerSize; i++) {
        readPlayer(&players[i]);
    }

    printf("\nBowlers:\n");
    storeBowlerData("bowlers.txt", bowlers, 3);
    retrieveBowlerData("bowlers.txt", bowlers, &bowlerSize);
    for (i = 0; i < bowlerSize; i++) {
        readBowler(&bowlers[i]);
    }

    printf("\nBatsmen:\n");
    storeBatsmanData("batsmen.txt", batsmen, 2);
    retrieveBatsmanData("batsmen.txt", batsmen, &batsmanSize);
    for (i = 0; i < batsmanSize; i++) {
        readBatsman(&batsmen[i]);
    }

    return 0;
}

//implementation of create and read functions
void createPlayer(struct player *p, const char *name, const char *team) {
    strcpy(p->name, name);
    strcpy(p->team, team);
}

void createBowler(struct bowl *b, const char *type, const char *arm, const char *name, const char *team) {
    strcpy(b->type, type);
    strcpy(b->arm, arm);
    strcpy(b->ply.name, name);
    strcpy(b->ply.team, team);
}

void createBatsman(struct bat *bt, const char *type, const char *handed, const char *bowlType, const char *arm, const char *name, const char *team) {
    strcpy(bt->type, type);
    strcpy(bt->handed, handed);
    strcpy(bt->ply2.type, bowlType);
    strcpy(bt->ply2.arm, arm);
    strcpy(bt->ply2.ply.name, name);
    strcpy(bt->ply2.ply.team, team);
}

void readPlayer(struct player *p) {
    printf("Name: %s, Team: %s\n", p->name, p->team);
}

void readBowler(struct bowl *b) {
    printf("Bowler Type: %s, Arm: %s\n", b->type, b->arm);
    readPlayer(&b->ply);
}

void readBatsman(struct bat *b) {
    printf("Batsman Type: %s, Handed: %s\n", b->type, b->handed);
    readBowler(&b->ply2);
}

//implementation of Filing
void storePlayerData(const char *filename, struct player players[], int size) {
    FILE *fptr = fopen(filename, "w");
    if (fptr == NULL) {
        perror("File doesn't exist");
        return;
    }
    for (i=0; i<size; i++) {
        fprintf(fptr, "%s %s\n", players[i].name, players[i].team);
    }
    fclose(fptr);
}

void storeBowlerData(const char *filename, struct bowl bowlers[], int size) {
    FILE *fptr = fopen(filename, "w");
    if (fptr == NULL) {
        perror("File doesn't exist");
        return;
    }
    for (i=0; i<size; i++) {
        fprintf(fptr, "%s %s %s %s\n", bowlers[i].type, bowlers[i].arm, bowlers[i].ply.name, bowlers[i].ply.team);
    }
    fclose(fptr);
}

void storeBatsmanData(const char *filename, struct bat batsmen[], int size) {
    FILE *fptr = fopen(filename, "w");
    if (fptr == NULL) {
        perror("File doesn't exist");
        return;
    }
    for (i=0; i<size; i++) {
        fprintf(fptr, "%s %s %s %s %s %s\n", batsmen[i].type, batsmen[i].handed, batsmen[i].ply2.type, batsmen[i].ply2.arm, batsmen[i].ply2.ply.name, batsmen[i].ply2.ply.team);
    }
    fclose(fptr);
}

void retrievePlayerData(const char *filename, struct player players[], int *size) {
    FILE *fptr = fopen(filename, "r");
    if (fptr == NULL) {
        perror("File doesn't exist");
        return;
    }
    *size = 0;
    while (fscanf(fptr, "%s %s", players[*size].name, players[*size].team) != EOF) {
        (*size)++;
    }
    fclose(fptr);
}

void retrieveBowlerData(const char *filename, struct bowl bowlers[], int *size) {
    FILE *fptr = fopen(filename, "r");
    if (fptr == NULL) {
        perror("File doesn't exist");
        return;
    }
    *size = 0;
    while (fscanf(fptr, "%s %s %s %s", bowlers[*size].type, bowlers[*size].arm, bowlers[*size].ply.name, bowlers[*size].ply.team) != EOF) {
        (*size)++;
    }
    fclose(fptr);
}

void retrieveBatsmanData(const char *filename, struct bat batsmen[], int *size) {
    FILE *fptr = fopen(filename, "r");
    if (fptr == NULL) {
        perror("File doesn't exist");
        return;
    }
    *size = 0;
    while (fscanf(fptr, "%s %s %s %s %s %s", batsmen[*size].type, batsmen[*size].handed, batsmen[*size].ply2.type, batsmen[*size].ply2.arm, batsmen[*size].ply2.ply.name, batsmen[*size].ply2.ply.team) != EOF) {
        (*size)++;
    }
    fclose(fptr);
}


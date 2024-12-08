#include <stdio.h>
#include <string.h>

#define NUM_BALLS 12

struct Player {
    int ballScores[NUM_BALLS]; 
    char playerName[50];
    int totalScore; 
};

int validateScore(int score) {
    return (score >= 0 && score <= 6);
}

void playGame(struct Player *player) {
    player->totalScore = 0;
    printf("\nPlayer: %s\n", player->playerName);
    for (int i=0; i < NUM_BALLS; i++) {
        int score;

        printf("Enter score for ball %d: ", i + 1);
        scanf("%d", &score);

        if (validateScore(score)) {
            player->ballScores[i] = score;
            player->totalScore += score;
        } else {
            printf("Invalid score! The score is disregarded.\n");
            player->ballScores[i] = 0;
        }
    }
}
void findWinner(struct Player player1, struct Player player2) {

    if (player1.totalScore > player2.totalScore) {
        printf("Winner: %s\n", player1.playerName);
    } else if (player2.totalScore > player1.totalScore) {
        printf("Winner: %s\n", player2.playerName);
    } else {
        printf("Tie.\n");
    }
}
void displayscoreboard(struct Player player1, struct Player player2) {
    printf("\n--Scoreboard--\n");

    printf("\nPlayer: %s\n", player1.playerName);
    printf("Scores per ball: ");
    for (int i = 0; i < NUM_BALLS; i++) {
        printf("%d ", player1.ballScores[i]);
    }
    printf("\nTotal Score: %d\n", player1.totalScore);
    printf("Average Score: %.2f\n", (float)player1.totalScore / NUM_BALLS);

    printf("\nPlayer: %s\n", player2.playerName);
    printf("Scores per ball: ");
    for (int i = 0; i < NUM_BALLS; i++) {
        printf("%d ", player2.ballScores[i]);
    }
    printf("\nTotal Score: %d\n", player2.totalScore);
    printf("Average Score: %.2f\n", (float)player2.totalScore / NUM_BALLS);
}

int main() {
    struct Player player1, player2;

    printf("Enter the name of Player 1: ");
    scanf(" %[^\n]s", player1.playerName);

    printf("Enter the name of Player 2: ");
    scanf(" %[^\n]s", player2.playerName);

    playGame(&player1);
    playGame(&player2);

    displayscoreboard(player1, player2);

    findWinner(player1, player2);

    return 0;
}

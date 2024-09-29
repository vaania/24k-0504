#include <stdio.h>

int main() {
    float attendance, assignmentScore, examScore, finalGrade;
    char grade;

    printf("Enter attendance percentage (0-100): ");
    scanf("%f", &attendance);

    printf("Enter average assignment score (0-100): ");
    scanf("%f", &assignmentScore);

    printf("Enter exam score (0-100): ");
    scanf("%f", &examScore);

    finalGrade = (attendance * 0.2) + (assignmentScore * 0.4) + (examScore * 0.4);

    if (finalGrade >= 90) {
        grade = 'A';
    } else if (finalGrade >= 80) {
        grade = 'B';
    } else if (finalGrade >= 70) {
        grade = 'C';
    } else if (finalGrade >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("Final Grade: %.2f\n", finalGrade);
    printf("Letter Grade: %c\n", grade);

    if (attendance < 75) {
        printf("Attendance is below the required 75%%.\n");
    }
    return 0;
}

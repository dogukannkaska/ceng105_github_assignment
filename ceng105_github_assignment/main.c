#include <stdio.h>

int main() {

    int grade;

    // Prompt the user to enter the grade
    printf("Enter your final grade (between 0 and 100): ");
    scanf("%d", &grade);

    if (grade < 45) {
        printf("You failed the course\n");
    } else {
        printf("You passed the course\n");
    }

    return 0;
}

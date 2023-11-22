#include <stdio.h>

int main() {

    int grade;

    printf("Enter your final grade (between 0 and 100): ");
    scanf("%d", &grade);

    if (grade >= 90 && grade <= 100) {
        printf("Your grade is A\n");
    } else if (grade >= 75 && grade <= 89) {
        printf("Your grade is B\n");
    } else if (grade >= 55 && grade <= 74) {
        printf("Your grade is C\n");
    } else if (grade >= 45 && grade <= 54) {
        printf("Your grade is D\n");
    } else if (grade >= 0 && grade <= 44) {
        printf("Your grade is F\n");
    } else {
        printf("Invalid grade entered. Please enter a grade between 0 and 100.\n");
    }

    return 0;
}

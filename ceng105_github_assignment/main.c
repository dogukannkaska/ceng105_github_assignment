#include <stdio.h>

int main() {
    int grade;

    printf("Enter your final grade (between 0 and 100): ");
    scanf("%d", &grade);

    if (grade >= 90 && grade <= 100) {
        printf("Excellent! You've earned the highest grade.\n");
    } else if (grade >= 75 && grade <= 89) {
        printf("Good job! You've earned a solid grade.\n");
    } else if (grade >= 55 && grade <= 74) {
        printf("Satisfactory. You've passed the course.\n");
    } else if (grade >= 45 && grade <= 54) {
        printf("Pass. You've just met the minimum requirements.\n");
    } else if (grade >= 0 && grade <= 44) {
        printf("Fail. Unfortunately, you didn't pass the course.\n");
    } else {
        printf("Invalid grade entered. Please enter a grade between 0 and 100.\n");
    }

    return 0;
}

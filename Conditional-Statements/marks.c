#include <stdio.h>

int main() {
    
    float exam1, exam2, exam3, average;
    printf("Enter score for Exam 1: ");
    scanf("%f", &exam1);

    printf("Enter score for Exam 2: ");
    scanf("%f", &exam2);

    printf("Enter score for Exam 3: ");
    scanf("%f", &exam3);
    average = (exam1 + exam2 + exam3) / 3;
    printf("Average score: %.2f\n", average);
    if (average > 85) {
        printf("Title: High Achiever\n");
    } else if (average >= 70 && average <= 85) {
        printf("Title: Pass\n");
    } else {
        printf("Title: Needs Improvement\n");
    }

    return 0;
}

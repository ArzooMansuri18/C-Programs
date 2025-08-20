#include <stdio.h>

int main() {
    int n, i;
    float marks[100], total = 0, average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input marks
    for (i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    // Calculate average
    average = total / n;

    printf("\n--- Student Results ---\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: %.2f marks - %s\n", 
               i + 1, 
               marks[i], 
               (marks[i] >= 40) ? "Pass" : "Fail");
    }

    printf("\nClass Total Marks: %.2f", total);
    printf("\nClass Average Marks: %.2f\n", average);

    return 0;
}
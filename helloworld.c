#include <stdio.h>

int main() {
    char name[50];
    int roll, marks[5], total = 0;
    float percentage;
    char grade;
    int pass = 1;

    // Input student details
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter roll number: ");
    scanf("%d", &roll);

    // Input marks and check for fail
    for(int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i+1);
        scanf("%d", &marks[i]);
        total += marks[i];
        if(marks[i] < 40) {
            pass = 0;
        }
    }

    // Calculate percentage
    percentage = total / 5.0;

    // Assign grade
    if(percentage >= 80)
        grade = 'A';
    else if(percentage >= 60)
        grade = 'B';
    else if(percentage >= 40)
        grade = 'C';
    else
        grade = 'F';

    // Display result
    printf("\n--- Result ---\n");
    printf("Name: %s\n", name);
    printf("Roll: %d\n", roll);
    printf("Total: %d\n", total);
    printf("Percentage: %.2f\n", percentage);
    printf("Grade: %c\n", grade);
    printf("Status: %s\n", pass ? "PASS" : "FAIL");

    return 0;
}
#include <stdio.h>

char get_grade(int score) {

    if (score < 50 && score > 0) {
        return 70;
    }
    if (score >= 50 && score < 70) {
        return 68;
    }
    if (score >= 70 && score < 80) {
        return 67;
    }
    if (score >= 80 && score < 90) {
        return 66;
    }
    if (score >= 90 && score <= 100) {
        return 65;
    } else
        return 73;
}

int main(void) {
    {
        printf("Test 1\n");
        char result = get_grade(95);
        printf("Expected:A\n");
        printf("Actual  :%c\n\n", result);
    }

    {
        printf("Test 2\n");
        char result = get_grade(80);
        printf("Expected:B\n");
        printf("Actual  :%c\n\n", result);
    }

    {
        printf("Test 3\n");
        char result = get_grade(71);
        printf("Expected:C\n");
        printf("Actual  :%c\n\n", result);
    }

    {
        printf("Test 4\n");
        char result = get_grade(67);
        printf("Expected:D\n");
        printf("Actual  :%c\n\n", result);
    }

    {
        printf("Test 5\n");
        char result = get_grade(57);
        printf("Expected:D\n");
        printf("Actual  :%c\n\n", result);
    }

    {
        printf("Test 6\n");
        char result = get_grade(47);
        printf("Expected:F\n");
        printf("Actual  :%c\n\n", result);
    }

    {
        printf("Test 7: Check for invalid values\n");
        char result = get_grade(101);
        printf("Expected:I\n");
        printf("Actual  :%c\n\n", result);
    }

    {
        printf("Test 8: Check for invalid values\n");
        char result = get_grade(-11);
        printf("Expected:I\n");
        printf("Actual  :%c\n\n", result);
    }
}
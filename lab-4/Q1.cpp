#include <stdio.h>

int main() {
    int sco;
    
    printf("Ente student's score: ");
    scanf("%d", &sco);
    
    if (sco >= 90 && sco <= 100) {
        printf("Grade: A\n");
    } 
	else if (sco >= 80 && sco <= 89) {
        printf("Grade: B\n");
    }
	 
	 else if (sco >= 70 && sco <= 79) {
        printf("Grade: C\n");
    } 
	else if (sco >= 60 && sco <= 69) {
        printf("Grade: D\n");
    }
	 else if (sco< 60 && sco >= 0) {
        printf("Grade: F\n");
    }
	 else {
        printf("Invalid score. Please enter a score between 0 and 100.\n");
    }

    return 0;
}












































//#include <stdio.h>
//
//int main() {
//    int score;
//
//    // Input the student's score
//    printf("Enter the student's score (0-100): ");
//    scanf("%d", &score);
//
//    // Classify the score into a grade
//    if (score >= 90 && score <= 100) {
//        printf("Grade: A\n");
//    } else if (score >= 80 && score <= 89) {
//        printf("Grade: B\n");
//    } else if (score >= 70 && score <= 79) {
//        printf("Grade: C\n");
//    } else if (score >= 60 && score <= 69) {
//        printf("Grade: D\n");
//    } else if (score < 60 && score >= 0) {
//        printf("Grade: F\n");
//    } else {
//        printf("Invalid score. Please enter a score between 0 and 100.\n");
//    }
//
//    return 0;
//}


















//#4
//
//#include <stdio.h>
//
//int main() {
//    int n;
//
//    // Input the number
//    printf("Enter a positive integer: ");
//    scanf("%d", &n);
//
//    // Check the range and print the corresponding message
//    if (n >= 1 && n <= 20) {
//        switch (n) {
//            case 1: printf("one\n"); break;
//            case 2: printf("two\n"); break;
//            case 3: printf("three\n"); break;
//            case 4: printf("four\n"); break;
//            case 5: printf("five\n"); break;
//            case 6: printf("six\n"); break;
//            case 7: printf("seven\n"); break;
//            case 8: printf("eight\n"); break;
//            case 9: printf("nine\n"); break;
//            case 10: printf("ten\n"); break;
//            case 11: printf("eleven\n"); break;
//            case 12: printf("twelve\n"); break;
//            case 13: printf("thirteen\n"); break;
//            case 14: printf("fourteen\n"); break;
//            case 15: printf("fifteen\n"); break;
//            case 16: printf("sixteen\n"); break;
//            case 17: printf("seventeen\n"); break;
//            case 18: printf("eighteen\n"); break;
//            case 19: printf("nineteen\n"); break;
//            case 20: printf("twenty\n"); break;
//            default: // This default case will never be reached due to the range check
//                printf("Invalid number\n");
//        }
//    } else if (n > 20) {
//        printf("Number greater than 20.\n");
//    } else {
//        printf("Invalid input\n");
//    }
//
//    return 0;
//}
//#6
//#include <stdio.h>

//int main() {
//    int num1, num2;
//
//    // Input the two numbers
//    printf("Enter the first number: ");
//    scanf("%d", &num1);
//
//    printf("Enter the second number: ");
//    scanf("%d", &num2);
//
//    // Compare the two numbers
//    if (num1 > num2) {
//        // First number is greater than the second
//        if (num1 > 100) {
//            printf("First number is significantly larger\n");
//        } else {
//            // Check if the first number is negative
//            if (num1 < 0) {
//                printf("First number is negative and smaller\n");
//            } else {
//                printf("First number is larger\n");
//            }
//        }
//    } else if (num1 < num2) {
//        printf("First number is smaller\n");
//    } else {
//        // num1 is equal to num2
//        printf("Both numbers are equal\n");
//    }
//
//    return 0;
//}

#include <stdio.h>
#include "mylib.h"
#include "gaurvilib.h"

int main() {
    int choice, num;
    int arr[] = {12, 70, 153, 13, 23};
    int n = 5;

    do{
	
        printf("\n--- Menu ---\n");
        printf("1. Check Armstrong\n");
        printf("2. Check Adams\n");
        printf("3. Check Prime Palindrome\n");
        printf("4. Array operations\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 5){
			printf("Exiting program. Goodbye!\n");
			break;
		}


        if (choice >= 1 && choice <= 3) {
            printf("Enter a number: ");
            scanf("%d", &num);
        }

        switch (choice) {
            case 1:
                if (isArmstrong(num)) {
		            printf("%d is an Armstrong number.\n", num);
		        } 
				else {
		            printf("%d is not an Armstrong number.\n", num);
		        }
		        break;

            case 2:
               if (isAdams(num)) {
		            printf("%d is an Adams number.\n", num);
		        } 
				else {
		            printf("%d is not an Adams number.\n", num);
		        }
		        break;
            case 3:
                if(isPrimePalindrome(num)){
		            printf("%d is PrimePalindrome number.\n", num);
		        } 
				else {
		            printf("%d is not PrimePalindrome number.\n", num);
		        }
		        break;
            case 4:
            	int idx;
                displayArray(arr, n);
                printf("Max Index: %d\n", findMaxIndex(arr, n));
                printf("Min Index: %d\n", findMinIndex(arr, n));
                printf("Average: %.2f\n", findAverage(arr, n));
                reverseArray(arr, n);
                printf("Reversed array: "); displayArray(arr, n);
                sortArray(arr, n);
                printf("Sorted array: "); displayArray(arr, n);
                printf("Enter value to search: ");
                scanf("%d", &num);
                idx = linearSearch(arr, n, num);
                if (idx == -1)
                    printf("Not found.\n");
                else
                    printf("Found at index %d.\n", idx);
                break;
            default:
                printf("Invalid choice.\n");
        }
    }
    while(choice != 5);
    return 0;
}

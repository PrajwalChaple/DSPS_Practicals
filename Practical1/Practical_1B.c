/*Aim:- Write a program to implement a Binary Search algorithm. Write a search function which takes a SearchList as its first parameter and a Comparable as its second. If either parameter is null, or if the SearchList is empty, you should return NULL.
 implement the following algorithm: 
• Examine the value in the middle of the current array and print it. 
• If the midpoint value is the value that we are looking for, return true 
• If the value that we are looking for is greater than the midpoint value, adjust the current array to start at the midpoint and print the index.
• if the value that we are looking for is less than the midpoint value, adjust the current array to end at the midpoint  and print the index.
• Continue until you find the value, or until the start reaches the end, 
*/

#include <stdio.h>

int main() {
    int n, i, key, low, high, mid, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    printf("\nBinary Search Steps:\n");
    while (low <= high) {
        mid = (low + high) / 2;
        printf("Checking midpoint index %d (value = %d)\n", mid, arr[mid]);

        if (arr[mid] == key) {
            printf("\nElement %d found at index %d (position %d)\n", key, mid, mid + 1);
            found = 1;
            break;
        } 
        else if (arr[mid] < key) {
            printf("%d is greater than %d, searching right half.\n", key, arr[mid]);
            low = mid + 1;
        } 
        else {
            printf("%d is smaller than %d, searching left half.\n", key, arr[mid]);
            high = mid - 1;
        }
    }

    if (!found)
        printf("\nElement %d not found in the array.\n", key);

    return 0;
}
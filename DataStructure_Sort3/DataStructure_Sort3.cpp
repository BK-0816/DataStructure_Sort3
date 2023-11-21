#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 20
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

int list[MAX_SIZE];
int n;

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubble_sort(int list[], int n) {
    int i, j, temp;
    int compare = 0;
    int movements = 0;

    printf("Bubble Sort Process:\n");

    for (i = n - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            compare++;

            if (list[j] > list[j + 1]) {
                SWAP(list[j], list[j + 1], temp);
                movements++;
            }
        }

        printf("Pass %d: ", n - i);
        print_array(list, n);
    }

    printf("\nBubble Sort Move Count: %d\n", movements);
    printf("Bubble Sort Compare Count: %d\n", compare);
}

int main(void) {
    int i;
    n = MAX_SIZE;
    srand(time(NULL));

    printf("Original List: ");
    for (i = 0; i < n; i++) {
        list[i] = rand() % 100;
        printf("%d ", list[i]);
    }
    printf("\n");

    bubble_sort(list, n);

    return 0;
}
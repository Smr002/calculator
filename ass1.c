#include <stdio.h>

float find_average(int arr[], int n) {
    int i;
    float sum = 0.0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

int main() {
    int n, i;
    printf("Enter the number of elements in the sequence: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the sequence:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    float average = find_average(arr, n);
    printf("The average is: %f\n", average);
    return 0;
}

#include <stdio.h>


int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}


int lcm_of_array(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = lcm(result, arr[i]);
    }
    return result;
}

int main() {
    int n;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];


    printf("Enter the integers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    int result = lcm_of_array(arr, n);


    printf("The least common multiple is: %d\n", result);

    return 0;
}

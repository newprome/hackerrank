// Task

// In this challenge, create an array of size n dynamically, and read the values from stdin. Iterate the array calculating the sum of all elements. Print the sum and free the memory where the array is stored.

// While it is true that you can sum the elements as they are read, without first storing them to an array, but you will not get the experience working with an array. Efficiency will be required later.

// Input Format

// The first line contains an integer, n.
// The next line contains n space-separated integers.

// Output Format

// Print the sum of the integers in the array.





#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, sum=0;
    scanf("%d", &n);
    int *arr = (int*) malloc(n * sizeof(int));
    for(int i = 0; i <= n; i++){
        scanf("%d", arr+i);
    }
    for(int i = 0; i < n; i++){
        sum += *(arr+i);
    }
    printf("%d\n", sum);
    free(arr);    
    return 0;
}

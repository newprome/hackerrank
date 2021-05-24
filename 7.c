// Given an array, of size n, reverse it.

// Example: If array, arr=[1, 2, 3, 4, 5], after reversing it, the array should be, arr=[5, 4, 3, 2, 1].

// Input Format

// The first line contains an integer, , denoting the size of the array. The next line contains  space-separated integers denoting the elements of the array.

// Output Format

// The output is handled by the code given in the editor, which would print the array.





#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    int temp;
    for (i = 0; i < num / 2; i++) {
        temp = (int) *(arr + num - i - 1);
        *(arr + num - i - 1) = *(arr + i);
        *(arr + i) = temp;
    }    
    

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}

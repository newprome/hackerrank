// Digit Frequency

// Input Format

// The first line contains a string, num which is the given number.

// Constraints

// All the elements of num are made of english alphabets and digits.

// Output Format

// Print ten space-separated integers in a single line denoting the frequency of each digit from 0 to 9.





#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     
    char s[1000]; 
    char map[10];
    scanf("%s", &s);
    int len = strlen(s);
    
    for (int i = 0; i < 10; i++) map[i] = 0;
    
    for (int i = 0; i < len; i++) {
        int x = s[i] - '0';
        if (x >= 0 && x <= 9) 
        map[x]++;
    }
    
    for (int i = 0; i < 10; i++)
    printf("%d ", map[i]);
   
    return 0;
}


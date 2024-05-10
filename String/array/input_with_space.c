#include <stdio.h>
#include <string.h>


int main () {
    char arr[10000];
    // gets(arr);
    fgets(arr, 1000, stdin);
     arr[strcspn(arr, "\n")] = 0;
    printf("%s", arr);
    return 0;
} 

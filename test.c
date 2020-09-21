#include "sort.h"

int main(int argc, char const *argv[]) {
    int i, n, *arr = (int*)malloc(sizeof(int)*5);
    printf("%s\n", "Enter number of elements in an array");
    scanf("%d", &n);
    printf("%s\n", "Enter array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", (arr+i));
    }


 //Call sorting function here
    
    print_arr(arr, n);
    printf("\n");
    return 0;
}
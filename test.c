#include "sort.h"

int main(int argc, char const *argv[]) {
    int i, n, *arr, *arr_res;
    printf("%s\n", "Enter number of elements in an array");
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int)*n);
    arr_res = (int*)malloc(sizeof(int)*n);
    printf("%s\n", "Enter array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", (arr+i));
    }


 //Call sorting function here
    merge_sort(arr, arr_res, 0, n-1);
    print_arr(arr, n);
    printf("\n");
    return 0;
}
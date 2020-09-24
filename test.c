#include "sort.h"

int main(int argc, char const *argv[]) {
    int i, n, ch, *arr, *arr_res;
    printf("%s\n", "Enter number of elements in an array");
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int)*n);
    arr_res = (int*)malloc(sizeof(int)*n);
    printf("%s\n", "Enter array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", (arr+i));
    }

    printf( "\n"
            "1. Selection sort\n"
            "2. Bubble_sort\n"
            "3. Insertion_sort\n"
            "4. Merge sort\n"
            "5. Quick_sort\n"
            "6. Heap_sort\n"
            "Select sorting algo to be used(1-6): ");
            scanf("%d", &ch);
            
            switch (ch) {
                case 1:
                    selection_sort(arr,n);
                    printf("\nUsing Selection sort. \n");
                    break;
                
                case 2:
                    bubble_sort(arr, n);
                    printf("\nUsing Bubble sort. \n");
                    break;
                    
                case 3:
                    insertion_sort(arr,n);
                    printf("\nUsing insertion sort. \n");
                    break;
                    
                case 4:
                    merge_sort(arr, arr_res, 0, n-1);
                    printf("\nUsing Merge sort. \n");
                    break;
                    
                case 5:
                    quick_sort(arr, 0, n);
                    printf("\nUsing Quick sort. \n");
                    break;
                    
                case 6:
                     heap_sort(arr, n-1);
                     printf("\nUsing Heap sort. \n");
                     break;
                     
                default:
                    printf("Invalid sorting algorithm selected.\n");
            }
    printf("The sorted array is: ");
    print_arr(arr, n);
    printf("\n");
    return 0;
}

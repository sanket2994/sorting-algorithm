#include "sort.h"

void print_arr(int *arr, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", *(arr+i));
    }
    printf("\n");
}

static void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

static int partition(int *arr, int start, int end){
    
    /*set pivot as the last element in the array*/
    int pivot = *(arr+(end-1));
    int i,j;
    
    /*j is the iterator and i is used for swapping the 
     * elements which are larger than the elements smaller than pivot*/
    for(j=0, i = j-1; j<end-1; j++){
        /*If pivot element is greater than the element at j 
         * Then increment i and swap the element at i and j*/
        if (pivot > *(arr+j)){
            i++;
            swap((arr+i), (arr+j));
        }
    }
    i++;
    swap((arr+i), (arr+j));
    //print_arr(arr, end);
    return i;
}

void bubble_sort(int *arr, int n){
    int i, j, flag = 0;
    for(i = 0; i<n;i++){
        flag = 0;
        for(j=0; j<n-i-1; j++){
            if(*(arr+j) > *(arr+j+1)){
                swap((arr+j), (arr+j+1));
                flag = 1;
            }
        }
        print_arr(arr, n);
        printf(" %d\n", i);
        if(flag == 0){
            return;
        }
    }
}

void selection_sort(int *arr, int n){
    int i,j;
    for (i= 0;  i < n; i++) {
        for(j=i+1; j<n;j++){
            if(*(arr+i) > *(arr+j)){
                swap((arr+i), (arr+j));
            }
        }
        print_arr(arr, n);
        printf(" %d\n", i);    
    }
}

void quick_sort(int *arr, int start, int end){
    int i;
    if (start < end){
        i = partition(arr, start, end);
        quick_sort(arr, start, i);
        quick_sort(arr, i+1, end);
    }
}

void insertion_sort(int *arr, int n){
    int i, j, key;
    for (j=1; j<n;j++){
        i = j-1;
        key = *(arr+j);
        
        while(i>=0 && (key < *(arr+i))){
            *(arr+i+1) = *(arr+i);
            i--;
        //    printf("in loop\n" );
        }
        *(arr+i+1) = key;
    }
    
}

static void merge(int *arr, int *arr_res, int start, int mid, int end){
    int i, j, k=start;
    
    /*When elements are present in both  array*/
    for(i=start, j=mid+1; i<=mid && j<=end;){
        if (*(arr+i) < *(arr+j)){
             *(arr_res+k) = *(arr+i);
             i++;k++;
        }
        else{
            *(arr_res+k) = *(arr+j);
            j++;k++;
        }
    }
    
    /*When elements are present only in 1st array (start->mid)*/
    if (j <= end){
        for(;j<=end;){
            *(arr_res+k) = *(arr+j);
            j++;k++;
        }
    }
    
    /*When elements are present only in 2ns array (mid+1->end)*/
    else if (i<=mid){
        for(;i<=mid;){
            *(arr_res+k) = *(arr+i);
            i++;k++;
        }
    }
    
    /*Copy elements from temp array to main array*/
    for(i=start, j=start; i<=end;i++,j++){
        *(arr+i) = *(arr_res+j);
    }
}

void merge_sort(int *arr, int *arr_res, int start, int end){
    int mid;
    if(start < end){
        mid = (start + end)/2;
        merge_sort(arr, arr_res, start, mid);
        merge_sort(arr, arr_res, mid+1, end);
        merge(arr, arr_res, start, mid, end);
    }
}

/*
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
*/
#ifndef __SORT_H__
#define __SORT_H__

#include <stdio.h>
#include <stdlib.h>

/*
 * @brief selection sort algo
 *
 * @params arr pointer to th array to be sorted
 * @params n   size of the array
 *
 * @return void, arr will point to the sorted array
 * */
void selection_sort(int *arr, int n);

/*
 * @brief ḃubble sort algo
 *
 * @params arr pointer to th array to be sorted
 * @params n   size of the array
 *
 * @return void, arr will point to the sorted array
 * */
void bubble_sort(int *arr, int n);

/*
 * @brief ınsertion sort algo
 *
 * @params arr pointer to th array to be sorted
 * @params n   size of the array
 *
 * @return void, arr will point to the sorted array
 * */
void insertion_sort(int *arr, int n);

/*
 * @brief quick  sort algo
 *
 * @params arr    pointer to th array to be sorted
 * @params start  start of the array index (0)
 * @params end    size of the array
 *
 * @return void, arr will point to the sorted array
 * */
void quick_sort(int *arr, int start, int end);

/*
 * @brief merge sort algo
 *
 * @params arr       pointer to th array to be sorted
 * @params arr_res   resultant array used to str=ore the sorted array
 * @params start     start index of the array to be sorted (0)
 * @params end       end index of the array to be sorted (n-1) where n is the size of the array
 *
 * @return void, arr will point to the sorted array
 * */
void merge_sort(int *arr, int *arr_res, int start, int end);

/*
 * @brief heap sort algo
 *
 * @params arr pointer to th array to be sorted
 * @params n   size of the array
 *
 * @return void, arr will point to the sorted array
 * */
void heap_sort(int *arr, int n);

/*
 * @brief selection sort algo
 *
 * @params arr pointer to th array to be sorted
 * @params n   size of the array
 *
 * @return void, arr will point to the sorted array
 * */
void print_arr(int *arr, int n);

#endif /*__SORT_H__*/

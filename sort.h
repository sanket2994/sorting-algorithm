#ifndef __SORT_H__
#define __SORT_H__

#include <stdio.h>
#include <stdlib.h>

void selection_sort(int *arr, int n);

void bubble_sort(int *arr, int n);

void insertion_sort(int *arr, int n);

void quick_sort(int *arr, int start, int end);

void print_arr(int *arr, int n);

#endif /*__SORT_H__*/
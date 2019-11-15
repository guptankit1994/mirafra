#ifndef sorting
#define sorting

#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int* a,int n,int* dummy);
char* compare(int*a,int* dummy,int n);
void swap(int *a,int* b);
void insertion_sort(int* a,int n,int* dummy);
void merge_sort(int* a,int n,int* dummy);
void m_sort(int a[],int temp[],int left,int right);
void merge (int a[],int temp[],int lpos,int rpos,int rend);
void selection_sort(int* a,int n,int* dummy);
void quick_sort(int* ,int,int* );
void q_sort(int*,int ,int);

#endif
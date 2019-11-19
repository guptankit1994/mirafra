#ifndef sorting
#define sorting

#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int* a,int n,FILE* fp_w);
char* compare();
void swap(int *a,int* b);
void insertion_sort(int* a,int n,FILE* fp_w);
void merge_sort(int* a,int n,FILE* fp_w);
void m_sort(int a[],int temp[],int left,int right);
void merge (int a[],int temp[],int lpos,int rpos,int rend);
void selection_sort(int* a,int n,FILE* fp_w);
void quick_sort(int* ,int,FILE* );
void q_sort(int*,int ,int);

#endif
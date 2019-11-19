#include"header.h"
void bubble_sort(int* a,int n,FILE* fp_w)
{
    int i,j;
    for(i = 1;i < n;i++)
    {  
     
        for(j = 0;j < n-i; j++)
        {
           if(a[j]>a[j+1])
                swap(&a[j],&a[j+1]);
        }
     

    }

    fprintf(fp_w,"%d\n",n);                       
     printf("Bubble Sorted Elements are\n");
    for(int i = 0;i < n; i++)
       { printf("%d\t",a[i]); 
        fprintf(fp_w,"%d\t",a[i]);         
         
       }
       fprintf(fp_w,"\n");
    printf("\n");
  
}

void swap(int *a,int* b)
{ 
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

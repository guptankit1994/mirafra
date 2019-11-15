#include"header.h"



void insertion_sort(int* a,int n,int* dummy)
{
    int i,j,p;
    for(i = 1;i < n;i++)
    {  
         p = a[i];
        for(j = i-1;j >= 0; j--)
        {
           
            if(a[j] > p)
                a[j+1] = a[j];
            else 
                break;
        }
        a[j+1] = p;

    }
     printf("insertion Sorted Elements are\n");
    for(int i = 0;i < n; i++)
       {    dummy[i] = a[i];
          printf("%d\t",dummy[i]);  
       }
}

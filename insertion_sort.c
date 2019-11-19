#include"header.h"



void insertion_sort(int* a,int n,FILE* fp_w)
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

    fprintf(fp_w,"%d\n",n);  
     printf("insertion Sorted Elements are\n");
    for(int i = 0;i < n; i++)
       {    
          printf("%d\t",a[i]);  
          fprintf(fp_w,"%d\t",a[i]);  
       }
    fprintf(fp_w,"\n");
   
}

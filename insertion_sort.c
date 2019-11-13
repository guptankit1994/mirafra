#include<stdio.h>
#include<stdlib.h>
void insertion_sort(int* a,int n);
int main(void)
{   
    int n;
    printf("Enter number of elements of an  array\n");
    scanf("%d",&n);
    int* a;
    a = (int*)malloc(sizeof(int)*n);
    printf("Enter elements of an  array\n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertion_sort(a,n);
    return 0;
}



void insertion_sort(int* a,int n)
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
    printf("Sorted Elements are\n");
    for(int i = 0;i < n; i++)
    printf("%d\t",a[i]);
    printf("\n");
}

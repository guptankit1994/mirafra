#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int* a,int n);
void swap(int *a,int* b);

int main(void)
{   
    int n;
    printf("Enter number of elements of an  aay\n");
    scanf("%d",&n);
    int* a;
    a = (int*)malloc(sizeof(int)*n);
    printf("Enter elements of an  aay\n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble_sort(a,n);
    return 0;
}



void bubble_sort(int* a,int n)
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
    printf("Sorted Elements are\n");
    for(int i = 0;i < n; i++)
    printf("%d\t",a[i]);
    printf("\n");
}

void swap(int *a,int* b)
{ 
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

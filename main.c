#include"header.h"

int main(void)
{   
    int n;
    printf("Enter number of elements of an  array\n");
    scanf("%d",&n);
    int* a,*dummy;
    a = (int*)malloc(sizeof(int)*n);
    dummy = (int*)malloc(sizeof(int)*n);
     
    printf("Enter elements of an  array\n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Which sorting tecnique you want\n ");
    printf("Enter\n1. for selection_sort\n2. for bubble_sort\n3. for insertion_sort\n4. for merge_sort\n5. for quick_sort\n9. for exit\n");
    int ch ;
        char* t;
 
    while(1)
    {
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    selection_sort(a,n,dummy);
                   t = compare(a,dummy,n);
                    printf("%s\n",t);

                    break;
            case 2:
                    bubble_sort(a,n,dummy);
                    t = compare(a,dummy,n);
                    printf("%s\n",t);
                    break;
            case 3:
                    insertion_sort(a,n,dummy);
                    t = compare(a,dummy,n);
                    printf("%s\n",t);
                    break;
            case 4:
                    merge_sort(a,n,dummy);
                    t = compare(a,dummy,n);
                    printf("%s\n",t);
                    break;
            case 5:
                    quick_sort(a,n,dummy);
                    t = compare(a,dummy,n);
                    printf("%s\n",t);
                    break;
            case 9:
                    exit(0);
                    break;
            default:
                    printf("please enter correct option\n");
        }
   
    }

   
    return 0;
}
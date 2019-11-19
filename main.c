/*Main star from here*/
#include"header.h"

int main(void)
{       
        int n,ch;                                               //creating a variable for storing size of array and choice of sorting
        int* a;                                           // craeting array
        FILE* fp,*fp_w;                                               //file pointer
        a = (int*)malloc(sizeof(int)*n);                        //Dynamic size creation
       
        fp_w = fopen("./output.txt","w+");
        char* t;
        printf("Enter number of elements of an  array\n");
        fp = fopen("./input.txt","r");                          //oening file in read mode
        if( fp!= NULL)
                printf("Error while reading\n");
label :                                                         // label
        fscanf(fp,"%d ",&n);                                    //Reading file for size
        printf(" n is %d\n",n);
        printf("taking  elements from file input.txt of an  array\n");
        for(int i = 0;i<n;i++)
        {
                fscanf(fp,"%d ",&a[i]);                         // Reading file for Array Elemeants
        }
       
 
    while(1)                                                    //infinite loop
    {
        if(fp == EOF)
                exit(0);
        printf("Which sorting tecnique you want\n ");
        printf("Enter\n1. for selection_sort\n2. for bubble_sort\n3. for insertion_sort\n4. for merge_sort\n5. for quick_sort\n7. To Check next input \n9. for exit\n");
   
        scanf("%d",&ch);
        switch(ch)                                              // Switch Start here
        {
            case 1:
                    selection_sort(a,n,fp_w);                  //selection_sort
                   t = compare();
                    printf("%s\n",t);

                    break;
            case 2:
                    bubble_sort(a,n,fp_w);                     // bubble_sort
                    t = compare();
                    printf("%s\n",t);
                    break;
            case 3:
                    insertion_sort(a,n,fp_w);                  // insertion_sort
                    t = compare();
                    printf("%s\n",t);
                    break;
            case 4:
                    merge_sort(a,n,fp_w);                      //merge_sort
                    t = compare();
                    printf("%s\n",t);
                    break;
            case 5:
                    quick_sort(a,n,fp_w);                      // quick_sort
                    t = compare();
                    printf("%s\n",t);
                    break;
            case 7:                                             // Checking for different input and switching to next input
                    printf("Switching to next input");
                    goto label;
                    break;
            case 9:
                    exit(0);                                    // Choice by user to kill program
                    break;
            default:
                    printf("please enter correct option\n");
        }
   
    }
fclose(fp);

   
    return 0;                                                   // End of program
}

#include"header.h"

char* compare(int*a,int* dummy,int n)
{
    for(int i = 0;i<n;i++)
    {
        if(a[i]!=dummy[i])
            return "false";

    }
    return "true";
}
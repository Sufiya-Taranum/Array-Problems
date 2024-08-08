#include <stdio.h>
#include "Array_programs_header.h"

#logic doesnt hold good for negetive numbers

void Set_Union_Array(int a[],int b[],int n,int m)
{
    int i=0,j=0,k=0;
    int c[n+m];
    while(i<n && j<m)
    {
            if(a[i]<=b[j])
            {
                c[k++]=a[i++];
            }
            else if(b[j]<=a[i])
            {
                c[k++]=b[j++];
            }
            else{
                c[k++]=a[i++];
                j++;
            }
        }
        while(i<n)
        {
            c[k++]=a[i++];
        }
         while(j<m)
        {
            c[k++]=b[j++];
        }
    printf("\n Union of two sets C is : \t");
    for(i=0;i<k;i++)
    {
        printf("%d, ",c[i]);
    }
}

void display_array(int a[],int b[],int n,int m)
{
    printf("Elements in set A:");
    for(int i=0;i<n;i++)
    {
        printf("%d ,",a[i]);
    }
    printf("Elements in set B:");
    printf("\n");
    for(int j=0;j<m;j++)
    {
        printf("%d ,",b[j]);
    }
}

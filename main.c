#include <stdio.h>
#include <assert.h>
#include "Array_programs_header.h"

int main()
{
    int n,m;
    printf("Enter size of 1st set A :");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in set A \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter size of 2nd set B :");
    scanf("%d",&m);
    int b[m];
    printf("Enter elements in set B \n");
    for(int j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    display_array(a,b,n,m);
    Set_Union_Array(a,b,n,m);
    return 0;
}

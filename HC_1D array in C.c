#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n,sum=0,i;
    scanf("%d",&n);
    
    int *a = (int*)malloc(sizeof(int)*n);
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }  
    printf("%d", sum);
    return 0;
}


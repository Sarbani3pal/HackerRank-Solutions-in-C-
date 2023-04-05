#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int count,i,j;
    char s[1024];
    scanf("%s",s);
    char cmp[]={'0','1','2','3','4','5','6','7','8','9'};
    for(i=0;i<10;i++)
    {
        count=0;
        for( j=0;j<strlen(s);j++)
        {
            if(s[j]==cmp[i])
            {
                count++;
            }
        }
        printf("%d\t",count);
    }
    
    return 0;
}


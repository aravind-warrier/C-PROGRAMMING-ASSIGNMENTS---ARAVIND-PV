#include <stdio.h>

int main()
{
    int i, wid1, wid2, min, hcf=1;

    
    printf("Enter  two numbers: ");//enter 36 and 24 here
    scanf("%d%d", &wid1, &wid2);

    
    min = (wid1<wid2) ? wid1 : wid2;

    for(i=1; i<=min; i++)
    {
        
        if(wid1%i==0 && wid2%i==0)
        {
            hcf = i;
        }
    
    }
    printf("answer is:%d",hcf);
}
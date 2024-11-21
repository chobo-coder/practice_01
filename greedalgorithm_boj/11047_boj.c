#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    int val;
    int coins[10];
    int coinn = 0;
    int temp;
    int temp1;
    scanf("%d %d",&n , &val);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&coins[i]);
    }
    for(int c=0;c<n;c++)
    {   
        if(coins[n-1-c]<=val)
        {
            
            printf("coin:%d\n",coins[n-1-c]);
            for(int j=0;j*coins[n-1-c]<=val;j++)
            {
                printf("%d\n",j);
                temp1 = j;
                temp =j*coins[n-1-c];
                if(val==0)
                {
                    printf("%d ",val);
                    break;
                }
                
            }
        val -= temp;
        coinn += temp1;
        }
    } 
    printf("%d",coinn);

}
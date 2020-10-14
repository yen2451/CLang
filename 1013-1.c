#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    int sum=0;
    scanf("%d",&num);
    for (int i = num; i >0; i--)
    {
        if ((i%5==0)||(i%7==0))
        {
            continue;
        }
        else
        {
            sum+=i;
        }
    }
    printf("%d",sum);
    
    
    return 0;
}

#include <stdio.h>
#include <math.h>
int main(){
    int i=1;
    /*while(i<=10)
    {
        
        i++;
    }*/
    for (int i = 1; i < 10; i++)
    {
        printf("%d\t%d\t%d\t%d\t\n", i, i * i, i * i * i, i * i * i * i);
        /* code */
    }
    
    
    return 0;

}
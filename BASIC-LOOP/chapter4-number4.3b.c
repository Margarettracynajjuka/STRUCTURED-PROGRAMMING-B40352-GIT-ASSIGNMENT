//najjukamargaretracynumber4
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1;

    while(x<=20){
             printf("%d\n",x);
        if(x%5==0){
            printf("\n");
        }
        else{
            printf("\t");
        }
        x++;
    }
    return 0;
}

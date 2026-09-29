//najjukamargarettracynumber6
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    for(int val=1;val<=5;val++){
    printf("Enter number %d(1-30):",val);
    scanf("%d",&number);

    if(number<1||number>30){
        printf("number must be between 1 and 30.\n");
        val--;
        continue;
    }
    for(int i=1;i<=number;i++){
        printf("%s","*");
    }
    printf("\n");
    }
    return 0;
}

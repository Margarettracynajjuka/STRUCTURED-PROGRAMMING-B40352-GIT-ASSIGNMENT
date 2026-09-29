//najjukamargarettracynumber7
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,is_prime,count=0;
    printf("prime numbers from 1 to 100\n");

    for (num=2;num<=100;num++){
       is_prime=1;
       for(i=2;i*i<=num;i++){
        if(num%i==0){
            is_prime=0;
            break;
        }
       }
       if (is_prime){
        printf("%d\n",num);
        count++;
       }
    }
    printf("\nTotal prime numbers found:%d\n",count);
    return 0;
}

//najjukamargarettracynumber5
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,value;
    float sum=0;

    printf("Enter the number of values:");
    scanf("%d",&n);

    printf("enter %d integers:",n);
    for(int i=1;i<=n;i++){
        scanf("%d",&value);
        sum= sum+value;
    }
    printf("\nSum:%.2f\n",sum);
    printf("Average: %.2f\n",sum/n);

    if(n<=0){
        printf("Input a positive number of values.\n");

   }

    return 0;
}

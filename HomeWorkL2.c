#include <stdio.h>

int main()
{
    int n;

    do{

    printf("Enter number: ");
    scanf("%d",&n);

    for (int i = 2; i < n;)
        if (n % i ++ == 0){
            printf("Number is not prime!");
            break;

        }else{
             printf("Number is prime!");
             break;
        }

    }while(n == 1 || n == 0);

    return 0;
}

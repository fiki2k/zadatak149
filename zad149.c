// Program treba zamjenit 2 broja koristeci pointere.

#include<stdio.h>
#include<stdlib.h.h>

int main()
{
    int br1,br2;
    int *a,*b,*temp;

    printf("Unesi prvi broj: ");
    scanf("%d",&br1);
    printf("\nUnesi drugi broj: ");
    scanf("%d",&br2);

    a=&br1;
    b=&br2;

    printf("\nPrije zamjene :\n\n\ta = %d\tb = %d\n",*a,*b);

    temp=a;
    a=b;
    b=temp;

    printf("\nNakon zamjene :\n\n\ta = %d\tb = %d\n",*a,*b);

    return 0;
}

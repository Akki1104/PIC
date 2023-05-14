#include <stdio.h>
#include <stdlib.h>
main()
{
    int *p, *table,size;
    printf("What is the size of table?\n Size: ");
    scanf("%d",&size);
    table = (int*)malloc(size *sizeof(int));
    printf("\nInput table values\n");
    for (p=table; p<table + size; p++)
         scanf("%d",p);
    printf("Entered Table Values Addresses are:\n");
    for (p = table + size -1; p >= table; p --)
       printf("%d is stored at address %p \n",*p,p);
}

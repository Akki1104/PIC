#include <stdio.h>
main()
{
    int *p,size,i;
    printf("What is the size of table?\n Size: ");
    scanf("%d",&size);
    printf("\nInput table values\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&p);
        p++;
    }
    printf("Entered Table Values Addresses are:\n");
    for(i=0;i<size;i++)
    {
       printf("%d is stored at address %u \n",*p,p);
       p--;
    }
}

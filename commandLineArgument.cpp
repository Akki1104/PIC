#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]) 
{
   char *str;
   int i;
   printf("%s\n",argv[0]);
   if(argc<2)
   {
       printf("Invalid Usage.\n");
       printf("Usage Example: Program.exe string_to_reverse");
       return 1;
   }
   for(i=1;i<argc;i++)
   {
      str = argv[i];
      strrev(str);
      printf("%s\n",str);
   }
   return 0;
}

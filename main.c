#include<stdio.h>
#include<string.h>
#include"enc.h"
void main()
{
    char input[30],filename[20],tech[20];
    int n,i,diff;
   printf("Welcome to Terminal:\n");
   printf("********************\n");

   while(1)
   {
      
        scanf("%s",input);
        if(strcmp(input,"enc")==0)
        {
            scanf("%s",filename);
             scanf("%d",&diff);
        
        encrypti(filename,diff);
            break;
        }
       else if(strcmp(input,"create")==0)
       {

          scanf("%s",filename);
    
           create(filename);
           break;
       }

       else if(strcmp(input,"dec")==0)
        {
           scanf("%s",filename);
            scanf("%d",&diff);

        decro(filename,diff);
            break;
        }

        else
        {
            printf("Command not found:%s\n",input);
        }

        
}
}
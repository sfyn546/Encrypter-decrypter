#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include"enc.h"
void main()
{
    FILE  * fPtr;
    char input[30],filename[20],tech[20],ch,logstr[100];
    int n,i,diff,r;
   printf("Welcome to Terminal:\n");
   printf("********************\n");
  
  

   while(1)
   {

       fPtr=fopen("log.txt","a");

        
      printf("\n>");
        scanf("%s",input);
        if(strcmp(input,"enc")==0)
        {
             
            scanf("%s",filename);

            scanf("%s",tech);
            scanf("%d",&diff);
            if(strcmp(tech,"cypher")==0)
            {
                
              encrypti(filename,diff);
              // logstr=str(filename)+"Encrypted By "+str(tech)"Technique"+"With a difference of "+str(diff);
               
              strcat(filename,"Encrypted by ");
              strcat(filename,tech);
              strcat(filename,"With a difference of ");
             // strcat(filename,myd);

                strcpy(logstr,filename);

            }
               
            else if(strcmp(tech,"cypherAd")==0)
            {
                 scanf("%d",&r);
                 cyphoAd(filename,diff,r);

                 strcat(filename,"Encrypted by ");
              strcat(filename,tech);
              strcat(filename,"With a difference of ");
                 // logstr=str(filename) + "Encrypted By "+str(tech)+ "Technique"+"With a difference of "+str(diff)+" and Reffect-"+str(r);
            }
         
             else
             {
                 printf("No such command:%s %s %d",input,tech,diff);
             }
 
      
            
        }


        else if(strcmp(input,"del")==0)
        {

            scanf("%s",filename);
             strcat(filename," Deleted\n");
           strcpy(logstr,filename);
           delete(filename);
          

        }
       else if(strcmp(input,"create")==0)
       {

          scanf("%s",filename);
    
           create(filename);

            strcat(filename," Created\n");
           strcpy(logstr,filename);
         
      
       }

       else if(strcmp(input,"dec")==0)
        {
             scanf("%s",filename);
            
            scanf("%s",tech);
            scanf("%d",&diff);
            if(strcmp(tech,"cypher")==0)
            {
                
              decro(filename,diff);
             //   logstr=str(filename)+"Decrypted By "+str(tech)+ "Technique";      
            }

            else if(strcmp(tech,"cypherAd")==0)
            {
                 scanf("%d",&r);
                decyphoAd(filename,diff,r);
                 // logstr=str(filename)+"Decrypted By "+str(tech)+ "Technique"+"With a difference of "+str(diff)+" and Reffect-"+str(r);
            }
         
             else
             {
                 printf("No such command:%s %s %d",input,tech,diff);
             }


        }

            else if(strcmp(input,"write")==0)
               {

                scanf("%s",filename);
    
                 writeInfile(filename);
      
              }

               else if(strcmp(input,"exit")==0||strcmp(input,"quit")==0)
               {
                   break;
               }

        else
        {
            printf("Command not found:%s\n",input);
        }




        fprintf(fPtr, "%s", logstr);
         fclose(fPtr);
  
}

 
}

#include <stdio.h>
#include <stdlib.h>
#define DATA_SIZE 100

int create(char filename[20])
{
    char *data;

   
    FILE * fPtr;

    fPtr = fopen(filename, "w");
    if(fPtr == NULL)
    {
       
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }

    fclose(fPtr);

    printf("File created and saved successfully. :) \n");
	return 0;

}
int encrypti(char fname[20],int dif)
{
	char ch;
	FILE *fpts, *fptt;
	
	printf("\n\n Encrypting your text file :\n");
	printf("--------------------------\n"); 	
	

	fpts=fopen(fname, "r");
	if(fpts==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		exit(1);
	}
	fptt=fopen("temp.txt", "w");
	if(fptt==NULL)
	{
		printf(" Error in creation of file temp.txt ..!!");
		fclose(fpts);
		exit(2);
	}
	while(1)
	{
		ch=fgetc(fpts);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			ch=ch+dif;
			fputc(ch, fptt);
		}
	}
	fclose(fpts);
	fclose(fptt);
	fpts=fopen(fname, "w");
	if(fpts==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		exit(3);
	}
	fptt=fopen("temp.txt", "r");
	if(fptt==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		fclose(fpts);
		exit(4);
	}
	while(1)
	{
		ch=fgetc(fptt);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			fputc(ch, fpts);
		}
	}
	printf(" File %s successfully encrypted ..!!\n\n", fname);
	fclose(fpts);
	fclose(fptt);
    remove("temp.txt");
	return 0;
}



int decro(char fname[20],int dif)
{
	char ch;
	FILE *fpts, *fptt;
	
	printf("\n\n Decrypting your text file :\n");
	printf("--------------------------\n"); 	
	
	
	fpts=fopen(fname, "r");
	if(fpts==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		exit(1);
	}
	fptt=fopen("temp2.txt", "w");
	if(fptt==NULL)
	{
		printf(" Error in creation of file temp2.txt ..!!");
		fclose(fpts);
		exit(2);
	}
	while(1)
	{
		ch=fgetc(fpts);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			ch=ch-dif;
			fputc(ch, fptt);
		}
	}
	fclose(fpts);
	fclose(fptt);
	fpts=fopen(fname, "w");
	if(fpts==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		exit(3);
	}
	fptt=fopen("temp2.txt", "r");
	if(fptt==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		fclose(fpts);
		exit(4);
	}
	while(1)
	{
		ch=fgetc(fptt);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			fputc(ch, fpts);
		}
	}
	printf(" File %s successfully decrypted ..!!\n\n", fname);
	fclose(fpts);
	fclose(fptt);
	return 0;
}

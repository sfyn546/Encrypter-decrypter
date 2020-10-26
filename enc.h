#include <stdio.h>
#include <stdlib.h>
#define DATA_SIZE 100

int create(char filename[20])
{
    FILE * fPtr;
	fPtr = fopen(filename, "w");
    if(fPtr == NULL)
        printf("Unable to create file.\n");
        
 

    fclose(fPtr);

    printf("File created and saved successfully. :) \n");
	return 0;

}
int encrypti(char fname[20],int dif)
{
	char ch;
	FILE *fpts, *fptt;
	
	

	fpts=fopen(fname, "r");
	if(fpts==NULL)
	{
		printf(" File does not exists or error in opening..!!");
			return 0;
	}
	printf("\n\n Encrypting your text file :\n");
	printf("--------------------------\n"); 	
	
	fptt=fopen("temp.txt", "w");
	if(fptt==NULL)
	{
		printf(" Error in creation of file temp.txt ..!!");
		fclose(fpts);
			return 0;
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
		return 0;
	}
	fptt=fopen("temp.txt", "r");
	if(fptt==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		fclose(fpts);
			return 0;
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
	
		
	
	
	fpts=fopen(fname, "r");
	if(fpts==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		return 0;
	}
	printf("\n\n Decrypting your text file :\n");
	printf("--------------------------\n"); 
	fptt=fopen("temp2.txt", "w");
	if(fptt==NULL)
	{
		printf(" Error in creation of file temp2.txt ..!!");
		fclose(fpts);
			return 0;
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
		return 0;
	}
	fptt=fopen("temp2.txt", "r");
	if(fptt==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		fclose(fpts);
		return 0;
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
		remove("temp2.txt");
	return 0;
}


int writeInfile(char filename[20])
{
   char sentence[1000];
   FILE *fptr;

   fptr = fopen(filename,"w");

   if(fptr == NULL)
   {
     create(filename);        
   }

  printf("Write here:\n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    return 0;
}




int cyphoAd(char fname[20],int dif,int r)
{
	char ch;
	FILE *fpts, *fptt;
	
	

	fpts=fopen(fname, "r");
	if(fpts==NULL)
	{
		printf(" File does not exists or error in opening..!!");
			return 0;
	}
	printf("\n\n Encrypting your text file :\n");
	printf("--------------------------\n"); 	
	
	fptt=fopen("temp.txt", "w");
	if(fptt==NULL)
	{
		printf(" Error in creation of file temp.txt ..!!");
		fclose(fpts);
			return 0;
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
		dif=dif+r;
	}
	fclose(fpts);
	fclose(fptt);
	fpts=fopen(fname, "w");
	if(fpts==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		return 0;
	}
	fptt=fopen("temp.txt", "r");
	if(fptt==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		fclose(fpts);
			return 0;
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





int decyphoAd(char fname[20],int dif,int r)
{
	char ch;
	FILE *fpts, *fptt;
	
	

	fpts=fopen(fname, "r");
	if(fpts==NULL)
	{
		printf(" File does not exists or error in opening..!!");
			return 0;
	}
	printf("\n\n Encrypting your text file :\n");
	printf("--------------------------\n"); 	
	
	fptt=fopen("temp.txt", "w");
	if(fptt==NULL)
	{
		printf(" Error in creation of file temp.txt ..!!");
		fclose(fpts);
			return 0;
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
		dif=dif-r;
	}
	fclose(fpts);
	fclose(fptt);
	fpts=fopen(fname, "w");
	if(fpts==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		return 0;
	}
	fptt=fopen("temp.txt", "r");
	if(fptt==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		fclose(fpts);
			return 0;
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

int delete(char fname[20])
{

	printf("File Deleted successfully:-)");
	remove(fname);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void caesarCipherEncryptor(char *message)
{
	int i;
		for(i=0; i<strlen(message); i++)
		{
			int temp=("%d", *(message+i)); //variable that contains ASCII number of message[i]
			if(temp==32)
			printf(" ");
			else if(temp==97)
			printf("x");
			else if(temp==98)
			printf("y");
			else if(temp==99)
			printf("z");
			else
			printf("%c", temp-3);
		}
}

void caesarCipherDecryptor(char *message)
{
	int i;
		for(i=0; i<strlen(message); i++)
		{
			int temp=("%d", *(message+i));
			if(temp==32)
			printf(" ");
			else if(temp>=120)
			temp=97;
			else
			printf("%c", temp+3);
		}
}

int main()
{
	int choice;
	int flag=1;
	int temp;
	int length=8;
	char *message= malloc(length * sizeof *message); //dynamic allocated array of char
	
	printf("Please insert message you want to encrypt or decrypt\n");
	gets(message);
	printf("\nPress 0 to encrypt or press 1 to decrypt\n");
	scanf("%d", &choice);
	if(flag==1);
	flag=0;
	if(flag==0);
	flag=0;

	if(flag)
	{
		while(1)
		{
			printf("\nPress 0 to encrypt or press 1 to decrypt\n");
			scanf("%d", &choice);
			if(choice==1)
			break;
			if(choice==0)
			break;
		}
	}
	
	if(choice==0) //encryption
	{
		caesarCipherEncryptor(message);
	}
	
	if(choice==1) //decryption
	{
		caesarCipherDecryptor(message);	
	}
	
	 
	return 0;
}

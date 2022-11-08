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
void atbashCipher(char *message)
{
	int i;
		for(i=0; i<strlen(message); i++)
		{
			int temp=("%d", *(message+i)); //variable that contains ASCII number of message[i]
			
			temp=("%d", *(message+i)); //variable that contains ASCII number of message[i]
			if(temp==32)
			printf(" ");
			else
			{
				temp=122-(temp-97);
				printf("%c", temp);
			}			
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
	printf("\nPress 0 to encrypt in Caesar Cipher \nPress 1 to decrypt in Caesar Cipher\nPress 2 to encrypt/decrypt in Atbash Cipher\n");
	scanf("%d", &choice);
	if(flag==1);
	flag=0;
	if(flag==0);
	flag=0;
	if(flag==2);
	flag=0;
	if(flag==3);
	flag=0;

	if(flag)
	{
		while(1)
		{
			printf("\nPress 0 to encrypt in Caesar Cipher \nPress 1 to decrypt in Caesar Cipher\nPress 2 to encrypt/decrypt in Atbash Cipher\n");
			scanf("%d", &choice);
			if(choice==1)
			break;
			if(choice==0)
			break;
			if(choice==2)
			break;
			if(choice==3)
			break;
		}
	}
	
	if(choice==0) //encryption of Caesar Cipher
	{
		caesarCipherEncryptor(message);
	}
	
	if(choice==1) //decryption of Caesar Cipher
	{
		caesarCipherDecryptor(message);	
	}
	if(choice==2) //atbash cypher, encryption&decryption
	{
		atbashCipher(message);
	}
	if(choice==3) //afine cipher encryptor + problem with x,y,z
	{
		int i;
		int a,b,f;
		scanf("%d",&a);
		scanf("%d",&b);
		for(i=0; i<strlen(message); i++)
		{
			temp=("%d", *(message+i)); //variable that contains ASCII number of message[i]
			if(temp==32)
			printf(" ");
			else
			{
			f=(a*(temp-96)+b)%26;
			temp=97+f-a;	
			printf("%c", temp);
				
			}
		}
	}

	
	free(message); 
	return 0;
}

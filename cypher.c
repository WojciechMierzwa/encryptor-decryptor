#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void affineCipherDecryptor(char *message)
{
	;
}

void affineCipherEncryptor(char *message)
{
		int i;
		int a,b,f;
		printf("Insert a:\n");
		scanf("%d",&a);
		printf("Insert b:\n");
		scanf("%d",&b);
		for(i=0; i<strlen(message); i++)
		{
			int temp=("%d", *(message+i)); //variable that contains ASCII number of message[i]
			if(temp==32)
			printf(" ");
			else
			{
			f=(a*(temp-97)+b)%26;
			temp=97+f;	
			printf("%c", temp);
				
			}
		}
	
}

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
	printf("Press 3 to enrcypt in Affine Cypher\nPress 4 to decrypt in Affine Cipher\n");
	scanf("%d", &choice);

	switch(choice)
	{
		case 0: 
			caesarCipherEncryptor(message);
			break;
		case 1:
			caesarCipherDecryptor(message);	
			break;
		case 2:
			atbashCipher(message);
			break;
		case 3: 
			affineCipherEncryptor(message);
			break;
		case 4:
			affineCipherDecryptor(message);
			break;
	}
	


	
	free(message); 
	return 0;
}

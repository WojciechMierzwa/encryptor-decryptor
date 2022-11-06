#include <stdio.h>

int main()
{
	int choice;
	int flag=1;
	int temp;
	char message[100];
	int length=8;
	//char *message= malloc(length * sizeof *message);
	
	printf("Please insert message you want to encrypt or decrypt\n");
	gets(message);
	//scanf("%[^\n]%*c", message);
	printf("\nPress 0 to encrypt or press 1 to decrypt\n");
	scanf("%d", &choice);
	if(flag==1);
	flag=0;
	if(flag==0);
	flag=0;
	if(flag==2);
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
			if(choice==2)
			break;
		}
	}
	
	if(choice==0) //encryption
	{
		int i;
		for(i=0; i<strlen(message); i++)
		{
			temp=("%d", message[i]); //variable that contains AS
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
	
	if(choice==1) //decryption
	{
		int i;
		for(i=0; i<strlen(message); i++)
		{
			temp=("%d", message[i]);
			//printf("%d", temp);
			if(temp==32)
			printf(" ");
			else if(temp>=120)
			temp=97;
			else
			printf("%c", temp+3);
		}
				
	}
	
	 
	return 0;
}

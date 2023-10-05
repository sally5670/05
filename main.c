#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   int number=59,count=0,a;
   do {
   	printf("Guess a number!");
   	scanf("%d", &a);
   	if(a>number)
   	{
		printf("high!\n");
   		count++;
	}
   		
   	else if(a<number)
   	{
		printf("low!\n");
   		count++;
	}
   		
   	else
   		{
		printf("congratulations!\n");
   		count++;
		printf("trials: %d",count);
		break;
		}
   	
   }while(1);
   
	system("PAUSE");
   return 0;
}

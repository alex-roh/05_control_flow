#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// 실습 1 
	
	int num = 0;
	
	printf("정수를 입력하세요: \n");
	scanf("%d", &num);
	
	if(num > 0)
	{
		printf("양수를 입력하셨습니다.\n");
	}
	else
	{
		printf("양수가 아닙니다.\n");
	}
	
	// 실습 2
	
	printf("다시 정수 하나를 입력하세요: \n");
	scanf("%d", &num);
	
	if(num < 0)
	{	
		printf("입력한 정수의 절대값은 %d입니다.\n", -num); 
	}
	else
	{
		printf("입력한 정수의 절대값은 %d입니다.\n", num); 
	}
	
	// 실습 3 
	
	printf("다시 정수 하나를 입력하세요: \n");
	scanf("%d", &num);
	
	if(num < 0)
	{	
		printf("입력한 정수는 음수입니다.\n"); 
	}
	else if(num > 0)
	{
		printf("입력한 정수는 양수입니다.\n"); 
	}
	else if(num == 0)
	{
		printf("입력한 정수는 0입니다.\n");
	}
	
	return 0;
	
}

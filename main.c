#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
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
	
	printf("사용자 입력값: %d\n", num);
	
	return 0;
	
}

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
	
	// 실습 4 
	
	int i = 0;
	int meter = 0;
	
	while(i < 3)
	{
		
		meter = i * 1609;
		printf("%d 마일은 %d 미터입니다.\n", i, meter);
		i++;
	
	}
	
	// 실습 5
	for(i = 0; i < 10; i++)
		printf("Hello World!\n"); 
		
	
	// 실습 6
	num = 0;
	char c;
	getchar(); // 버퍼 비우기 
	
	printf("문자열을 입력하세요: ");
	
	while((c = getchar()) != '\n')
	{
		if (c <= '9' && c >= '0')
		{
			num++;
		}
	}
	
	printf("문자열에 있는 문자의 개수는 %d개입니다.\n", num);
	
	// 실습 7 
	int correct_num = 45;
	int trial = 0;
	
	while(1)
	{
		trial++;
		num = 0;
		printf("수를 추측해서 입력하세요: ");
		scanf("%d", &num);
		if(num == correct_num){
			printf("정답을 맞추셨습니다! 시도 횟수는 %d번입니다.\n", trial);
			break;
		}
		else if (num > correct_num)
		{
			printf("더 낮은 수를 입력하세요.\n");
		}
		else if(num < correct_num)
		{
			printf("더 높은 수를 입력하세요.\n");
		}
	}
	
	return 0;
}

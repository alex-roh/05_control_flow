#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// �ǽ� 1 
	
	int num = 0;
	
	printf("������ �Է��ϼ���: \n");
	scanf("%d", &num);
	
	if(num > 0)
	{
		printf("����� �Է��ϼ̽��ϴ�.\n");
	}
	else
	{
		printf("����� �ƴմϴ�.\n");
	}
	
	// �ǽ� 2
	
	printf("�ٽ� ���� �ϳ��� �Է��ϼ���: \n");
	scanf("%d", &num);
	
	if(num < 0)
	{	
		printf("�Է��� ������ ���밪�� %d�Դϴ�.\n", -num); 
	}
	else
	{
		printf("�Է��� ������ ���밪�� %d�Դϴ�.\n", num); 
	}
	
	// �ǽ� 3 
	
	printf("�ٽ� ���� �ϳ��� �Է��ϼ���: \n");
	scanf("%d", &num);
	
	if(num < 0)
	{	
		printf("�Է��� ������ �����Դϴ�.\n"); 
	}
	else if(num > 0)
	{
		printf("�Է��� ������ ����Դϴ�.\n"); 
	}
	else if(num == 0)
	{
		printf("�Է��� ������ 0�Դϴ�.\n");
	}
	
	// �ǽ� 4 
	
	int i = 0;
	int meter = 0;
	
	while(i < 3)
	{
		
		meter = i * 1609;
		printf("%d ������ %d �����Դϴ�.\n", i, meter);
		i++;
	
	}
	
	// �ǽ� 5
	for(i = 0; i < 10; i++)
		printf("Hello World!\n"); 
		
	
	// �ǽ� 6
	num = 0;
	char c;
	getchar(); // ���� ���� 
	
	printf("���ڿ��� �Է��ϼ���: ");
	
	while((c = getchar()) != '\n')
	{
		if (c <= '9' && c >= '0')
		{
			num++;
		}
	}
	
	printf("���ڿ��� �ִ� ������ ������ %d���Դϴ�.\n", num);
	
	// �ǽ� 7 
	int correct_num = 45;
	int trial = 0;
	
	while(1)
	{
		trial++;
		num = 0;
		printf("���� �����ؼ� �Է��ϼ���: ");
		scanf("%d", &num);
		if(num == correct_num){
			printf("������ ���߼̽��ϴ�! �õ� Ƚ���� %d���Դϴ�.\n", trial);
			break;
		}
		else if (num > correct_num)
		{
			printf("�� ���� ���� �Է��ϼ���.\n");
		}
		else if(num < correct_num)
		{
			printf("�� ���� ���� �Է��ϼ���.\n");
		}
	}
	
	return 0;
}

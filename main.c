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
		printf("�Է��� ������ ���밪�� %d�Դϴ�.", -num); 
	}
	else
	{
		printf("�Է��� ������ ���밪�� %d�Դϴ�.", num); 
	}
	
	return 0;
	
}

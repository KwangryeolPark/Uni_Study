/*

	* ���� �̸�	: Project_03
	* ����		: �ʱ� x, y ���� ������ �� �� ���� 
					�ٲٴ� ���α׷� 
	* �ۼ���	: �ڱ��� 
	* ���� �ð�	: 2019.04.03		11.45
	* ���� �ð� : 

*/










#include <stdio.h>

int main(void) {
	
	int x = 10,	//x ���� ���� �� 10���� �ʱ�ȭ 
		y = 20,	//y ���� ���� �� 20���� �ʱ�ȭ 
		temp = 0;	//���� x�� ���� �ӽ÷� ������ ���� ���� �� 0���� �ʱ�ȭ 

	printf("x = %d y = %d\n", x, y);	//�ʱ� �� ��� 
	
	temp = x;	//temp�� x�� ���� 
	x = y;		//x�� y�� ���� 
	y = temp;	//y�� temp�� ���� 
	
	printf("x = %d y = %d", x, y);	//�ٲ� �� ��� 
	
	
	
	return 0;	
};






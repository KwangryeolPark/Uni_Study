/*

	* ���� �̸�	: Ex_02
	* ����		: �¾�� ���� �ð� ��� ���α׷� ver 1.2
	* �ۼ���	: �ڱ��� 
	* ���� �ð�	: 2019.04.03		12.29
	* ���� �ð� : 

*/







#include <stdio.h>


int main(void) {
	
	const double Light_Speed = 3.0e5;		//���� �ӵ� ���� ������ ��  ���� ���·� �ʱ�ȭ�մϴ�. 	���� �ӵ��� �Һ� �������� const intŰ���带 ����Ͽ� ������ ����� ����մϴ�. 
	double Distance = 1.496e8;	//�Ÿ� ���� ������ �� ���� ���·� �ʱ�ȭ�մϴ�. 	double
	
	double time;	//���� �ð� ���� ������ ������ �����մϴ�. 	double
	time = Distance / Light_Speed;	//�ð� ���� ����մϴ�. 
	
	int minute = time / 60;	//�ð� �� �� �� ���� ��� 
	double second = time - 60 * minute;	//�ð� �� �� �� ���� ��� 
		
	printf("���� �ӵ��� %lfkm/s \n", Light_Speed);	//���� �ӵ� ���� ����մϴ�. 
	printf("�¾�� �������� �Ÿ� %lfkm \n\n\n", Distance);	//�Ÿ� ���� ����մϴ�. 
	printf("���� ���� �ð��� %lf���̰� �̴� %d�� %lf���Դϴ�.\n", time, minute, second);	//�ð� ��, ��, �� ���� ����մϴ�. 
	
	return 0;	
};







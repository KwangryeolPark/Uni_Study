/*

	* ���� �̸�	: Project_07
	* ����		: ����, �ӵ� ���� �޾� �� �� � ������ ����ϴ� ���α׷� 
	* �ۼ���	: �ڱ��� 
	* ���� �ð�	: 2019.04.03		12.02
	* ���� �ð� : 

*/







#include <stdio.h>


int main(void) {
	
	double	weight,	//���� ���� ���� double 
			speed,	//�ӵ� ���� ���� double 
			Ek;		//���� ��������� ������ ���� ���� double 
	
	printf("����(kg): ");	//�ȳ� ���� ��� 
	scanf("%lf", &weight);	//���� �� long float������ �޾� ���� 
	
	printf("�ӵ�(m/s): ");	//�ȳ� ���� ��� 
	scanf("%lf", &speed);	//�ӵ� �� long float������ �޾� ���� 
	
	printf("�������(J): %lf", 0.5*weight*speed*speed);	//��� �� ��� 
	
	
	
	return 0;	
};







/*

	* 파일 이름	: Project_07
	* 설명		: 무게, 속도 값을 받아 온 후 운동 에너지 계산하는 프로그램 
	* 작성자	: 박광렬 
	* 제작 시각	: 2019.04.03		12.02
	* 수정 시각 : 

*/







#include <stdio.h>


int main(void) {
	
	double	weight,	//무게 변수 선언 double 
			speed,	//속도 변수 선언 double 
			Ek;		//계산된 운동에너지를 저장할 변수 선언 double 
	
	printf("질량(kg): ");	//안내 문구 출력 
	scanf("%lf", &weight);	//무게 값 long float형으로 받아 오기 
	
	printf("속도(m/s): ");	//안내 문구 출력 
	scanf("%lf", &speed);	//속도 값 long float형으로 받아 오기 
	
	printf("운동에너지(J): %lf", 0.5*weight*speed*speed);	//결과 값 출력 
	
	
	
	return 0;	
};







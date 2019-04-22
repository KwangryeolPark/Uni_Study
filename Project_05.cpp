/*

	* 파일 이름	: Project_05
	* 설명		: 기호 상수를 정의하여 평을 제곱 미터로 환산하는 프로그램 
	* 작성자	: 박광렬 
	* 제작 시각	: 
	* 수정 시각 : 

*/




//1평은 3.3m^2 





#include <stdio.h>
#define Value	3.3058	//평 to 미터 제곱 기호 상수 정의 


int main(void) {
	
	double	d;	//평 값을 받아 올 double형 변수 선언 
	
	printf("평을 입력하시오 : ");	//안내 문구 출력 
	scanf("%lf", &d);				//long float형 값을 받아 온다. 
	
	printf("%lf평방 미터입니다.", d * Value); 	//결과 값을 출력한다. 
	
	
	
	
	return 0;	
};







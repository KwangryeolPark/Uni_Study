/*

	* 파일 이름	: Project_03
	* 설명		: 초기 x, y 값을 선언한 후 두 값을 
					바꾸는 프로그램 
	* 작성자	: 박광렬 
	* 제작 시각	: 2019.04.03		11.45
	* 수정 시각 : 

*/










#include <stdio.h>

int main(void) {
	
	int x = 10,	//x 변수 선언 후 10으로 초기화 
		y = 20,	//y 변수 선언 후 20으로 초기화 
		temp = 0;	//변수 x의 값을 임시로 저장할 변수 선언 후 0으로 초기화 

	printf("x = %d y = %d\n", x, y);	//초기 값 출력 
	
	temp = x;	//temp에 x값 대입 
	x = y;		//x에 y값 대입 
	y = temp;	//y에 temp값 대입 
	
	printf("x = %d y = %d", x, y);	//바뀐 값 출력 
	
	
	
	return 0;	
};







/*

	* 파일 이름	: Project_04
	* 설명		: 길이, 너비, 높이 값을 받아 온 후 부피를 계산한다. 
	* 작성자	: 박광렬 
	* 제작 시각	: 2019.04.03		11.50
	* 수정 시각 : 

*/










#include <stdio.h>

int main(void) {
	
	
	double	length,	//길이 값을 받아 올 double형 변수 선언 
			width,	//너비 값을 받아 올 double형 변수 선언 
			height,	//높이 값을 받아 올 double형 변수 선언 
			v;	//계산된 부피 값을 저장할 double 변수 선언 
	
	printf("상자의 가로 세로 높이를 한 번에 입력하세요 : ");	//안내 문구 출력 
	scanf("%lf%lf%lf", &length, &width, &height);	//사용자로부터 long float형 값 3개를 받아 온다. 
	
	
	v = length * width * height;	//부피 값 계산 
	
	printf("상자의 부피는 %lf입니다.", v); 	//결과 값을 출력한다. 
	
	return 0;	
};







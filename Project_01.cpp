/*

	* 파일 이름	: Project_01
	* 설명		: 
	* 작성자	: 박광렬 
	* 제작 시각	: 
	* 수정 시각 : 

*/








//13개 

#include <stdio.h>	// 표준 입출력 함수가 들어 있는 헤더 파일을 불러 옵니다. 


int main(void) {	// 
	
	double num;		//실수 값이 저장될 double 형 변수를 선언합니다. 
	printf("실수를 입력하시오 : "); 	//안내 문구 출력 
	scanf("%lf", &num);					//사용자로부터 double형 실수를 받아 옵니다. 
	printf("실수 형식으로는 %lf입니다.\n", num);	//long float형태로 받아 온 값을 출력합니다. 
	printf("지수형식으로는 %e입니다.", num); 		//e의 지수 형태로 받아 온 값을 출력합니다. 
	
	return 0;	
};







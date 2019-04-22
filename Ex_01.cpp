/*

	* 파일 이름	: Ex_01 
	* 설명		: 태양빛 도달 시간 계산 프로그램 ver 1.1
	* 작성자	: 박광렬 
	* 제작 시각	: 2019.04.03		12.24
	* 수정 시각 : 

*/







#include <stdio.h>


int main(void) {
	
	const double Light_Speed = 3.0e5;		//빛의 속도 값을 선언한 후  지수 형태로 초기화합니다. 	빛의 속도는 불변 값임으로 const int키워드를 사용하여 정수형 상수로 취급합니다. 
	double Distance = 149.6e6;	//거리 값을 선언한 후 지수 형태로 초기화합니다. 	double
	
	double time;	//계산된 시간 값을 저장할 변수를 선언합니다. 	double
	time = Distance / Light_Speed;	//시간 값을 계산합니다. 
	
	
	printf("빛의 속도는 %lfkm/s \n", Light_Speed);	//빛의 속도 값을 출력합니다. 
	printf("태양과 지구와의 거리 %lfkm \n", Distance);	//거리 값을 출력합니다. 
	printf("도달 시간은 %lf초입니다.\n", time);		//시간 값을 출력합니다. 
	return 0;	
};







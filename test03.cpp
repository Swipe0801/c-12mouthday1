#include<iostream>

int main(void) {

	//나이를 입력하고 출발하는 프로그램 작성
	int age;
	std::cout << "나이를 입력하시오";
	//scanf_s("%d <&age");//c언어에서의 입력 
	std::cin >> age;
	//std::cin >> 입력대상 >> 입력대상....;

	//cin - 표준 입력 객체

	// >> (우측쉬프트연산자)
	// - cin 객체 에서는 입력대상을 구부짓는 연산자....

	std::cout << "나이  : " << age << std::endl;
	
	return 0;
}
//hello world!!!
//#include<stdio.h>//언어에서 사용되는 표준입출력헤더파일
#include<iostream>//cpp에서의 표준입출력헤더파일
//stdio.h + stdlib.h + string.h
//입출력 + 동적할당 + 문자열

int main(void) {
	//C언어에서의 출력
	//printf("hello world!\n");

	//CPP에서의 출력
	// - std::cout << 출력대상 << 출력대상.....;
	std::cout << "Hello CPP!!!\n";

	// :: (범위정연산자,스코프연산자)
	// - 자측 공간,영역에서 우측의 공간을 우선적으로 검색하여 호출하는 연산자

	//std - standard namespace
	//cout - 표준 출력 객체

	// << (자측쉬프트연산자)
	// - CPP에서는 연산자에 새로운 기능을 추가시킬수 있다... - 연산자오버로딩
	// - cout객체 옆에 사용되면 출력대상을 구분짓는 연산자로 사용된다..

	int a = 10;
	//printf("a = %d\n", a);
	std::cout << "a =" << a << "\n";
	std::cout << "a =" << a << std::endl;//end line - cpp에서 \n과 같은 역할을 수행한다.
	//CPP에서는 출력대상의 데이터 타입을 자동으로 검색하여 출력한다.
	//CPP에서는 서식문자를 잘 사용하지 않는다...

	double b = 123.456777777;
	std::cout << "b =" << b << std::endl;
	

	return 0;
}
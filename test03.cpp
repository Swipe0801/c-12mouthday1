#include<iostream>

int main(void) {

	//���̸� �Է��ϰ� ����ϴ� ���α׷� �ۼ�
	int age;
	std::cout << "���̸� �Է��Ͻÿ�";
	//scanf_s("%d <&age");//c������ �Է� 
	std::cin >> age;
	//std::cin >> �Է´�� >> �Է´��....;

	//cin - ǥ�� �Է� ��ü

	// >> (��������Ʈ������)
	// - cin ��ü ������ �Է´���� �������� ������....

	std::cout << "����  : " << age << std::endl;
	
	return 0;
}
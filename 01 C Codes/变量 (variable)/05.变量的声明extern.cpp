# include "stdio.h"

// �����ⶨ����� x �� y
int x, y;

int add_num(){
	// �������������� x �� y Ϊ�ⲿ����
	extern int x;
	extern int y;
	
	// ���ⲿ������ȫ�ֱ�����x �� y ��ֵ
	x = 1;
	y = 2;
	
	return x + y; 
} 

int main() {
	int result;
	
	result = add_num();
	
	printf("result = %d", result);
	
	return 0;
}

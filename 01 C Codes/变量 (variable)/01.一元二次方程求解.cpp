#include "stdio.h"
#include "math.h"


// ���һԪ���η��� 
int main(){
	// a, b, c ��ʾһԪ���η��̵�ϵ�� 
	int a = 1;
	int b = 3;
	int c = 1;
	
	printf("a = %d, b = %d, c = %d \n", a, b, c);
	
	float delta;
	delta = b * b - 4 * a * c;
	
	float x1, x2;
	
	if (delta > 0){
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("�����⣺x1 = %f, x2 = %f \n", x1, x2);
	} 
	else if (delta = 0){
		x1 = (-b) / (2 * a);
		x2 = x1;
		printf("Ψһ�⣺x1 = x2 = %f", x1);
	}
	else {
		printf("�޽⣡");
	} 
}


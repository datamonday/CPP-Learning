# include "stdio.h"

int max_of_three(int a, int b, int c); 

int main() {
	int x, y, z, result;
	
	printf("�������������֣��Կո�ָ�����\n");
	scanf("%d%d%d", &x, &y, &z);
	
	result = max_of_three(x, y, z);
	printf("���ֵΪ��%d \n", result);
	
	return 0;
} 


int max_of_three(int a, int b, int c) {
	int max = a;
	
	if (b > max) {
		max = b;
		if (c > max) {
			max = c;
		}
	}
	else {
		if (c > max) {
			max = c;
		}
	}
	return max;
}

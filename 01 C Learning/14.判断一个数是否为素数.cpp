# include "stdio.h"
# include "math.h"

int is_prime(int x);

int main() {
	int x;
	
	printf("������Ҫ�жϵ�����\n");
	scanf("%d", &x);
	is_prime(x);
}

int is_prime(int x) {
	int sqrt_x; 
	int i; // ѭ������ 
	
	if (x <= 1) {
		return 0;
	}
	else if (x == 2) {
		return 1;
	}
	else {
		// sqrt()�Ĳ���Ϊ double ���ͣ�����Ҫǿ��ת��m������
		sqrt_x = (int)sqrt((double)x);
		
		printf("sqrt_x = %d\n", sqrt_x);
		
		for (i=2; i<=sqrt_x; i++) {
			printf("i = %d \n", i);
			if (x % i == 0) {
				break;
			} 
		} 
		// ������ѭ����Ϊ����
		// ���һ��ѭ������ִ�� i++, ��ʱ i = k+1, ���� i>k 
		if (i > sqrt_x) {
			printf("%d ��������\n", x);
		} 
		else {
			printf("%d ����������", x);
		}
	}
} 

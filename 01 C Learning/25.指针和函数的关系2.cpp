#include <stdio.h>


int func(int x, int y){
    return x + y;
} 

int main(){
	int (*pfunc) (int, int);
	
	pfunc = func;
	// pfunc = &func;
	// &func �� func ��ֵ�����Ͷ�һ�������߾��� 
	
	/* ���¼��ֵ��÷�ʽ�Ľ������ͬ*/ 
	// ͨ�� ����ָ�� ���ú��� 
	int a = (*pfunc) (5, 7);	
	int b = pfunc(5, 7);
	int c = (&func) (5, 7);
	int d = (*func) (5, 7);
	int e = func(5, 7);
	
	printf("results of different ways: %d, %d, %d, %d, %d", a, b, c, d, e);
	
	return 0;
}

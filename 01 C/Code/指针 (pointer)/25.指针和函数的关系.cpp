#include <stdio.h>
#include <stdlib.h>

void test( ){
    printf(" func test called!\n");
}

int max_of_three(int x, int y, int z){
	int max;
	
	max = z;
	
	if (x > y){
		max = x;
	}
	else{
		if (y > z){
			max = y;
		}
	}
	return max;
} 

int main() {
    /* ---------------------------����1-------------------------*/
    void (*f) ();
    f = test;
    
    f ();    // �������÷�ʽ 1
    (*f)();  // �������÷�ʽ 2
    
    printf("  test = %p\n",  test);
    printf(" &test = %p\n", &test);
    printf(" *test = %p\n", *test);
	
	printf("-------------------------------\n");
    /* ---------------------------����2-------------------------*/
	// ����һ������ָ��
	int (*p)(int, int, int);
	int a, b, c, result;
	
	// �Ѻ���max_of_three��ֵ������p, ʹpָ����
	p = max_of_three;
	
	// �Ƿ������� 
	// max_of_three ++;   // ��ֹ��ָ������ָ������������� 
	// max_of_three += 1; // ���ܶԺ�������ֵ��������Ҳ���ܽ����������� 
	// p ++;
	// p += 1;
	
	printf("please enter three variable:");
	scanf("%d %d %d", &a, &b, &c);
	printf("you entered: a = %d, b = %d, c = %d\n", a, b, c);
	result = (*p)(a, b, c);
	printf("the maximum is: %d\n", result);
	
	system("pause");
	
	return 0;
}

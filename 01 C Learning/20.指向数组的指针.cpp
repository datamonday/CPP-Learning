# include "stdio.h"

int main(){
	double balance[5] = {450, 85, 90, 140, 135};
	double *p;
	int i;
	
	// ����balance�ĵ�һ��Ԫ�صĵ�ַ ��������p 
	p = balance;
	
	for (i=0; i < 5; ++i){
		printf("* (p + %d) : %.10lf\n", i, *(p + i));
	} 
	printf( "ʹ�� balance ��Ϊ��ַ������ֵ\n");
	for ( i = 0; i < 5; i++ ){
		printf("*(balance + %d) : %f\n",  i, *(balance + i) );
	}
	return 0;
} 

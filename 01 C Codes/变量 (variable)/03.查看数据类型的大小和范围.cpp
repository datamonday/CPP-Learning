#include "stdio.h"
#include "limits.h"  // sizeof �������ڵĿ�
#include "float.h"

int main() {
	printf("char  ���͵Ĵ洢��С��%lu �ֽ�(Byte)\n", sizeof(char));
	printf("int   ���͵Ĵ洢��С��%lu �ֽ�(Byte)\n", sizeof(int));
	printf("short ���͵Ĵ洢��С��%lu �ֽ�(Byte)\n", sizeof(short));
	printf("long  ���͵Ĵ洢��С��%lu �ֽ�(Byte)\n", sizeof(long));
	printf("-----------------------------------\n");
	
	printf("float  ���͵Ĵ洢��С��%lu �ֽ�(Byte)\n", sizeof(float));
	printf("double ���͵Ĵ洢��С��%lu �ֽ�(Byte)\n", sizeof(double));
	printf("-----------------------------------\n");
	
	// %E Ϊ��ָ����ʽ�������˫����ʵ��
	printf("float  ���ʹ洢������ֽ�����%lu �ֽ�\n", sizeof(float));
	printf("float  ���͵���Сֵ��%E \n", FLT_MIN);
	printf("float  ���͵���Сֵ��%E \n", FLT_MAX);
	printf("����ֵ��%d \n", FLT_DIG);
}




# include "stdio.h"

int main() {
	// �������ֱ�ʾ��ʽ�ȼ�
	char ch1 = '\101'; 
	char ch2 = 0101; 
	
	printf("�ַ� '\101' = %c \n",  ch1);
	printf("�ַ� 0101 = %c \n",  ch2);
	
	char x1 = '\61';   // �ַ� 1
	char x2 = '\141';  // �ַ� a 
	
	char x3 = '\x31';  // �ַ� 1
	char x4 = '\x61';  // �ַ� a
	
//	char *str1 = "hello world";
//	char *str2 = "\x31 \x32 \x33";  // �ַ���123 
	char str1[] = "hello world";
	char str2[] = "\x31 \x32 \x33";  // �ַ���123 
	
	// ���ð˽��ƺ�ʮ������ת���ַ�
//	char *str3 = "\61 \62 \63";  // �ַ���123
	char str3[] = "\61 \62 \63";
	
	printf("�ַ� '\61' = %c \n",  x1);
	printf("�ַ� '\141' = %c \n", x2);
	printf("�ַ� '\x31' = %c \n", x3);
	printf("�ַ� '\x61' = %c \n", x4);
	
	printf("�ַ��� str1 = %s \n", str1);
	printf("�ַ��� str2 = %s \n", str2);
}

# include "stdio.h"

int main(){
	/* ʵ�ʱ���������
	   ��ʱ VAR �����洢��ĳ����ַ���õ�ַ��Ӧĳ���ڴ浥Ԫ�������Ԫ�д洢������10 
	*/ 
	int var = 10;
	
	/* ָ�����������
	   ����һ��ָ�룬��һ���ڴ浥Ԫ�ĵ�ַ���� 
	*/
	int *ip;
	
	/* ��ָ������д洢 var �ĵ�ַ
	   ����ַ��ֵ ��ֵ��ָ����� var 
	*/ 
	ip = &var;
	
	/* ��ָ������д洢�ĵ�ַ
	   &var ����� var �������洢�����ݵ��ڴ浥Ԫ�ĵ�ַ 
	*/
	printf("Address of var variable: %p\n", &var);
	
	/* ip ��ʾ��ֵ�����ĵ�ַ��ֵ */ 
	printf("Address stored in ip variable: %p\n", ip);
	
	/* ʹ��ָ�����ֵ 
	   *ip ��ʾ�����ڴ浥Ԫ���ڴ浥Ԫ�����洢�����ݵ�ֵ�������м�Ϊ 10  
	*/ 
	printf("Value of *ip variable: %d\n", *ip);
	
	return 0;
} 

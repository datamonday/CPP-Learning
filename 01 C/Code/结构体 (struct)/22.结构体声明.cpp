# include "stdio.h"

//������������ӵ��3����Ա�Ľṹ�壬�ֱ�Ϊ���͵�a���ַ��͵�b��˫���ȵ�c
//ͬʱ�������˽ṹ�����s1
//����ṹ�岢û�б������ǩ
struct 
{
    int a;
    char b;
    double c;
}s1;
 
//������������ӵ��3����Ա�Ľṹ�壬�ֱ�Ϊ���͵�a���ַ��͵�b��˫���ȵ�c
//�ṹ��ı�ǩ������ΪSIMPLE,û����������
struct SIMPLE
{
    int a;
    char b;
    double c;
};
//��SIMPLE��ǩ�Ľṹ�壬���������˱���t1��t2��t3
struct SIMPLE t1, t2[20], *t3;
 
//Ҳ������typedef����������
typedef struct
{
    int a;
    char b;
    double c; 
} Simple2;
//���ڿ�����Simple2��Ϊ���������µĽṹ�����
Simple2 u1, u2[20], *u3;

int main() {
	return 0;
} 

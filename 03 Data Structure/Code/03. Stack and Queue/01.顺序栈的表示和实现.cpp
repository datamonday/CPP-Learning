#include<stdio.h>
#include<stdlib.h> 

#define MAXSIZE 100
#define OK 1
#define ERROR 0


typedef struct{
	SElemType *base; // ջ��ָ��
	SElemType *top;  // ջ��ָ��
	int stacksize;   // ջ����������� 
}SqStack;



// ˳��ջ�ĳ�ʼ�� 
void InitStackSq(sqStack *S){
	S.base = (SElemType*) malloc(MAXSIZE * sizeof(SElemType));
	
	if (!S.base) exit (OVERFLOW);
	
	S.top = S.base;
	S.stacksize = MAXSIZE;
	
	return OK;
} 

// ��˳��ջ�ĳ���
int StackLength(SqStack S){
	return S.stop - S.base;
} 

// ���˳��ջ
int ClearStack(SqStack S){
	if (S.base) S.top = S.base;
	return OK;
} 




# include <stdio.h>
# include <stdlib.h>
# define InitSize 50	// �����ʼ��������(��sizeof(ElemType)Ϊ��λ)

typedef struct{
	int id;
	//char *name;
}ElemType;

typedef struct{
	ElemType *elem;  // �洢�ռ����ַ
	int length;		 // ��ǰ����(����)
    int MaxSize;     //�������
}SeqList; 


int main(){
	SeqList L;
	L.elem = (ElemType*)malloc(InitSize * sizeof(ElemType));
	L.elem -> id = 10;
	L.length = 2;
	
	printf("L.length  = %d\n", L.length);
	printf("L.elem[0] = %d\n", L.elem[0]);
	
	return 0;
}

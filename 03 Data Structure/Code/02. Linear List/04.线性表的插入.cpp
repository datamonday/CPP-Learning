# include <stdio.h>
# include <stdlib.h>
# define InitSize 50   // �����ʼ��������(��sizeof(ElemType)Ϊ��λ)

# define ERROR -1
# define OK     1

typedef int Status;	   // ������� 
typedef int ElemType;  // ������� 

typedef struct{
	ElemType *elem;  // �洢�ռ����ַ
	int length;		 // ��ǰ����(����)
    int MaxSize;     //�������
}SeqList; 


Status ListInsert(SeqList &L, int i, ElemType e) {
	int j;
	// ���벻�Ϸ� 
	if (i < 1 || i > L.length + 1) 
	{
		return ERROR;
	}
	// ��ǰ�洢�ռ����� 
	else if (L.length == L.MaxSize)
	{
		return ERROR;
	}
	else 
	{
		// �����һ��Ԫ��һֱ���� i ��λ���ϵ�Ԫ����������ƶ� 
		for (j = L.length-1; j >= i-1; --j) 
		{
			L.elem[j + 1] = L.elem[j];
		}
		// ����Ԫ�ط���� i ��λ��  
		L.elem[i - 1] = e;
		// ������1 
		L.length ++;
	} 
	return OK;
} 


int main(){
	SeqList L;
	L.elem = (ElemType*)malloc(InitSize * sizeof(ElemType));
	L.elem[0] = 10;
	L.elem[1] = 20;
	L.length = 2;
	
	int pos;
	
	// ����Ԫ�� 30
	ListInsert(L, 3, 30);
	
	printf("Insert Item = %d\n", L.elem[2]);
	
	return 0;
}

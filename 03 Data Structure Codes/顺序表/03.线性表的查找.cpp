# include <stdio.h>
# include <stdlib.h>
# define InitSize 50   // �����ʼ��������(��sizeof(ElemType)Ϊ��λ)

typedef int Status;	   // ������� 
typedef int ElemType;  // ������� 

typedef struct{
	ElemType *elem;  // �洢�ռ����ַ
	int length;		 // ��ǰ����(����)
    int MaxSize;     //�������
}SeqList; 


int LocateItem(SeqList L, ElemType e){
	int i;
	for (i=0; i < L.length; ++i) {
		if (L.elem[i] == e){
			return i + 1;  // ����Ԫ�ص�λ��(λ��) 
		}
	return 0;
	}
} 

int main(){
	SeqList L;
	L.elem = (ElemType*)malloc(InitSize * sizeof(ElemType));
	L.elem[0] = 10;
	L.elem[1] = 20;
	L.length = 2;
	
	int pos;
	// ����Ԫ�� 10 
	pos = LocateItem(L, 10);
	
	printf("Item position = %d\n", pos);
	
	return 0;
}

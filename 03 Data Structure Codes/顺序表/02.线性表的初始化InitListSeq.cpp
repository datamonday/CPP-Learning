# include <stdio.h>
# include <stdlib.h>
# define InitSize 50	// �����ʼ��������(��sizeof(ElemType)Ϊ��λ)

#define TRUE  1
#define False 0
#define OK    1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW   -2

typedef int Status;		// ������� 
typedef int ElemType;  // ������� 

//typedef struct{
//	int id;
//}ElemType;

typedef struct{
	ElemType *elem;  // �洢�ռ����ַ
	int length;		 // ��ǰ����(����)
    int MaxSize;     //�������
}SeqList; 


// 1.���Ա��ʼ��
Status InitListSeq(SeqList &L){
	// ����һ���յ����Ա�L
	L.elem = (ElemType *)malloc(InitSize * sizeof(ElemType)); 
	// �쳣�������
	if(!L.elem){
		exit(OVERFLOW);	// �洢����ʧ�� 
	} 
	// �ձ���Ϊ1
	L.length = 0;
	
	return OK; 
} 


// 2.�������Ա�
void DestroyList(SeqList &L){
	if(L.elem) {
		// �ͷſռ� 
		free(L.elem);
	}
} 

// 3.������Ա�
void ClearList(SeqList &L){
	L.length = 0; 
} 

// 4. ���L�ĳ���
int GetLength(SeqList &L) {
	return (L.length);
} 

// 5. �ж����Ա�L�Ƿ�Ϊ��
int IsEmpty(SeqList &L) {
	if(L.length == 0){
		return true;
	}
	else{
		return false;
	}
} 

// 6. ����λ��i��ȡԪ������
int GetItem(SeqList L, int i, ElemType &e){
	if(i < 0 || i > L.length){
		return ERROR;
	}
	else{
		// ��i-1�ĵ�Ԫ�洢�ŵ�i������ 
		e = L.elem[i - 1];
		return e;
	}
}


int main(){
	int i;
	SeqList L;
	
	InitListSeq(L);
	L.elem[0] = 10;
	L.elem[1] = 20;
	L.length = 2;
	
	printf("L.length  = %d\n", L.length);
	for(i=0; i < L.length; ++i) {
		printf("L.elem[%d] = %d\n", i, L.elem[i]);
	}
	
	ElemType e;
	e = GetItem(L, 1, e);
	printf("The elem found is %d\n", e);
	
	
	DestroyList(L);
	printf("L.elem after destroied:\n");
	printf("L.length  = %d\n", L.length);
	printf("L.elem[0] = %d\n", L.elem[0]);
	
	ClearList(L);
	printf("L is Empty?");
	if(IsEmpty(L) == true){
		printf("true!\n");
	} 
	else{
		printf("false!\n");
	}
	
	return OK;
}



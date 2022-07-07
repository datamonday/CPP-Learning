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


Status ListDeleteSeq(SeqList &L, int i){
    int j;
    int e; 
    if (i < 1 || i > L.length) 
    {
        return ERROR;
    }
    else 
    {	
    	// ���汻ɾ����Ԫ�� 
        e = L.elem[i - 1];
        for (j = i; j <= L.length - 1; j++)
        {
            L.elem[j - 1] = L.elem[j];
        }
        L.length --;
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
	
	// ɾ����2��Ԫ�� 
	ListDeleteSeq(L, 2);
	
	printf("L.length after Delete = %d\n", L.length);
	
	return 0;
}

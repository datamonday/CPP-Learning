# include <stdio.h>
# include <stdlib.h>
# define InitSize 50   // �����ʼ��������(��sizeof(ElemType)Ϊ��λ)

# define ERROR -1
# define OK     1

typedef int Status;	   // ������� 
typedef int ElemType;  // ������� 


// ������Ĵ洢�ṹ 
typedef struct LNode{
	// �����������ͺ�ָ�����ָ������ 
	ElemType data;			// ���������� 
	struct LNode *next;		// ����ָ���� 
}LNode, *LinkList; 	
// LinkListΪΪָ��LNode�ṹ�����ͣ���������Ա����ָ��; 


// �������е�i��Ԫ�ص�����, ��ͨ������e���� 
Status GetElemLinkList(LinkList L, int i, ElemType &e){
	LNode *p;
	// p ָ���һ����� 
	p = L -> next;
	// �������������
	int j = 1; 
	
	// ���ɨ�裬ֱ��pָ���i��Ԫ�ػ�pΪ�� 
	while (p && j < i) {
		p = p -> next;
		++j; 
	}
	 
	// Ҫ���ҵĵ� i ��Ԫ�ز����� 
	if(!p || j>i ){
		return ERROR;
	}
	else {
		e = p -> data;
		return OK;
	}
}


int main(){
	LinkList L;

	return 0;
}

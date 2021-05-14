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
}LNode, *LinkList; 	// LinkListΪΪָ��LNode�ṹ�����ͣ���������Ա����ָ��; 


// ������Ĳ��� 
Status InsertElemLinkList(LinkList &L, int i, ElemType e) {
	LNode *p;
	p = L;
	int j = 0;
	
	// Ѱ�ҵ� i-1 ����㣬pָ��ý��
	while(!p || j < i-1){
		p = p -> next;
		++j;
	} 
	
	// i���ڱ�+1��С��1������λ�÷Ƿ� 
	if (!p || j >= i){
		return ERROR;
	}
	
	// �����½��s����s����������Ϊe
	LNode *s;
	s -> data = e;
	// �����s���뵽L�У���������˳���ܵ����� 
	s -> next = p -> next;
	p -> next = s; 
	
	return OK;
}


int main(){
	LinkList L;

	return 0;
}

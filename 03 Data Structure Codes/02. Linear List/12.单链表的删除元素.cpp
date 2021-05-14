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


// �������ɾ�� 
Status DeleteElemLinkList(LinkList &L, int i, ElemType &e) {
	LNode *p;
	p = L;
	int j = 0;
	
	// Ѱ��λ��Ϊ i-1 �Ľ�㣬pָ��ý��
	while(p -> next && j < i-1){
		p = p -> next;
		++j;
	} 
	
	// i���ڱ�+1��С��1��ɾ��λ�ò����� 
	if (!(p -> next) || j >= i){
		return ERROR;
	}
	
	// ��ʱ���汻ɾ�����ĵ�ַ�Ա��ͷ�
	LNode *q;
	q = p -> next;
	// �ı�ɾ���ڵ�ǰ������ָ����
	p -> next = q -> next;
	// ����ɾ������������
	e = q -> data;
	// �ͷ�ɾ�����Ŀռ�
	free(q);
	
	return OK;
}


int main(){
	LinkList L;

	return 0;
}

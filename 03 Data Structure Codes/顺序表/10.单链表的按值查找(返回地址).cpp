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


// ��������ֵ����
// LNode * ��ʾ����������ص�������LNodeָ������
LNode *LocateElemLinkList(LinkList L, ElemType e) {
	// ������L�в���ֵΪ e ��Ԫ��
	// ���ҵ����򷵻�L��ֵΪe��Ԫ�صĵ�ַ�����򷵻�NULL
	
	LNode *p;
	// pָ���һ�����
	p = L -> next;
	
	while(p && p->data != e) {
		p = p -> next;
	} 
	// ����ҵ��ˣ���pΪԪ�صĵ�ַ�����δ�ҵ�����p�Ѿ�����β����ֵΪNULL 
	return p;
}


int main(){
	LinkList L;

	return 0;
}

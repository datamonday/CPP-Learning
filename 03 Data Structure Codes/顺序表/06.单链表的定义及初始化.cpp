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
// �佫ָ��ṹ���ָ���������� 

/*
���ʽڵ���������ָ����

�������� 
LinkList L;

������ָ�� p 
LNode p;  

p.data;
p.next; 

�ȼ��� 

LNode *p; 
p -> data;
p -> next; 
*/ 

// ��ʼ�������� 
Status InitLinkList(LinkList &L){
	// ���ڴ�����һ��ռ�����LNode
	// LinkList Ϊȡ�����ռ�ĵ�ַ������ֵ��L 
	L = (LinkList)malloc(sizeof(LNode));
	if (L == NULL){
		printf("�����ڴ�ռ�ʧ�ܣ�\n");
    }
	L -> next = NULL;
	return OK;
}

// �жϵ������Ƿ�Ϊ�� 
Status LinkListEmpty(LinkList L){
	// �����Ϊ�գ��򷵻�1�������Ϊ�գ��򷵻�0 
	if (L -> next) {
		return 0;
	} 
	else{
		return 1;
	}
}

// ���ٵ����� 
int main(){
	LinkList L;
	InitLinkList(L);
	LNode p;
	int a = 40;
	p.data = 30;

	return 0;
}

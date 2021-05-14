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


// ��յ����� 
Status DestroyLinkList(LinkList &L){
	// ֻ����Ҫɾ���Ľ�� 
	LNode *p;  // LinkList p;
	LNode *q;  // LinkList q;
	// p ָ���һ����� 
	p = L -> next; 
	// û����β
	while(p != NULL){
		q = p -> next;
		free(p);
		p = q;
	}
	// ͷ���ָ�����ÿ�
	L -> next = NULL;
	return OK; 
}


int main(){
	LinkList L;
	InitLinkList(L);

	return 0;
}

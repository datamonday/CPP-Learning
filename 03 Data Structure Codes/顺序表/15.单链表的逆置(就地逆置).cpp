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


// ����������á����͵����� 
LinkList LocalReverseLinkList(LinkList &L){
	if (L == NULL || L -> next == NULL){
		return L;
	}
	else{
		LNode *beg = L;
		LNode *end = L -> next;
	
		while(end != NULL){
			// �� end ��������ժ��
			beg -> next = end -> next;
			// �� end �ƶ�������ͷ
			end -> next = L;
			L = end; 
			// ���� end ��ָ������ָ�� beg ��һ����㣬Ϊ��ת��һ�������׼�� 
			end = beg -> next; 
		}
	} 
}


int main(){
	LinkList L;
	InitLinkList(L);
	LocalReverseLinkList(L);

	return OK;
}

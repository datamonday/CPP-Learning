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

// ����������á���������ת 
LinkList IterReverseLinkList(LinkList &L){
	if (L == NULL || L -> next == NULL){
		return L;
	}
	else{
		LNode *beg = NULL;
		LNode *mid = L;
		LNode *end = L -> next;
	
		while(1){
			// �޸� mid ָ���ָ��
			mid -> next =beg;
			// �ж� end �Ƿ�Ϊ�գ��������һ����㣩������������˳�ѭ��
			if (mid == NULL) {
				break;
			} 
			// ��������ƶ� 3 ��ָ��
			beg = mid;
			mid = end;
			end = end -> next; 
		}
		// �޸�����Lͷָ���ָ��
		L = mid; 
	} 
}


int main(){
	LinkList L;
	InitLinkList(L);
	IterReverseLinkList(L);

	return OK;
}

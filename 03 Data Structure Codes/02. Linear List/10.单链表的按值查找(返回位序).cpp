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
Status LocateElemLinkList(LinkList L, ElemType e) {
	LNode *p;
	p = L -> next;
	int j = 1;
	
	while(p && p -> data != e){
		p = p -> next;
		j++;
	}
	if (p != NULL){
		return j;
	}
	else{
		return 0;
	}
}


int main(){
	LinkList L;

	return 0;
}

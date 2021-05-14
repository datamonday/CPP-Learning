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

// ǰ�巨���������� 
// ʱ�临�Ӷ�ΪO(n)
LinkList HeadCreateLinkList(int n)
{
    LinkList L;
	InitLinkList(L);
	
    ElemType x;
    for (int i=n; i > 0; --i)
    {
    	printf("Please input linklist element[%d]:\n", i);
    	
    	scanf("%d", &x);
        LNode *p;
        p = (LNode *)malloc(sizeof(LNode));
        p -> data = x;
        
        p -> next = L -> next;
        L -> next = p;
    }
    return L;
}


int main(){
	LinkList L, start;
	InitLinkList(L);
	
	int n;
	printf("Please input number of linklist element:\n");
	scanf("%d", &n);
	
    L = HeadCreateLinkList(n);
    for (start = L->next; start != NULL; start = start->next){
    	printf("%d \t", start->data);
	}

	return 0;
}

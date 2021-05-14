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

// β�巨���������� 
// ʱ�临�Ӷ�ΪO(n)
LinkList TailCreateLinkList(int n)
{
    LinkList L;
	InitLinkList(L);
	
	// βָ��rָ��ͷ��� 
	LNode *r;
	r = L; 
	
    ElemType x;
    for (int i=0; i < n; ++i)
    {
    	printf("Please input linklist element[%d]:\n", i);
    	
    	scanf("%d", &x);
        LNode *p;
        p = (LNode *)malloc(sizeof(LNode));
        p -> data = x;
        
        p -> next = NULL;
        // ���뵽��β 
        r -> next = p;
        // rָ���µ�β��� 
        r = p; 
    }
    r -> next = NULL;
    
    return L;
}


int main(){
	LinkList L, start;
	InitLinkList(L);
	
	int n;
	printf("Please input number of linklist element:\n");
	scanf("%d", &n);
	
	// β�巨���������� 
    L = TailCreateLinkList(n);
    for (start = L->next; start != NULL; start = start->next){
    	printf("%d \t", start->data);
	}

	return 0;
}

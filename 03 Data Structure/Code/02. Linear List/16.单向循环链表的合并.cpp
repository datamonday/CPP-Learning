# include <stdio.h>
# include <stdlib.h>

# define ERROR -1
# define OK     1

typedef int Status;	   // ������� 
typedef int ElemType;  // ������� 

typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode, *LinkList;

Status InitialLinkList(LinkList &L){
	L = (LinkList)malloc(sizeof(LNode));
	if (L == NULL){
		printf("�����ڴ�ռ�ʧ�ܣ�\n");
    }
    // ����ѭ������Ŀձ��ʾ: ͷ����ָ����ָ��ͷָ�� 
	L -> next = L;
	
	return OK;
}


// ʱ�临�Ӷ�Ϊ O(1)
LinkList ConnectLinkList (LinkList Ta, LinkList Tb){
    // ����Ta Tb��Ϊ�ǿյĵ���ѭ������
    // (1) p�����Ta��ͷ���
    LNode *p;
    p = Ta -> next;
    // (2) Tb��ͷ���ӵ�Ta�ı�β
    Ta -> next = Tb -> next -> next;
    // (3) �ͷ�Tb��ͷ���
    free(Tb -> next);
    // (4) �޸�ָ��
    Tb -> next = p;
}

Status printLinkList(LNode *head){
    LNode *p = head;
    while(p -> next != head) {
        p = p -> next;
        printf("%d", p -> data);
    }
    printf("\n");
    
    return OK;
}

Status main(){
	return OK;
}


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



// ������ı�
// ����Ҫ��������������Դ�ֵ���ü��ɣ�����Ҫ���� &L
// ���ص�������Ԫ�صĸ�����
Status LengthLinkList(LinkList L){
	// ֻ����Ҫɾ���Ľ�� 
	LNode *p;  // LinkList p;
	// p ָ���һ����� 
	p = L -> next;
	
	int i = 0;
	 
	// ����������ͳ�ƽ���� 
	while(p != NULL){
		i++; 
		p = p -> next;
	}
	// ��������L������Ԫ�صĸ���
	// i��ֵΪ0���˴���Ϊi+1������Ϊ���һ��whileѭ��ʱ i�Ѿ���1�� 
	return i; 
}


int main(){
	LinkList L;

	return 0;
}

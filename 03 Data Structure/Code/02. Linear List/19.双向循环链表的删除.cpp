int a[] 

// ɾ����ͷ����˫��ѭ������L�ĵ�i��Ԫ�أ�����e���� 
int DeleteElemDLinkList(DLinkList &L, int i, ElemType &e){
	if(!( p = GetElemP_DLinkList(L, i) )) {
		return ERROR;
	}
	else{
		// ����ɾ������������ֵ��e 
		e = p -> data;
		// 1. ��ǰһ������next��ָ���ɾ��������һ����� 
		p -> prior -> next = p -> next;
		// 2. ����ɾ��������һ������prior��ָ��ǰһ�����
		p -> next -> prior = p -> prior; 
		// 3.�ͷű�ɾ�����Ŀռ�
		free(p); 
	}
	return OK; 
} 



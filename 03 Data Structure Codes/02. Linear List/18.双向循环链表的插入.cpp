

// �ڴ�ͷ����˫��ѭ������L�еĵ�i��λ��֮ǰ����Ԫ��e 
int InsertDLinkList(DLinkList &L, int i, ElemType e){
	// ���Ҳ���λ��p
	if(!( p = GetElemP_DLinkList(L, i) )){
		return ERROR;
	} 
	else{
		// Ϊ������������ڴ�ռ� 
		DLNode *s;
		s -> data = e;
		// 1. ����������s��prior�� ָ�� ǰһ����� 
		s -> prior = p -> prior;
		// 2. ��ǰһ������next�� ָ�� �������� 
		p -> prior -> next = s;
		// 3. �����������next�� ָ�� ��һ����� 
		s -> next = p;
		// 4. ����һ������prior�� ָ�� �������� 
		p -> prior = s;
	}
} 

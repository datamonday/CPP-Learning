# include <stdio.h>

const int MAX = 5;

int main() {
	int var[] = {1,2,3,4,5};
	
	// 1.����ָ������ 
	int i, *ptr[MAX];
	
	// 2.Ϊ����ptr�е�Ԫ�ظ�ֵ 
	for(i=0; i<MAX; i++){
		// ��ֵΪ�����ĵ�ַ 
		ptr[i] = &var[i]; 
	} 
	
	// 3.������ӡ �����е�ָ���Ӧ��ֵ 
	for(i=0; i<MAX; i++){
		printf("Value of var[%d] = %d\n", i, *ptr[i]);
	}
	return 0;
}

# include <stdio.h>

const int MAX = 5;

int main() {
	int var[MAX] = {1,2,3,4,5};
	
	// 1.��������ָ�� 
	int i, (*ptr)[MAX];
	
	// 2.������names���׵�ַ��ֵ��ָ��ptr 
	ptr = &var;
	
	// 3. ������ӡ 
	for(i=0; i<MAX; i++){
		printf("Value of var[%d] = %d\n", i, var[i]);
	}
	return 0;
}

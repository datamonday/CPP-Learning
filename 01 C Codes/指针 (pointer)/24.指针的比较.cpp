# include <stdio.h>

const int MAX = 3;

int main() {
	int var[] = {10, 100, 200};
	int i, j, *ptr;
	
	ptr = var;
	i = 0;
	while(ptr <= &var[MAX - 1]) {
		printf("�洢��ַ�� var[%d] = %p\n", i, ptr);
		printf("�洢ֵ  �� var[%d] = %d\n", i, *ptr);
		
		// ָ����һ��λ�� 
		ptr ++;
		i ++;
	} 
	return 0;
}

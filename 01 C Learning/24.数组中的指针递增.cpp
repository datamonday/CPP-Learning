# include <stdio.h>

const int MAX = 3;

int main() {
	int var[] = {10, 100, 200};
	int i, j, *ptr1, *ptr2;
	
	// ָ���е������ַ��ָ��ָ�������е�һ��Ԫ�صĵ�ַ�� 
	ptr1 = var;
	
    // ����һ��ָ��
	for(i=0; i<MAX; i++){
		printf("�洢��ַ�� var[%d] = %p\n", i, ptr1);
		printf("�洢ֵ  �� var[%d] = %d\n", i, *ptr1);
		
		// ָ����һ��λ��
		ptr1++; 
	}
	
    // �ݼ�һ��ָ��
    // ptr2 = var; ���޸�
	// ָ�������һ��Ԫ�صĵ�ַ
	ptr2 = &var[MAX-1];
    
    for(j=MAX; j>0; j--){
        printf("�洢��ַ��var[%d] = %p\n", j-1, ptr2);
        printf("�洢ֵ  ��var[%d] = %d\n", j-1, *ptr2);
        
        // ָ����һ��λ��
        ptr2--;
    }
	
	return 0;
} 

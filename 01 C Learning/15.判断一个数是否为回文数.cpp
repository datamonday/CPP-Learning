# include "stdio.h"
# include "string.h"

int main() {
	char a[100];
	int n, i, j; 
	printf("�������ַ�(<100λ)��%s \n", a);
	scanf("%s", &a); 
	
	// �ַ�������
	n = strlen(a);
	
	for (i=0, j=n-1; i < j; i++, j--) {
		if (a[i] != a[j]){
			break;
		}
	} 
	
	// i - j == 1 ���ж�Ϊż���ԳƵ�������� 1221 ��i=1��j=2ʱ������Ӽ���i=2��j=1 
	if (i == j || i-j==1) {
		printf("%s �ǻ�������", a);
	}
	else {
		printf("%s ���ǻ�������", a);
	} 
}

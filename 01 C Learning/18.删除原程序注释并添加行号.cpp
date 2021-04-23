/*
fputs() ����������ʾ�ַ�����

# include <stdio.h>
int fputs(const char *s, FILE *stream);

	- param s: Ҫ������ַ������׵�ַ���������ַ����������ַ�ָ���������
	- param stream: �������������������Ǳ�׼����� stdout��Ҳ�������ļ�����
	                ��׼���������Ļ�����printf ��ʵҲ�����׼�����������ġ�
	                
----
- 18.ɾ��ԭ����ע�Ͳ�����к� 18.1234������ɶ���λ���ظ���λ��.cpp 18.cpp
 
*/


# include "stdio.h"
# include "stdlib.h"
# include "string.h"

# define MAXLINE 99

void del_anno_add_rows(FILE *fp1, FILE *fp2);

int main(int argc, char *argv[]) {
	
	FILE *fp1, *fp2;
	
	// ��������в���
	if (argc != 3) {
		printf("You must pass three args!\nLike: c source filename filename1.c filename2.c \n");
		exit(1);
	}
	// ���ļ�
	if ((fp1 = fopen(argv[1], "r")) == NULL) {
		printf("Can't open %s \n", argv[1]);
		exit(1);
	}
	
	if ((fp2 = fopen(argv[2], "w")) == NULL) {
		printf("Can't open %s \n", argv[2]);
		exit(1);
	}
	
	del_anno_add_rows(fp1, fp2);
	
	fclose(fp1);
	fclose(fp2); 
}

void del_anno_add_rows(FILE *fp1, FILE *fp2) {
	char str1[MAXLINE]="", str2[MAXLINE]="";
	int i, j, no=0;
	// �����к� 
	int ln=1;
	
	while (fgets(str1, MAXLINE, fp1) != NULL) {
		for (i=0; i < MAXLINE; i++){
			// ����ע�� // 
			if (str1[i] == '/' && str1[i-1] == '/') {
				str1[i - 1] = '\n';
				str1[i] = '\0';
			}
			// ����ע�� /* 
			if (str1[i] == '*' && str1[i-1] == '/') {
				str1[i-1] = '\0';
				no = 1;
				// fputs(str1, fp2);
				fprintf(fp2, "[%2d]", ln);
				fputs(str1, fp2);
				ln++;
			}
			// ����ע�� */ 
			if (str1[i] == '/' && str1[i-1] == '*') {
				for (j=0; j < 98-i; j++) {
					str1[j] = str1[i + j + 1];
					str1[j] = '\0';
					no = 0;
				} 
			}
		}
		if (no == 0) {
			// fputs(str1, fp2);
			fprintf(fp2, "[%2d]", ln);
			fputs(str1, fp2);
			ln++;
		}	
	}
}


/*
gets()������ȱ�ݣ������Ԥ���洢���Ƿ��ܹ�����ʵ����������ݡ�
����������ַ���Ŀ��������ĳ��ȣ�gets�޷���⵽������⣬�ᷢ���ڴ�Խ�硣 

fgets() �� gets() ��ȫ��Ҳ�����ã����������������

	char *fgets(char *s, int size, FILE *stream);

	- param s: ��ʾҪ���浽�ڴ�ռ���׵�ַ�� ����ʹ�ַ���������Ҳ������ָ���ַ�������ַ�ָ��������� 
	- param size: �����ȡ�ַ����ĳ��ȡ� 
	- param stream: ��ʾ�Ӻ����������룬�����Ǳ�׼������stdin��Ҳ�������ļ����� 

----

������ʹ�ã�17.�ļ��Ƚ� filename1 filename2 

-- 17.�ļ��Ƚ� 17.file1.txt 17.file2.txt 
	 
*/

# include "stdio.h"
# include "stdlib.h"
# include "string.h"


# define MAXLINE 80

// ���� �ļ��ȽϺ��� 
void filecamp(FILE *fp1, FILE *fp2);

// ����������
/*
1.argcΪ����
2.argvΪָ���ָ�루char **argv or: char *argv[] or: char argv[][]��argv��һ��ָ�����飩
	argv[0]ָ������ĳ���·�������ơ�
    argv[1]ָ�����para_1�ַ�����
    argv[2]ָ�����para_2�ַ�����
*/ 
int main(int argc, char *argv[]){
	FILE *fp1, *fp2;
	
	// ��������в���
	if (argc != 3) {
		printf("You must pass three args!\n Like: filecamp filename1 filename2 \n");
		exit(1);
	}
	// ���ļ�
	if ((fp1 = fopen(argv[1], "r")) == NULL) {
		printf("Can't open %s \n", argv[1]);
		exit(1);
	} 
	if ((fp2 = fopen(argv[2], "r")) == NULL) {
		printf("Can't open %s \n", argv[2]);
		exit(1);
	} 
	
	// �Ƚ��ļ�
	filecamp(fp1, fp2);
	
	// �ر��ļ�
	fclose(fp1);
	fclose(fp2); 
}

// �Ƚ������ļ���һ����ͬ��
void filecamp(FILE *fp1, FILE *fp2)  {
	char line1[MAXLINE], line2[MAXLINE];
	char *lp1, *lp2;
	
	do{
		lp1 = fgets(line1, sizeof(line1), fp1);
		lp2 = fgets(line2, sizeof(line2), fp2);
		
		if (lp1 == line1 && lp2 == line2) {
			if (strncmp(line1, line2, MAXLINE) != 0) {
				printf("first difference line: \n file1: %s\n file2: %s\n", line1, line2);
			
			// �ҵ���ͬ�У�ѭ������ 
			lp1 = lp2 = NULL;
			}
		}
		
		else if (lp1 != line2 && lp2 == line2) {
			printf("end of file1.");
		}
		else if (lp1 == line2 && lp2 != line2) {
			printf("end of file2.");
		}
	} while (lp1 == line1 && lp2 == line2);
}





















/*
2��ͳ��һ��Ӣ���ı��ļ���26��Ӣ����ĸ���ִ�������Ӣ����ĸ�����ͳ�ƽ����
���Ҳ��滻��Ӣ���ı��ļ���ĳ�ַ�����
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
struct Alpha //��ĸ �ṹ�壬��ĸ����ͼ�ֵ
{
    char zm;
    int number;
}table[26];
//�Զ�����ַ����滻���������г��ֵ�ƥ�䴮���滻ΪĿ�괮��
void strreplace(char * Src,char * From,char * To){
    int length_to,length_from;
    char *sf,*se,endBuf[1024]={0};
    length_from = strlen(From);
    length_to = strlen(To);
    while(sf = strstr(Src,From)){
        if(NULL == sf)
            break;
        else
        {
            se = sf + length_from;
            strcpy(endBuf,se);
            memset(se,0,strlen(endBuf));
            memcpy(sf,To,length_to);
            memcpy(sf+length_to,endBuf,strlen(endBuf));
            memset(endBuf,0,strlen(endBuf));
        }
    }
}

int main()
{
    char ch;
    char ZMB[]="abcdefghijklmnopqrstuvwxyz\0";
    char buf[1024]={0},*from,*to;
    int index = 0;
    FILE *fp,*fp1,*fp2;
    while(index<26){  //�ṹ������ݳ�ʼ����number��Ϊ0����ĸ�ֱ���a~z
        table[index].zm = ZMB[index];
        table[index].number = 0;
        index++;
    }
    fp = fopen("words.txt","r");
    while(ch = fgetc(fp)) //ѭ����ȡ�ַ�
    {
        if(feof(fp))
            break;
        ch = tolower(ch); //Сд
        if(ch >= 'a' && ch <= 'z') //����ĸ�͸��½ṹ���ͳ��Ƶ��
        {
            index = ch - 'a';
            table[index].number++;
        }
    }
    index = 0;
    while(index<26){ //���ͳ�ƽ��
        printf("Char '%c' appears %d times in file.\n",table[index].zm,table[index].number);
        index++;
    }
    fclose(fp);
    // ������Ҫ��Ѱ�Ĵ��ͱ��滻��ΪĿ���ַ���
    printf("Input string you shall find:\t");
    fgets(from,sizeof(from),stdin);
    from = strtok(from,"\n"); //ȥ�����з�
    printf("Input string you shall replace to:\t");
    fgets(to,sizeof(to),stdin); //ȥ�����з�
    to = strtok(to,"\n");
    // ���滻�Ĵ����´�words.txt������д�����ļ�words_2.txt
    fp1 = fopen("words.txt","r");
    fp2 = fopen("words_2.txt","w");
    while(!feof(fp1))
    {
        fgets(buf,sizeof(buf),fp1);
        strreplace(buf,from,to);  //ÿһ�ж����ҡ��滻Ŀ�괮
        fputs(buf,fp2);
        memset(buf,0,sizeof(buf));
    }
    fclose(fp1);
    fclose(fp2);
    // ��words.txt����д��words_2.txt
    fp1 = fopen("words.txt","w");
    fp2 = fopen("words_2.txt","r");
    while(!feof(fp2))
    {
        fgets(buf,sizeof(buf),fp2);
        fputs(buf,fp1);
        memset(buf,0,sizeof(buf));
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}

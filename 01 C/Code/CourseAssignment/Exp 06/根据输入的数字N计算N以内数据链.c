/*
�������������N������N���ڣ�����N����������ͳ��������ĩβ������1�����ݸ�����
  ����N=44����������Ϊ��44->32->13->10->1��
  �����Ϊ��4*4+4*4=32��3*3+2*2=13��1*1+3*3=10��1*1+0*0=1��
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int Calc(int index,int len)  //���㰴�չ������ֵ���һ�����֣�lenΪ���ֳ���
{
    int i = 0,res = 0,temp=0; //res�ۼ�����
    while(i < len)
    {
        index %= (int)pow(10,len-i);
        temp = index / (int)pow(10,len-i-1);
        res += (int)pow(temp,2);
        i += 1;
    }
    return res;
}
int print_link(int num,int len) //��ӡ�����б�numΪ��ʼ���֣�lenΪ�䳤��
{
    char buf[10];
    itoa(num,buf,10); //��һ����Ϊ�˺���������ֳ���
    while(num > 9)   //��ӡ��ֹ��С��10������
    {
        printf("%d -->",num);
        num = Calc(num,strlen(buf));
        memset(buf,0,sizeof(buf));
        itoa(num,buf,10);
    }
    printf("%d\n", num);
    return num;
}
int main(){
    unsigned int number = 0,temp = 0;
    char NumBuffer[10]={0};
    printf("Input a number: ");
    gets(NumBuffer);       //��ȡ�ַ�����ʽ����
    temp = atoi(NumBuffer); //ת������
    while(temp>=10)
    {
        if(1 ==print_link(temp,strlen(NumBuffer))) //��¼���Ϊ1����Ŀ
            number++;;
        temp -= 1;
    }
    printf("Number of '1' is %d\n",number);
    return 0;
}

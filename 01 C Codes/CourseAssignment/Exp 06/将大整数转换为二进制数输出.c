/*
��һ�����������ʾ10���ƴ������������ÿ��Ԫ�ش洢��������һλ���֣������������ת��Ϊ2�����������

���������
BigNumber = 1234567890
sArray = '1234567890',
length = 10
1 2 3 4 5 6 7 8 9 0
Number from array is 1234567890,
binary string is 1001001100101100000001011010010

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int my_atoi(char s) //�����ַ�ת����
{
    return s-'0';
}

int main(){
    unsigned long BigNumber=0, num=0;
    int iArray[10]={0};
    char sArray[11]={0};
    char binBuffer[33]={0};
    int index=0;
    printf("Input a big number: ");
    scanf("%ld", &BigNumber);  //�����û�����һ������
    printf("BigNumber = %ld\n", BigNumber); //��ӡ����
    itoa(BigNumber, sArray, 10); // ʮ���� ����ת��Ӧ��ʮ�����ַ���
    //��ӡ �����ַ������� �� ����
    printf("sArray = '%s', \nlength = %ld\n", sArray, strlen(sArray));
    while( index < strlen(sArray) ) //�������ַ�������ת������������������
    {
        iArray[index] = my_atoi(sArray[index]);
        index += 1;
    }
    // ��ӡ��������
    for(index=0;index<strlen(sArray);index++)
        printf("%d ", iArray[index]);
      printf("\n");
    index = 0;
    while( index < strlen(sArray) )//�����������ۼӻָ���ʼ����������
    {
        num *= 10;
        num += iArray[index];
        index += 1;
    }
    //����itoaֱ�ӵõ������Ķ������ַ���������2���������
printf("Number from array is %ld, \nbinary string is %s\n", num , itoa(num,binBuffer,2));
return 0;
}

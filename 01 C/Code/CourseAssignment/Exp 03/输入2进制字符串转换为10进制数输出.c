/*
�������2�����ַ���ת��Ϊ10�����������
*/
#include <stdio.h>
#include<string.h>

 int BinToDigit(const char *bin_str, int n_bin_str){
     int num = 0;
     for(int i=0; i<n_bin_str; i++)
     {
       num *= 2;  // ��2 �൱������һλ
       if(bin_str[i] - '1' == 0){
         num += 1;
       }
       else if(bin_str[i] - '0' == 0){
         num += 0;
       }
       else{
         printf("[Error]ֻ������0��1��");
         return -1;
       }
     }
     return num;
   }

   int main()
   {
     char bin_str[200];
     int N = 0;
     printf("����������ַ�����\n");
     gets(bin_str);
     N = BinToDigit(bin_str, strlen(bin_str));
     printf("N = %d\n", N);
     return 0;
   }

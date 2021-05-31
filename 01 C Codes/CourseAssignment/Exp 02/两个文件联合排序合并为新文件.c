#include <stdio.h>
#include <stdlib.h>
void sort(int a[],int N);
int main(void)
{
    FILE *fp1 = fopen("num1.txt", "r");
    FILE *fp2 = fopen("num2.txt", "r");
    FILE *fp3 = fopen("num3.txt", "w");

    int index=0, i=0;
    int array[1024]={0};
    if (fp1 == NULL || fp2 == NULL ||fp3 == NULL)
     {
         perror("Open file recfile");
         exit(1);
     }
     while(!feof(fp1)){
       fscanf(fp1, "%d", &array[index]); //ÿ�ζ���һ�����ݣ���������
       index += 1;
     }
     while(!feof(fp2)){
         fscanf(fp2, "%d", &array[index]); //ÿ�ζ���һ�����ݣ��������ϴο�ʼ����������
         index += 1;
     }
     // printf("index = %d\n",index);
     // while(i<index-1){  //��ӡ��������Ԫ��
     //     printf("%d\t",array[i]);
     //     i+=1;
     // }
     // printf("\n");

     sort(array, index-1); //��������
     i = 0;
     while(i<index-1){   //�ٴδ�ӡ��������Ԫ��
         printf("%d\t", array[i]);
         i+=1;
     }
     i = 0;
     while(i<index-1){  //���������ݸ�ʽ����д���ļ�
         fprintf(fp3, "%d ", array[i]);
         i += 1;
     }
     fclose(fp1);
     fclose(fp2);
     fclose(fp3);
     return 0;
 }

 void sort(int a[], int N) //ð������
 {
     int i,t,j;
     for(i=0; i<N; i++)
     {
         for(j=0; j<N; j++)
         {
              if(a[j]>a[i])
              {
                 t = a[i];
                 a[i] = a[j];
                 a[j] = t;
              }
         }
     }
 }

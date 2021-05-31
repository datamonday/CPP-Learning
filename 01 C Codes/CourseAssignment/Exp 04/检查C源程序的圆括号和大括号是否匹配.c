/*
���CԴ�����Բ���źʹ������Ƿ�ƥ�䡣
��ȷ�������磺��{((��)(��))}()��,����ȷ�������磺{(})
*/

#include<stdio.h>
#define True 1
#define False 0
char stack[1024]; //������ջ
int top=-1; //ջ��ָ�룬��ʼ��Ϊ-1����ʾ��

int main()
{
    char inputC;
    int success = True;
    while((inputC = getchar()) != '#') //�����ַ���#��β
    {
        if(inputC == '(' || inputC == '{')
            stack[++top] = inputC;
        else if(inputC == ')')
        {
            if(top >= 0 && stack[top] == '(')
                top--;   //��ջ
            else{ //���ڲ㲻ƥ�����Ͻ���ѭ������־��λFalse
                success = False;
                break;
            }
        }
        else if(inputC == '}')
        {
            if(top >= 0 && stack[top] == '{')
                top--;   //��ջ
            else{  //���ڲ㲻ƥ�����Ͻ���ѭ������־��λFalse
                success = False;
                break;
            }
        }
    }
    if(success && top == -1)
    {
        printf("Match Success\n");
    }else
    {
        printf("Match Error\n");
    }
    return 0;
}

#include <stdio.h>
 
int main()
{
    int c;
    int a = 10;
    c = a++; 
    printf("�ȸ�ֵ�����㣺\n");
    printf("c = %d\n", c ); // c=10
    printf("a = %d\n", a ); // a=11
   
    a = 10;
    c = a--; 
    printf("c = %d\n", c ); // c=10
    printf("a = %d\n", a ); // a=9
 
    
    printf("�������ֵ��\n");
    a = 10;
    c = ++a; 
    printf("c = %d\n", c ); // c=11
    printf("a = %d\n", a ); // a=11
    
    a = 10;
    c = --a; 
    printf("c = %d\n", c ); // c=9
    printf("a = %d\n", a ); // a=9
}

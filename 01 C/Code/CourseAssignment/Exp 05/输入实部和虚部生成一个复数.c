/*
���һ���������ͣ�����ʵ�����鲿����һ��������
�ɽ�������������͡�������������������������㡣

���������
Input c1 : 1 2
Input c2 : 3 4
c1 is: 1.000000 + 2.000000j
c2 is: 3.000000 + 4.000000j
c1 + c2 =  4.000000 + 6.000000j
c1 - c2 =  -2.000000 - 0.000000j
c1 * c2 =  -5.000000 + 10.000000j
*/

#include<stdio.h>
#include<string.h>
#include<math.h>
struct complex  //���帴���ṹ��
{
    float real;
    float maginary;
};
void PrintComplex(struct complex *member){ //��ӡ����
    if(member->maginary < 0)  //����Ĳ�����Ϊ�����������
        printf(" %f - %fj \n",member->real,abs(member->maginary));
    else
        printf(" %f + %fj \n",member->real,member->maginary);
}//�����ӷ������ظ����ṹ��
struct complex AddComplex(struct complex *member1,struct complex *member2){
    struct complex child;
    child.real = member1->real + member2->real; //ʵ��1+ʵ��2
    child.maginary = member1->maginary + member2->maginary;//�鲿1+�鲿2
    //printf("c1 + c2 = ");
    //PrintComplex(&child);
    return child;
}
//�������������ظ����ṹ��
struct complex SubComplex(struct complex *member1,struct complex *member2){
    struct complex child;
    child.real = member1->real - member2->real;
    child.maginary = member1->maginary - member2->maginary;
    return child;
}
//�����˷������ظ����ṹ��
struct complex MulComplex(struct complex *member1,struct complex *member2){
    struct complex child;
    child.real = (member1->real * member2->real) - (member1->maginary * member2->maginary);
    child.maginary = (member1->maginary * member2->real) + (member1->real * member2->maginary);
    return child;
}
int main(int argc, char const *argv[])
{
    struct complex c1,c2,temp;
    printf("Input c1 : ");      //�ֱ����������ṹ���ʵ�����鲿ֵ
    scanf("%f %f",&c1.real,&c1.maginary);
    printf("Input c2 : ");
    scanf("%f %f",&c2.real,&c2.maginary);
    printf("c1 is:");           //��ӡԭʼ����������
    PrintComplex(&c1);
    printf("c2 is:");
    PrintComplex(&c2);
    temp = AddComplex(&c1,&c2); //�����ӣ����������ֵ���м�����ṹ��temp
    printf("c1 + c2 = ");
    PrintComplex(&temp);
    temp = SubComplex(&c1,&c2); //�����������������ֵ���м�����ṹ��temp
    printf("c1 - c2 = ");
    PrintComplex(&temp);
    temp = MulComplex(&c1,&c2); //�����ˣ����������ֵ���м�����ṹ��temp
    printf("c1 * c2 = ");
    PrintComplex(&temp);
    return 0;
}

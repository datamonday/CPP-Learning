#include <stdio.h>
#include <stdint.h>
// ��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�


int main()
{
    uint32_t i; // ��λ
    uint32_t j; // ʮλ
    uint32_t k; // ��λ
    
    for (i=1; i<5; i++)
    {
        for (j=1; j<5; j++)
        {
            // ��λ��ʮλ�ظ�
            // ������ǰʮλ
            if (j==i)
            {
                continue;
            }
            
            for (k=1; k<5; k++)
            {
                // ��λ���λ��ʮλ�ظ�
                // ������ǰ��λ
                if (k==j || k==i)
                {
                    continue;
                }
                
                printf("%u,%u,%u\n", i, j, k);
            }
        }
    }
}

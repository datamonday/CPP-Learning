# include "stdio.h"
# include "stdlib.h"

//enum DAY {
//	MON = 1, TUE, WED, THU, FRI, SAT, SUN
//} day;
//
//int main() {
//	for (day = MON; day <= SUN; ++day) {
//		printf("ö��Ԫ�أ�%d\n", day);
//	}
//}


int main()
{
    enum color { red=1, green, blue };
 
    enum  color favorite_color;
 
    /* �û�����������ѡ����ɫ */
    printf("��������ϲ������ɫ: (1. red, 2. green, 3. blue): ");
    scanf("%u", &favorite_color);
 
    /* ������ */
    switch (favorite_color)
    {
    	case red:
    		printf("��ϲ������ɫ�Ǻ�ɫ");
    		break;
    	case green:
        	printf("��ϲ������ɫ����ɫ");
        	break;
    	case blue:
        	printf("��ϲ������ɫ����ɫ");
        	break;
    	default:
        	printf("��û��ѡ����ϲ������ɫ");
    }

    return 0;
}


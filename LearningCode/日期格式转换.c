#include<stdio.h>
int main() {
    //dayNum:ÿ���µ�����
    int year, month, day, dayNum;
    int sign = 0;
    printf("��������-��-��(���磺10-28-2019):");
    scanf("%d-%d-%d", &month, &day, &year);
    //�ж��Ƿ�����
    if((year%4 == 0 && year%100 != 0) || year%400 == 0) {
        //������Ϊ1
        sign = 1;
    }
    if(month >= 1 && month <= 12) {
        //�ж�ÿ���µ�����
        switch(month) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            dayNum = 31;
            break;
            case 4:
            case 6:
            case 9:
            case 11:
            dayNum = 30;
            break;
            case 2:
            if(sign == 1)
            dayNum = 29;
            else
            dayNum = 28;
            break;
            default:
            break;
        }
        if(!(day > 0 && day <= dayNum)) {
            printf("���ڸ�ʽ����\n");
            return 2;
        }
    }
    else
    {
        printf("�·ݸ�ʽ����\n");
        return 1;
    }
    //��û�����ʽ��ȷ,ת����ʽ
    printf("���ڸ�ʽ��ȷ\nת��������ڸ�ʽΪ��%d-%02d-%02d\n", year, month, day);
    return 0;
}

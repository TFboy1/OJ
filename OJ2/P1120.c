////
////#include <stdio.h>
////#include <string.h>
////#define MAX 200 //�������λ��
////int main()
////{
////    char a[MAX+1], b[MAX+1]; //���������ַ����飬��һλ���ڴ��'\0'
////    int c[MAX+2] = {0}; //����һ���������飬����λ���ڴ�Ž�λ��'\0'
////    int len_a, len_b, len; //���������������ͽ�����ĳ���
////    int i, j, k; //����ѭ������
////    scanf("%s%s", a, b); //��������������
////    len_a = strlen(a); //�����һ�����ĳ���
////    len_b = strlen(b); //����ڶ������ĳ���
////    len = len_a > len_b ? len_a : len_b; //ȡ�ϴ�ĳ�����Ϊ������ĳ���
////    j = len_a - 1; //ָ���һ���������λ
////    k = len_b - 1; //ָ��ڶ����������λ
////    for(i = 0; i < len; i++) //�ӵ�λ����λ��λ���
////    {
////        if(j >= 0) c[i] += a[j--] - '0'; //�����һ��������δ�����λ���ӵ�����У���ת��Ϊ����
////        if(k >= 0) c[i] += b[k--] - '0'; //����ڶ���������δ�����λ���ӵ�����У���ת��Ϊ����
////        if(c[i] > 9) //�����ǰλ����9����Ҫ��λ
////        {
////            c[i+1]++; //��һλ��һ
////            c[i] -= 10; //��ǰλ��ʮ
////        }
////    }
////    if(c[len]) printf("%d", c[len]); //������λ�н�λ���������
////    for(i = 1; i <=len-1; i++) printf("%d", c[i]); //���������������е����� 
////}
//#include <stdio.h>
//#include <string.h>
//
//#define MAX_DIGIT 205
//
//char num1[MAX_DIGIT], num2[MAX_DIGIT], sum[MAX_DIGIT];
//
//void reverse(char *s) {
//    int len = strlen(s);
//    for (int i = 0; i < len / 2; i++) {
//        char tmp = s[i];
//        s[i] = s[len - i - 1];
//        s[len - i - 1] = tmp;
//    }
//}
//
//void add(char *a, char *b, char *c) {
//    int carry = 0;
//    int len_a = strlen(a), len_b = strlen(b);
//    for (int i = 0; i < len_a || i < len_b || carry; i++) {
//        int x = (i < len_a ? a[i] - '0' : 0);
//        int y = (i < len_b ? b[i] - '0' : 0);
//        int s = x + y + carry;
//        carry = s / 10;
//        c[i] = s % 10 + '0';
//    }
//}
//
//int main() {
//    while (scanf("%s %s", num1, num2) == 2) {
//        reverse(num1);
//        reverse(num2);
//        add(num1, num2, sum);
//        reverse(sum);
//        printf("%s\n", sum);
//        memset(num1, 0, sizeof(num1));
//        memset(num2, 0, sizeof(num2));
//        memset(sum, 0, sizeof(sum));
//    }
//    return 0;
//}

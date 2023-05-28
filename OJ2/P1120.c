////
////#include <stdio.h>
////#include <string.h>
////#define MAX 200 //定义最大位数
////int main()
////{
////    char a[MAX+1], b[MAX+1]; //定义两个字符数组，多一位用于存放'\0'
////    int c[MAX+2] = {0}; //定义一个整型数组，多两位用于存放进位和'\0'
////    int len_a, len_b, len; //定义两个输入数和结果数的长度
////    int i, j, k; //定义循环变量
////    scanf("%s%s", a, b); //输入两个大整数
////    len_a = strlen(a); //计算第一个数的长度
////    len_b = strlen(b); //计算第二个数的长度
////    len = len_a > len_b ? len_a : len_b; //取较大的长度作为结果数的长度
////    j = len_a - 1; //指向第一个数的最低位
////    k = len_b - 1; //指向第二个数的最低位
////    for(i = 0; i < len; i++) //从低位到高位逐位相加
////    {
////        if(j >= 0) c[i] += a[j--] - '0'; //如果第一个数还有未处理的位，加到结果中，并转换为数字
////        if(k >= 0) c[i] += b[k--] - '0'; //如果第二个数还有未处理的位，加到结果中，并转换为数字
////        if(c[i] > 9) //如果当前位大于9，需要进位
////        {
////            c[i+1]++; //高一位加一
////            c[i] -= 10; //当前位减十
////        }
////    }
////    if(c[len]) printf("%d", c[len]); //如果最高位有进位，先输出它
////    for(i = 1; i <=len-1; i++) printf("%d", c[i]); //反向输出结果数组中的数字 
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

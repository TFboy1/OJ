//#include <stdio.h>
//#include <string.h>
//
//void multiply(char num1[], char num2[], char result[]) {
//    int len1 = strlen(num1);
//    int len2 = strlen(num2);
//    int len = len1 + len2; // 结果的最大位数
//    int carry = 0; // 进位
//    int temp; // 临时变量
//   int i,j;
//    // 结果初始化为0
//    for (i = 0; i < len; i++) {
//        result[i] = '0';
//    }
//    result[len] = '\0';
//
//    // 逐位相乘
//    for (i = len1 - 1; i >= 0; i--) {
//        carry = 0; // 每次乘法后进位归零
//        for (j = len2 - 1; j >= 0; j--) {
//            temp = (num1[i] - '0') * (num2[j] - '0') + carry + (result[i + j + 1] - '0');
//            carry = temp / 10; // 计算进位
//            result[i + j + 1] = temp % 10 + '0'; // 计算当前位的值
//        }
//        result[i] += carry; // 将进位累加到更高位
//    }
//}
//
//int main() {
//    char num1[101];
//    char num2[101];
//    char result[201]; // 结果最大可能位数为两个数的长度之和
//    	int len = strlen(result);
//   int i = 0;	
//    
//    // 读取两个数
//	scanf("%s%s", num1, num2);
//	
//		multiply(num1, num2, result);
//    
//    while (result[i] == '0' && i < len - 1) {
//        i++;
//	}
//    printf("%s\n", result+i);
//   
//
//   
//
//    return 0;
//}

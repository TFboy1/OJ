//#include <stdio.h>
//#include <string.h>
//
//void multiply(char num1[], char num2[], char result[]) {
//    int len1 = strlen(num1);
//    int len2 = strlen(num2);
//    int len = len1 + len2; // ��������λ��
//    int carry = 0; // ��λ
//    int temp; // ��ʱ����
//   int i,j;
//    // �����ʼ��Ϊ0
//    for (i = 0; i < len; i++) {
//        result[i] = '0';
//    }
//    result[len] = '\0';
//
//    // ��λ���
//    for (i = len1 - 1; i >= 0; i--) {
//        carry = 0; // ÿ�γ˷����λ����
//        for (j = len2 - 1; j >= 0; j--) {
//            temp = (num1[i] - '0') * (num2[j] - '0') + carry + (result[i + j + 1] - '0');
//            carry = temp / 10; // �����λ
//            result[i + j + 1] = temp % 10 + '0'; // ���㵱ǰλ��ֵ
//        }
//        result[i] += carry; // ����λ�ۼӵ�����λ
//    }
//}
//
//int main() {
//    char num1[101];
//    char num2[101];
//    char result[201]; // ���������λ��Ϊ�������ĳ���֮��
//    	int len = strlen(result);
//   int i = 0;	
//    
//    // ��ȡ������
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

//#include <stdio.h>
//
//void generate_snake_matrix(int n) {
//    int matrix[121][121] = {0};  // ���� n x n �ķ���
//    int num = 1;  // Ҫ��������
//
//    // �����������з�ʽ���Ԫ��
//    for (int i = 0; i < n; i++) {
//        if (i % 2 == 0) {
//            // ż���д��ϵ������
//            for (int j = 0; j < n; j++) {
//                matrix[j][i] = num++;
//            }
//        }
//        else {
//            // �����д��µ������
//            for (int j = n - 1; j >= 0; j--) {
//                matrix[j][i] = num++;
//            }
//        }
//    }
//
//    // ������ɵ����η���
//    
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            printf("%d ", matrix[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//int main() {
//    int n;
//    
//    while (scanf("%d", &n) != EOF)
//    {
// generate_snake_matrix(n);
//    printf("\n");
//    }
//   
//
//    return 0;
//}

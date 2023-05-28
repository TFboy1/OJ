//#include <stdio.h>
//
//void generate_snake_matrix(int n) {
//    int matrix[121][121] = {0};  // 定义 n x n 的方阵
//    int num = 1;  // 要填充的数字
//
//    // 按照蛇形排列方式填充元素
//    for (int i = 0; i < n; i++) {
//        if (i % 2 == 0) {
//            // 偶数列从上到下填充
//            for (int j = 0; j < n; j++) {
//                matrix[j][i] = num++;
//            }
//        }
//        else {
//            // 奇数列从下到上填充
//            for (int j = n - 1; j >= 0; j--) {
//                matrix[j][i] = num++;
//            }
//        }
//    }
//
//    // 输出生成的蛇形方阵
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

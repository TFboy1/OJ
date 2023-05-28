////#include <iostream>
////#include <vector>
////using namespace std;
////
////const int MAXN = 20005; // 一维数组的最大长度
////int c[MAXN]; // 存储展开后的杨辉三角
////int k = 150; // 预处理的行数，可根据实际情况调整
////
////int main() {
////    // 预处理杨辉三角的前 k 行
////    vector<vector<int>> triangle(k, vector<int>(k)); // 二维数组存储杨辉三角
////    for (int i = 0; i < k; i++) {
////        triangle[i][0] = triangle[i][i] = 1;
////        for (int j = 1; j < i; j++) {
////            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
////        }
////    }
////
////    // 将杨辉三角展开成一维数组
////    int n = 0; // 数组长度
////    for (int i = 0; i < k; i++) {
////        for (int j = 0; j <= i/2; j++) {
////            c[n++] = triangle[i][j];
////        }
////        for (int j = i/2-1; j >= 0; j--) {
////            c[n++] = triangle[i][j];
////        }
////    }
////
////    // 在数组中查找第一个值为 N 的元素
////    int N;
////    cin >> N;
////    for (int i = 0; i < n; i++) {
////        if (c[i] == N) {
////            cout << i+1 << endl;
////            return 0;
////        }
////    }
////    cout << "-1" << endl;
////    return 0;
////}
//#include <iostream>
//using namespace std;
//
//// 递归函数，返回第一次出现N的位置
//int find(int n, int row, int col) {
//    if (row < 0 || col < 0) return -1; // 边界条件1
//    if (row == 0 && col == 0) return 1; // 边界条件2
//    if (col > row) return -1; // 边界条件3
//    if (n == 1) return 1; // 边界条件4
//    // 递归计算
//    int left = find(n-1, row-1, col-1);
//    int right = find(n-1, row-1, col);
//    return (left != -1) ? left+1 : (right != -1) ? right+1 : -1;
//}
//
//int main() {
//    int n;
//    cin >> n;
//    int ans = -1;
//    for (int i = 0; i <= n; i++) {
//        ans = find(n, i, i/2);
//        if (ans != -1) break;
//    }
//    cout << ans << endl;
//    return 0;
//}

////#include <iostream>
////#include <vector>
////using namespace std;
////
////const int MAXN = 20005; // һά�������󳤶�
////int c[MAXN]; // �洢չ������������
////int k = 150; // Ԥ������������ɸ���ʵ���������
////
////int main() {
////    // Ԥ����������ǵ�ǰ k ��
////    vector<vector<int>> triangle(k, vector<int>(k)); // ��ά����洢�������
////    for (int i = 0; i < k; i++) {
////        triangle[i][0] = triangle[i][i] = 1;
////        for (int j = 1; j < i; j++) {
////            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
////        }
////    }
////
////    // ���������չ����һά����
////    int n = 0; // ���鳤��
////    for (int i = 0; i < k; i++) {
////        for (int j = 0; j <= i/2; j++) {
////            c[n++] = triangle[i][j];
////        }
////        for (int j = i/2-1; j >= 0; j--) {
////            c[n++] = triangle[i][j];
////        }
////    }
////
////    // �������в��ҵ�һ��ֵΪ N ��Ԫ��
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
//// �ݹ麯�������ص�һ�γ���N��λ��
//int find(int n, int row, int col) {
//    if (row < 0 || col < 0) return -1; // �߽�����1
//    if (row == 0 && col == 0) return 1; // �߽�����2
//    if (col > row) return -1; // �߽�����3
//    if (n == 1) return 1; // �߽�����4
//    // �ݹ����
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

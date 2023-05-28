//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 210;
//
//int n, m;
//int a[N][N], f[N][N];
//
//int main()
//{
//    while (cin >> n >> m)
//    {
//        memset(f, 0, sizeof f);
//
//        for (int i = 1; i <= n; i ++ )
//            for (int j = 1; j <= m; j ++ )
//                cin >> a[i][j];
//
//        for (int i = 1; i <= n; i ++ )
//            for (int j = 1; j <= m; j ++ )
//                f[i][j] = max(f[i - 1][j], f[i][j - 1]) + a[i][j];
//
//        cout << f[n][m] << endl;
//    }
//
//    return 0;
//}

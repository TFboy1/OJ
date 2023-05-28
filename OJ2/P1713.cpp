//#include <stdio.h>
//
//int f(int m, int n)
//{
//    if (m == 0 || n == 1) return 1;
//    if (m < n) return f(m, m);
//    return f(m, n - 1) + f(m - n, n);
//}
//
//int main()
//{
//    int m, n;
//    while (scanf("%d %d", &m, &n) != EOF) {
//        printf("%d\n", f(m, n));
//    }
//    return 0;
//}

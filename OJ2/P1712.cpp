//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//// 计算第n个数所在的数位
//int get_digits(int n)
//{
//    int digits = 1;
//    long long base = 9, k = 1;
//    while (n > digits * base) {
//        n -= digits * base;
//        digits++;
//        base *= 10;
//        k *= 10;
//    }
//    int num = k + (n - 1) / digits;
//    int i = (n - 1) % digits;
//    while (i < digits - 1) {
//        num /= 10;
//        i++;
//    }
//    return num % 10;
//}
//
//int main()
//{
//    int k;
//    cin >> k;
//    while (k--) {
//        int n;
//        cin >> n;
//        cout << get_digits(n) << endl;
//    }
//    return 0;
//}

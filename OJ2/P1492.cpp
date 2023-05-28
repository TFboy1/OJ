//#include<stdio.h>
//
//int main() {
//    int k, n, price = 200, income, year;
//    while(scanf("%d%d", &n, &k) != EOF) {
//        price = 200+k;
//        year = 1;
//        income = n;
//        if(n <= k) {
//            printf("Impossible\n");
//            continue; //直接进入下一次循环
//        }
//        while(price > income) {
//            price = price + k;
//            income = income + n;
//            year++;
//            if(year > 20) {
//                printf("Impossible\n");	
//                break; //跳出循环
//            }
//        }
//        if(year <= 20) {
//            printf("%d\n", year);
//        }
//    }
//    return 0;
//}

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
//            continue; //ֱ�ӽ�����һ��ѭ��
//        }
//        while(price > income) {
//            price = price + k;
//            income = income + n;
//            year++;
//            if(year > 20) {
//                printf("Impossible\n");	
//                break; //����ѭ��
//            }
//        }
//        if(year <= 20) {
//            printf("%d\n", year);
//        }
//    }
//    return 0;
//}

////#include <stdio.h>
////
////#define MAX_M 1001 // 最大草药数量
////
////typedef struct {
////    int time; // 采集时间
////    int value; // 价值
////    double efficiency; // 效率
////    int id; // 编号
////} Herb;
////
////int main() {
////    int T, M;
////    Herb v[MAX_M]; // 用结构体数组存储草药信息
////    int i, j;
////    int time = 0, value = 0;
////    scanf("%d%d", &T, &M) ;
////        // 输入每种草药的采集时间和价值
////        for (i = 0; i < M; i++) {
////            scanf("%d%d", &v[i].time, &v[i].value);
////            v[i].efficiency = (double)v[i].value / v[i].time; // 计算效率
////            v[i].id = i; // 设置草药编号
////        }
////
////        // 根据效率降序对草药进行排序（使用快速排序）
////        for (i = 0; i < M - 1; i++) {
////            for (j = i + 1; j < M; j++) {
////                if (v[i].efficiency < v[j].efficiency) {
////                    Herb temp = v[i];
////                    v[i] = v[j];
////                    v[j] = temp;
////                }
////            }
////        }
////
////        // 在给定时间限制（T）内尽可能多地采集草药
////        i = 0;time=0;value=0;
////        while (time <= T && i < M) {
////            if (v[i].time <= T - time) { 
////				// 草药的采集时间小于等于剩余时间
////                value += v[i].value;
////                time += v[i].time;
////            } 
////            i++;
////        }
////
////        // 输出能够采集的草药的最大总价值
////        printf("%d", value);
////    
////
////    return 0;
////}
//
//#include <stdio.h>
//
//int m, n;
//int wi[11234], ci[21241];
//int f[8000][8000];
//
//int main() {
//    while (scanf("%d %d", &m, &n) != EOF)
//    {
//        for (int i = 1; i <= n; i++) {
//            scanf("%d %d", &wi[i], &ci[i]);
//        }
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= m; j++) {
//                if (j >= wi[i] && f[i - 1][j - wi[i]] + ci[i] > f[i - 1][j]) {
//                    f[i][j] = f[i - 1][j - wi[i]] + ci[i];
//                }
//                else {
//                    f[i][j] = f[i - 1][j];
//                }
//            }
//        }
//        printf("%d\n", f[n][m]);
//    }
//  
//
//    return 0;
//}
//

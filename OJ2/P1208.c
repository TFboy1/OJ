////#include <stdio.h>
////
////#define MAX_M 1001 // ����ҩ����
////
////typedef struct {
////    int time; // �ɼ�ʱ��
////    int value; // ��ֵ
////    double efficiency; // Ч��
////    int id; // ���
////} Herb;
////
////int main() {
////    int T, M;
////    Herb v[MAX_M]; // �ýṹ������洢��ҩ��Ϣ
////    int i, j;
////    int time = 0, value = 0;
////    scanf("%d%d", &T, &M) ;
////        // ����ÿ�ֲ�ҩ�Ĳɼ�ʱ��ͼ�ֵ
////        for (i = 0; i < M; i++) {
////            scanf("%d%d", &v[i].time, &v[i].value);
////            v[i].efficiency = (double)v[i].value / v[i].time; // ����Ч��
////            v[i].id = i; // ���ò�ҩ���
////        }
////
////        // ����Ч�ʽ���Բ�ҩ��������ʹ�ÿ�������
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
////        // �ڸ���ʱ�����ƣ�T���ھ����ܶ�زɼ���ҩ
////        i = 0;time=0;value=0;
////        while (time <= T && i < M) {
////            if (v[i].time <= T - time) { 
////				// ��ҩ�Ĳɼ�ʱ��С�ڵ���ʣ��ʱ��
////                value += v[i].value;
////                time += v[i].time;
////            } 
////            i++;
////        }
////
////        // ����ܹ��ɼ��Ĳ�ҩ������ܼ�ֵ
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

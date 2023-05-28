//#include<stdio.h>
//
//void bubbleSort (int arr[], int len) {
//    int  temp;
//    int i, j;
//    for (i=0; i<len-1; i++) /* 外循环为排序趟数，len个数进行len-1趟 */
//        for (j=0; j<len-1-i; j++) { /* 内循环为每趟比较的次数，第i趟比较len-i次 */
//            if (arr[j] < arr[j+1]) { /* 相邻元素比较，若逆序则交换（升序为左大于右，降序反之） */
//                temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
//            }
//        }
//}
//int deal(int v[], int n) {
//    if (n == 2)
//        return v[0]*v[1]+1;
//        v[n - 2] = v[n - 1] * v[n - 2] + 1;
//        v[n - 1] = 0;
//		bubbleSort(v,n);	
//    return deal(v, n - 1);
//}
//int main(){
//	int m,v[10000],i,result;
//	while(scanf("%d",&m)!=EOF){
//		for(i=0;i<=m-1;i++){
//		scanf("%d",&v[i]);
//		}
//		bubbleSort(v,m);	
//
//		result=deal(v,m);
//		printf("%d\n",result);
//	}
//
//}

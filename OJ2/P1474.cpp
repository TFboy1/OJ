//#include<stdio.h>
//
//void bubbleSort (int arr[], int len) {
//    int  temp;
//    int i, j;
//    for (i=0; i<len-1; i++) /* ��ѭ��Ϊ����������len��������len-1�� */
//        for (j=0; j<len-1-i; j++) { /* ��ѭ��Ϊÿ�˱ȽϵĴ�������i�˱Ƚ�len-i�� */
//            if (arr[j] < arr[j+1]) { /* ����Ԫ�رȽϣ��������򽻻�������Ϊ������ң�����֮�� */
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

////#include<stdio.h>
////void bububle(int *v,int n){
////	int i,j,t;
////	for(i=0;i<=n-1;i++){
////		for(j=0;j<=n-1-i;j++){
////			if(v[j]<=v[j+1]){
////			t=v[j];
////		v[j]=v[j+1];
////		v[j+1]=t;
////			}
////		
////		}
////	}
////}
////int main(){
////int i,v[10001],n,max,sum[10001];
////while(scanf("%d",&n)!=EOF)
////{
////for(i=0;i<=n-1;i++){
////scanf("%d",&v[i]);
////}
////
////for(i=0;i<=n-2;i++){
////	sum[i]=v[i]+v[i+1];	
////}
////bububle(sum,n-1);
////max=sum[0];
////printf("%d\n",max);
////}
////
////}
//#include <stdio.h>
//
//int main() {
//    int n, i, sum = 0, max_sum = -60000, num;
//
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        scanf("%d", &num);
//        sum += num;
//        if (sum > max_sum) {
//            max_sum = sum;
//        }
//        if (sum < 0) {
//            sum = 0;
//        }
//    }
//
//    printf("%d\n", max_sum);
//
//    return 0;
//}

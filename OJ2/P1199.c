//#include<stdio.h>
//
//int GCD(int a, int b) {
//  if (b == 0) return a;
//  return GCD(b, a % b);
//}
//int coprime(int a, int b) {
//  // 调用欧几里得算法求GCD
//  int gcd = GCD(a, b);
//  // 如果GCD等于1，返回真；否则返回假
//  return gcd == 1;
//}
////int GCD(int a, int b) {
////  while (b != 0) {
////    int temp = b;
////    b = a % b;
////    a = temp;
////  }
////  return a;
////}
//int main(){
//int n,j,i,v[600],t,m;
//while(scanf("%d",&n)!=EOF){
//	
//if(n==0)
//	break;
//for(i=0;i<=n-1;i++){
//	scanf("%d",&v[i]);
//}
//t=0;
//for(i=0;i<=n-2;i++)
//	for(j=i+1;j<=n-1;j++){
//
//		if(coprime(v[i],v[j]))
//			t++;
//	}
//	printf("%d\n",t);
//}
//}




//#include<stdio.h>
//int GCD(int a,int b){
//	int m=0;
//	if(a>b)
//			
//		{
//			m=b;
//			b=a;
//			a=m;
//		}
//	if(b%a!=0)
//	for(m=2;m<=a;m++)
//			if(b%m==0&&a%m==0)
//				break;
//		if(m>=a)
//			return 1;
//		return 0;
//}
//int main(){
//
//printf("%d",GCD(2,10));
//}
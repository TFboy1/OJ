//#include<stdio.h>
//#include<string.h>
//void cheng(int n){
//	
//	 
//}
//int main(){
//	int n=10,turns;
//	int i,j=0,addto=0,len=1,num,len_answer;
//	char result[3000];
//	scanf("%d",&turns);
//	while(turns--)
//	{scanf("%d",&n);
//	
//	
//	result[0]=1;
//	for(i=1;i<=2999;i++){
//	result[i]=0;
//	}
//	for(i=2;i<=n;i++){
//		
//	for(j=0;j<=len-1;j++){
//		num=result[j]*i+addto;
//		addto=num/10;
//		result[j]=num%10;
//	}
//	
//	while(addto!=0){
//	result[len]=addto%10;
//	addto=addto/10;
//	len++;
//	}}
//	len_answer=len;
//    
//	printf("%d\n",len_answer);
//	}
//	
//	}
//
//
////
////
////
//////#include <stdio.h>
//////void Factorial(int n);//声明函数Factorial
//////int main()//主函数，输入n的值
//////{
//////    int n;
//////    scanf("%d",&n);
//////    Factorial(n);
//////    return 0;
//////}
//////void Factorial(int n)//定义函数Factorial
//////{
//////    int a[10000]={0},i,j,k=0,m=1;
//////    a[0]=1; //初始化数组a，用来存储计算结果
//////    for(i=2;i<=n;i++) //从2开始循环到n，每次循环都将数组a中的每个元素都乘以i（i为当前循环的值）
//////    {
//////        for(j=0;j<m;j++) //遍历数组a中的每个元素
//////        {
//////            a[j]=a[j]*i+k; //将数组a中的每个元素都乘以i（i为当前循环的值），并加上进位k
//////            k=a[j]/10; //计算进位k
//////            a[j]=a[j]%10; //处理进位后，更新数组a中的元素值
//////        }
//////        while(k) //处理最后一次进位
//////        {
//////            a[m]=k%10;
//////            k=k/10;
//////            m++;
//////        }
//////    }
//////    for(i=m-1;i>=0;i--) //将数组a中的元素倒序输出，即为n的阶乘
//////        printf("%d",a[i]);
//////}
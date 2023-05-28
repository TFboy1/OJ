//#include<stdio.h>
//#include<string.h>
//int main(){
//	char num1[201]={'0'},num2[201]={'0'},*x1,*x2 ;int result[400]={0},i,left,right,n1,n2,len1=0,len2=0,lenmin,lenmax;
//	x1=num1;
//	x2=num2;
//	while(scanf("%s%s",x1,x2)!=EOF)
//	{
//	len1=strlen(x1);
//	len2=strlen(x2);	
//	if(len2>=len1){
//	   lenmin=len1;
//	   lenmax=len2;
//	}
//	else
//	{lenmin=len2;
//	lenmax=len1;}
//for(left=0,right=len1-1;left<=right;left++,right--){
//i=num1[left];
//num1[left]=num1[right];
//num1[right]=i;
//}
//for(left=0,right=len2-1;left<=right;left++,right--){
//i=num2[left];
//num2[left]=num2[right];
//num2[right]=i;
//}
//for(i=0;i<=lenmax-1;i++)
//	
//{   n1=num1[i]-'0';
//    n2=num2[i]-'0';
//	if(n1<=0)
//		n1=0;
//	if(n2<=0)
//		n2=0;
//if(n1+n2<=9)
//	result[i]=n1+n2+result[i];
//else{
//	result[i]=(n1+n2)%10+result[i];
//	result[i+1]=1;
//}}
//
//if(result[lenmax]!=0)
//for(i=lenmax;i>=0;i--){
//printf("%d",result[i]);
//}
//else
//for(i=lenmax-1;i>=0;i--){
//printf("%d",result[i]);
//}
//printf("\n");
//	}
//	
//	
//
//}
//
//
////#include <stdio.h>
////#include <string.h>
////#define MAX 201 //定义最大位数
////
//////把整数倒序存储到数组中
////void reverse(char *num, int *a)
////{
////    int i;
////    int len = strlen(num); //求字符串长度
////    for (i = 0; i < len; i++)
////    {
////        a[i] = num[len - 1 - i] - '0'; //倒序存储，并转化为整数
////    }
////}
////
//////大整数相加
////void add(int *a, int *b, int *c)
////{
////    int i;
////    for (i = 0; i < MAX; i++)
////    {
////        c[i] = a[i] + b[i]; //对应位相加
////        if (c[i] >= 10)     //如果有进位
////        {
////            c[i + 1]++;   //高位加一
////            c[i] -= 10;   //本位减十
////        }
////    }
////}
////
//////输出结果
////void print(int *c)
////{
////    int i;
////    int flag = 0; //标记是否遇到第一个非零位
////    for (i = MAX - 1; i >= 0; i--)
////    {
////        if (flag == 0 && c[i] == 0) //如果还没有遇到第一个非零位，且当前位为零，则跳过
////            continue;
////        else                        //否则，标记置一，输出当前位
////            flag = 1;
////        printf("%d", c[i]);
////    }
////}
////
////int main()
////{
////    char num1[MAX + 10], num2[MAX + 10]; //定义两个字符串存储输入的大整数
////    int a[MAX] = {0}, b[MAX] = {0}, c[MAX] = {0}; //定义三个数组存储转化后的大整数和结果
////	while(scanf("%s%s", num1, num2)!=EOF){
////	 reverse(num1, a);                //把第一个大整数倒序存储到数组a中
////    reverse(num2, b);                //把第二个大整数倒序存储到数组b中
////
////    add(a, b, c);                    //计算两个大整数相加的结果，并存储到数组c中
////
////    print(c);  
////	//输出结果
////	printf("\n");
////
////	}
////  
////
////   
////}
////

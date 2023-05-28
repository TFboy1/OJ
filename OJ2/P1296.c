//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include<math.h>
//#define N 100 //定义一个常量N，表示数组的最大大小
//char a[N][N]; //定义一个二维字符数组a，用来存储分型宇宙的图形
//void f(int n,int x,int y) //定义一个递归函数f，用来在数组a中绘制n度的分型宇宙
//{
//	if(n==0) //如果n为0，说明已经到达最小的分型宇宙，只需要在a[x][y]处填上'X'即可
//	{
//		a[x][y]='X';
//		return ;
//	}
//	f(n-1,x,y); //否则，递归地在a中绘制左上角的n-1度的分型宇宙
//	f(n-1,x,y+2*(int)pow(3,n-2)); //递归地在a中绘制右上角的n-1度的分型宇宙
//	f(n-1,x+(int)pow(3,n-2),y+(int)pow(3,n-2)); //递归地在a中绘制中间的n-1度的分型宇宙
//	f(n-1,x+2*(int)pow(3,n-2),y); //递归地在a中绘制左下角的n-1度的分型宇宙
//	f(n-1,x+2*(int)pow(3,n-2),y+2*(int)pow(3,n-2)); //递归地在a中绘制右下角的n-1度的分型宇宙
//}
//
//
//int main()
//{
//	int n,i,j;
//	while(scanf("%d",&n)!=EOF) //循环读入n，直到文件结束
//	{
//		memset(a,' ',sizeof(a)); //初始化数组a为全空格
//		f(n,1,1); //调用f(n,1,1)绘制n度的分型宇宙，从数组a的第一行第一列开始
//		for(i=1;i<=(int)pow(3,n-1);i++) //输出数组a，每行有3^(n-1)个字符
//		{
//			for(j=1;j<=(int)pow(3,n-1);j++)
//			{
//				printf("%c",a[i][j]);
//			}
//			printf("\n");
//		}
//		printf("-\n"); //用'-'分隔每组数据
//	}
//	return 0;
//}

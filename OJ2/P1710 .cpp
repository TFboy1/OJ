//#include<stdio.h>
//
//void Bubble_sort(int arr[], int size)
//{
//	int j,i,tem;
//	for (i = 0; i < size-1;i ++)//size-1����Ϊ�������Լ��Ƚϣ����Աȵ�������һ��
//	{
//		int count = 0;
//		for (j = 0; j < size-1 - i; j++)	//size-1-i����Ϊÿһ�˾ͻ���һ�����Ƚ�
//		{
//			if (arr[j] > arr[j+1])//���������ŷ���ǰһ�����ͺ�һ�����Ƚϣ����ǰ���������һ������λ��
//			{
//				tem = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tem;
//				count = 1;
//				
//			}
//		}
//		if (count == 0)			//���ĳһ��û�н���λ�ã���˵���Ѿ��ź���ֱ���˳�ѭ��
//				break;	
//	}
// 
//}
//
//int main(){
//	int v[1000000],n,i;
//	while(scanf("%d",&n)!=EOF){
//		for(i=0;i<=n-1;i++){
//		scanf("%d",&v[i]);
//
//		}
//		Bubble_sort(v,n);
//		printf("%d %d",v[n-1],v[0]);
//	}
//}
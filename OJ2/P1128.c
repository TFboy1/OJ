//#include<stdio.h>
//int main(){
//	int v[100]={0},i,n=10,m=4,count=1,out=0;
//	scanf("%d%d",&n,&m);
//	for(i=1;i<=n;i++){
//	v[i]=1;
//	}
//	i=1;
//	while(out<n)
//	{	
//	if(m==count&&v[i]!=0)
//	{v[i]=0;
//	printf("%d ",i);
//	i++;
//	count=1;
//	out++;
//	}
//	if(v[i]!=0)
//	count++;
//	i++;		
//	if(i>n)
//	i=1;	
//	
//	
//	
//	}
//	
//}
//
//	/*while(1){
//		for(i=1;i<=m;i++){
//		if(*p==0)
//		p++;
//		p++;
//		}		
//	   point=p-(v+9);
//		if(point>=0)
//			p=v+point;
//	
//	*p=0;
//	for(i=1,k=0;i<=n;i++){
//		if(v[i]==1)
//	      k++;}
//	
//	index=p-(v+1);
//	if(index<=9&&index>0)
//	printf("%d",index);
//	if(k==1)
//		break;*/
//	
//	/*}*/
//
//
////}
//
////#include <stdio.h>
////int main()
////{
////    int n, m; // nΪ������mΪ�����
////    scanf("%d%d", &n, &m); // ����n��m
////    int v[100]; // ����һ����СΪn������v��������ʾÿ�����Ƿ���У�0��ʾ��Ȧ�ڣ�1��ʾ����
////    for (int i = 0; i < n; i++) // ��ʼ������v������Ԫ�ض�Ϊ0
////    {
////        v[i] = 0;
////    }
////    int p = 0; // ����һ��ָ��p��������������v
////    int count = 0; // ����һ��������count��������¼����
////    int left = n; // ����һ������left��������¼��ʣ�¶�������Ȧ��
////    while (left > 0) // ����������Ȧ��ʱ��ѭ��ִ�����²���
////    {
////        if (v[p] == 0) // ���pָ���Ԫ��Ϊ0����ʾ��λ�û���Ȧ��
////        {
////            count++; // ������һ
////            if (count == m) // �����������m����ʾ��λ��Ҫ����
////            {
////                v[p] = 1; // ����λ����Ϊ1����ʾ����
////                printf("%d ", p + 1); // �����λ�õı�ţ���1��ʼ��
////                count = 0; // ��������
////                left--; // ʣ��������һ
////            }
////        }
////        p++; // ָ��p����ƶ�һ��λ��
////        if (p == n) // ���p��������ĩβ���ص����鿪ͷ����������ģ��ѭ����
////        {
////            p = 0;
////        }
////    }
////    printf("\n"); // ������з���������
////
////}
//
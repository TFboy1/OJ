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
//////void Factorial(int n);//��������Factorial
//////int main()//������������n��ֵ
//////{
//////    int n;
//////    scanf("%d",&n);
//////    Factorial(n);
//////    return 0;
//////}
//////void Factorial(int n)//���庯��Factorial
//////{
//////    int a[10000]={0},i,j,k=0,m=1;
//////    a[0]=1; //��ʼ������a�������洢������
//////    for(i=2;i<=n;i++) //��2��ʼѭ����n��ÿ��ѭ����������a�е�ÿ��Ԫ�ض�����i��iΪ��ǰѭ����ֵ��
//////    {
//////        for(j=0;j<m;j++) //��������a�е�ÿ��Ԫ��
//////        {
//////            a[j]=a[j]*i+k; //������a�е�ÿ��Ԫ�ض�����i��iΪ��ǰѭ����ֵ���������Ͻ�λk
//////            k=a[j]/10; //�����λk
//////            a[j]=a[j]%10; //�����λ�󣬸�������a�е�Ԫ��ֵ
//////        }
//////        while(k) //�������һ�ν�λ
//////        {
//////            a[m]=k%10;
//////            k=k/10;
//////            m++;
//////        }
//////    }
//////    for(i=m-1;i>=0;i--) //������a�е�Ԫ�ص����������Ϊn�Ľ׳�
//////        printf("%d",a[i]);
//////}
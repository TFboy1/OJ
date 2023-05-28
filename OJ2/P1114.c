//#include<stdio.h>
//int main(){
//	int v[10][10]={0},i,j,n=5,t=1,m;
//	//scanf("%d",&n);
//	for(i=0;i<=n-1;i++)
//		for(j=0;j<=n-1;j++){
//		v[i][j]=0;
//		}
//		j=0;i=0;
//		while(j<=n-1&&v[i][j]==0){
//				j++;
//			}
//		j--;
//		while(t<=n*n){
//			while(v[i][j]!=0)
//			{
//				j++;
//			}
//			while(j<=n-1&&v[i][j]==0){
//			v[i][j]=t;
//			t++;
//			}
//			while(i<=n-1&&v[i][j]==0)
//			{
//				v[i][j]=t;
//				t++;
//				i++;
//			}
//			if(t>n*n)break;
//			i--;
//			j--;
//			while(j>=0&&v[i][j]==0){
//			v[i][j]=t;
//				t++;
//				j--;
//			}
//			j++;
//			if(t>n*n)break;
//			while(i>=0){
//				v[i][j]=t;
//				t++;
//			i--;
//			}
//			if(t>n*n)break;
//			i++;
//			
//
//		}
//		/*j=0;i=0;
//		while(t<=n*n){
//		for(;j<=n-1&&v[i][j]==0;j++){
//		
//		}
//		j--;
//				for(;i<=n-1;i++){
//			     v[i][j]=t;
//				 t++;
//			}
//				i--;j--;
//			
//				for(;j>=0;j--)
//				{	v[i][j]=t;
//				t++;
//				}
//				j++;
//				i--;
//				while(i>=0){
//				v[i][j]=t;
//				t++;
//				i--;
//				}
//		}*/
//		
//		
//
//		for(i=0;i<=n-1;i++)
//		{for(j=0;j<=n-1;j++){
//	
//		printf("%d ",v[i][j]);
//	
//		}
//		printf("\n");
//		}
//		
//}

//#include<stdio.h>
//int days(int day1,int month1,int day2,int month2){
//	int day[]={0,31,28,31,30,31,30,31,31,30,31,30,31},i,j,s1=0,s2=0;
//	for(i=1;i<=month1-1;i++){
//	s1=s1+day[i];
//	}
//	s1=s1+day1;
//	for(i=1;i<=month2-1;i++){
//	s2=s2+day[i];
//	}
//	s2=s2+day2;
//	return s2-s1;
//}
//int main(){
//int month1=2,month2=3,day1=28,day2=2,turns=2,i,j;
//int dayss;
//long num=10,result=1;
//scanf("%d",&turns);
//for(j=1;j<=turns;j++){
//scanf("%d%d%ld%d%d",&month1,&day1,&num,&month2,&day2);
//dayss=days(day1,month1,day2,month2);
//result=num;
//for(i=1;i<=dayss;i++){
//result=result*2;
//}
//printf("%ld\n",result);
//}
//}
//

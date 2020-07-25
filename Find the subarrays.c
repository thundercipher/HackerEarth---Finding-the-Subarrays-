#include <stdio.h>
int b[2009][2009];double sum[2009][2009];
int main(){
	int num;
	scanf("%d", &num);int a[num+1];   int count=0;double s=0,d,k;
	for(int i=1;i<=num;i++)
	{
		scanf("%d", &a[i]); s=s+a[i]; 
	}  for(int i=1;i<=num;i++)
	{ 
	for(int j=i;j<=num;j++){sum[i][j]=0;}}
	 for(int i=1;i<=num;i++)
	{ sum[i][i]=a[i];b[i][i]=0;
	for(int j=i+1;j<=num;j++)
	   {   
		sum[i][j]=sum[i][j-1]+a[j];b[i][j]=0;
		}
		}
	for(int i=1;i<=num;i++)
	{ 
	for(int j=i;j<=num;j++)
	   {   if((j-i+1)==num){b[i][j]=1;count++;continue;}
		   d=(s-sum[i][j])/(num-j+i-1);k=sum[i][j]/(j-i+1);
		   if(d<k)
		  { b[i][j]=1;count++;
	    }
		  
	    }
		}
		printf("%d\n",count);
		 for(int i=1;i<=num;i++)
	{
	for(int j=i;j<=num;j++)
	   { 
		   if(b[i][j]==1)
		   printf("%d %d\n",i,j);
	     }
		 }
}

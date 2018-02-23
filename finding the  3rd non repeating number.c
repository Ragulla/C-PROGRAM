#include<stdio.h>
#include<string.h>
int main() {
int i,j,n,count=0,flag=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
 count=0;
 for(j=0;j<n;j++)
 {
 if(a[i]==a[j])
     count++;
     
 }if(count==1)
    flag++;
  if(flag==3)
  {
     printf("%d",a[i]);
     break;
  }

}
}
  

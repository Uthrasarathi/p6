#include<stdio.h>
#include<conio.h>
int main()
{
int c,d,m1[10000]={-1},m2[10000]={0},i;
char a[100],b[100];
scanf("%s",a);
c=strlen(a);
scanf("%s",b);
d=strlen(b);
if(c!=d)
{
return 0;
}
else
{
for(i=0;i<=c;i++)
{
if(m1[a[i]]==-1)
{
if(m2[a[i]]==1)
return 0;
m1[a[i]]=b[i];
m2[b[i]]=1;
}
else if(m1[a[i]]!=b[i])
return 0;
}
return 1;
getch();
}
}

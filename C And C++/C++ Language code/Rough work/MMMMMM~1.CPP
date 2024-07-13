#include <stdio.h>
#include<conio.h>
#include <string.h>
void main()

{
clrscr();

int i,j,count=0,a[58]={0,0,0,0,0,0,0,0,0};

char *ch;

scanf("%[^\n]",ch);

for(i=0;i<strlen(ch);i++)

{

if((ch[i]>='0')&&(ch[i]<='9'))

{

count=0;

for(j=0;j<strlen(ch);j++)

{
if(ch[i]==ch[j])

{
count++;
}
}

a[ch[i]] = count;

}
}


for(i=48;i<58;i++)
{
printf("%d\n",a[i]);
}
getch();
}
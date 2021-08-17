#include<stdio.h>
#include<string.h>

void concatenatestr(char str1[] ,char str2[])
{
int i,len=0;
while(str1[len]!='\0')
++len;
for(i=0;str1[i]!='\0';i++,++len)
str1[len]=str2[i];
str1[len]='\0';
printf(" str1 %s\n",str1);
//finding length of string	
for(i=0;str1[i]!='\0';i++);
printf("length of str1 %d\n",i);
}

int main()
{
char str1[100],str2[100];
//gets(str1);
fgets(str1,100,stdin);
str1[(strlen(str1)-1)]=0;
//scanf("%s",str2);
fgets(str2,100,stdin);
str2[(strlen(str2)-1)]=0;
//gets(str2);
concatenatestr(str1,str2);

}
/*#include<stdio.h>
#include<string.h>
int main()
{
char str[]="hell0";
int i;
for(i=0;str[i]!='\0';i++);
printf("length of str %d\n",i);
}*/

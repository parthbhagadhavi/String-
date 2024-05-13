



#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
int e=0;
char hey[100];
clrscr();
printf("enter any string \n");
gets(hey);

while(e<100){
if(hey[e]>='a'&&hey[e]<='z'){
hey[e]=hey[e]-32;

}
e++;
}
printf("%s",hey);

getch();


}


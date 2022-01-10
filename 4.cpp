//Создать список фамилий в виде одной символьной строки. В цикле в режиме диалога вводить фамилию и выводить сообщение, есть ли такой человек в списке.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
int main(){
char ch,s[]="1. Иванов И.И. 2. Петров П.П. 3. Сидоров С.С. 4. Александров А.А.",*str;
char* s1=(char*)malloc(10);
do{
printf("Введите фамилию:\n");
      str=NULL;
      gets(s1);
      str=strstr(s,s1);   
      if(str)
printf("Человек найден под номером %c\n",str[-3]);
    else
printf("Человек остутствует.\n");
printf("Повторить поиск? (y/n): ");
ch=getch();
printf("\n");
} while(ch=='y');
free(s1);
return 0; }

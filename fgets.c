#include<stdio.h>
#define STLEN 14
int main(void)
{
	char words[STLEN];

	puts("enter a string please");
	fgets(words,STLEN,stdin);
	printf("your string twice (pusts(),then fputs:())\n");
	puts(words);
	fputs(words, stdout);
	puts("输入一个字符串：");
	fgets(words, STLEN, stdin);
	printf("你输入的字符串将输出两次 \n");
	puts(words);
	fputs(words, stdout);
	puts("Done");

	return 0;
}

#include <stdio.h>

char compare(char *str1, char *str2);

int main() {
	char str1[20]="hello";
	char str2[20]="hi";

	if(compare(str1,str2)) {
		printf("%s와 %s는 같은 문장입니다.\n", str1, str2);
	}
	else {
		printf("%s와 %s는 다른 문장입니다.\n", str1, str2);
	}
	return 0;
}

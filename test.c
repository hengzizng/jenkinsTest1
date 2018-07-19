#include <stdio.h>

char compare(char *str1, char *str2);

int main() {
	char str1[20]="hello";
	char str2[20]="hi";

	if(compare(str1,str2)) {
		printf("%s and %s are same sentense.\n", str1, str2);
	}
	else {
		printf("%s and %s are different sentense.\n", str1, str2)
	}
	str2[50] = 'a';
	return 0;
}

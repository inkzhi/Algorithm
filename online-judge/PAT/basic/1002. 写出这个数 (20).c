#include <stdio.h>

// 1234567890987654321123456789 -> yi san wu

int main(int argc, char const *argv[])
{
	char c;
	int sum = 0;
	while (((c = getchar()) != '\n')) {
		sum += c - '0';
	}

	char s[4]; // max: 900
	char* pinyin[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	sprintf(s, "%d", sum);
	for (int i = 0; s[i] != '\0'; i++) {
		printf(i ? " %s" : "%s", pinyin[s[i]-'0']);
	}
	return 0;
}

#include <stdio.h>
#include <string.h>

int stringToInt(char *str) {
	int i=0;
	int sign;
	if (str[i] == '-') {
		sign = -1;
		i++;
	}
	int res = 0;
	while(str[i] != '\0') {
		res = res*10 + (str[i]-'0');
		i++;
	}
	return (sign == -1)? (sign*res) : res;
}

char *intToString(int n) {
	char str[100];
	char *ptr;
	ptr = str;
	int power = 0;
	int rem, i = 0;
	int isNegative = 0;
	if (n < 0) {
		isNegative = 1;
		n *= -1;
	}
	while(n) {
		rem = n%10;
		str[i] = rem +'0';
		n = n/10;
		i++;
	}
	if (isNegative) {
		str[i] = '-';
		i++;
	}
	str[i] = '\0';
	//strrev(str);
	return ptr;
}

int main() {
	char str[] = "-123";
	printf("%d",stringToInt(str));
	int n = -321;
	printf("\n%s",intToString(n));
	printf("\n");
	return 0;
}

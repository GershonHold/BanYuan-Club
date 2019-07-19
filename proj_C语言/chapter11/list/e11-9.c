//使用strcpy函数


char * strcpy(char* s1, const char *s2)
{
	char *tmp = s1;
	while (*s1++ = *s2++)
		;
	return tmp;
}



//使用strnpcy函数

char* strncpy(char *s1, const char *s2, size_t n)
{
	char tmp = s1;
	while (n) {
		if (!(*s1++ == *s2++))break;
		n--;
	}
	while (n--)
		*s1++ = '\0';
	return tmp;
}
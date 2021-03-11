#ifndef HOLBERTON
#define HOLBERTON

int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_numbers(const char *separator, const unsigned int n, ...);

typedef struct printargument
{
	char *typeargument;
	void (*func)();
} printargument;

void print_c(va_list valist);
void print_i(va_list valist);
void print_f(va_list valist);
void print_s(va_list valist);

#endif

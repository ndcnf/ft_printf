#include "ft_printf.h"
#include "libft_originals/ft_strlen.c"

char    *ft_printstr(const char *s, ...)
{
	va_list	args;
    int     i;
    char    *str;

    if (!s)
        return (NULL);
    str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    va_start(args, s);
    i = 0;
    while (n[i])
    {
        str[i] +=(char)va_arg(args, int);
        i++;
    }
    str[i] = '\0';
    return (str);
}

int main(void)
{
    char    *str;

    str = "le chien aime la nuit.";
    printf
}
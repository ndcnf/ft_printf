#include "ft_printf.c"

int main(void)
{
    char    *str0;
    char    *str1;
    char    *str2;
    char    *str3;
    int     is_trap;

    str0 = "123456789";
    str1 = "le chien danse dans le sable";
    str2 = "les chouettes ne sont pas credibles";
    str3 = "il fait un peu froid, non ?";
    is_trap = 168;

    ft_printf("str0 : %s\nstr2 : %s\nstr3 : %s\npas de str4 : %d\n\n", str0, str2, str3, is_trap);
    return (0);
}
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
int    ft_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int ft_putstr(char *s)
{
    int ret;

    ret = 0;
    if (!s)
        s = "(null)";
    while (*s)
    {
        ret++;
        ft_putchar(*s);
        s++;
    }
    return (ret);
}

int	ft_intlen(long long int n)
{
	int	ret;

	ret = 1;
	while (n >= 10)
	{
		ret++;
		n = n / 10;
	}
	return (ret);
}

int ft_putnbr(long long int n, int plus, int iter, int ret)
{
    iter++;
    if (plus >= 1)
    {
        if (n > 0)
        {
            if (plus == 1)
                ft_putchar('+');
            if (plus == 2)
                ft_putchar(' ');
        }
        ret++;
    }
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
    ret = ft_intlen(n);
	if (n < 0)
	{
        ft_putchar('-');
		n = n * -1;
        ret++;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, 0, iter, ret);
		n = n % 10;
	}
	if (n < 10)
		ft_putchar(n + '0');
    return (ret);
}

int	ft_hexlen(long long int n)
{
	int	ret;

	ret = 1;
	while (n >= 16)
	{
		ret++;
		n = n / 16;
	}
	return (ret);
}

int ft_puthex(unsigned long n, int may)
{
    int ret;
    int sum;

    if (may == 'X')
        sum = 55;
    else
        sum = 87;
    ret = ft_hexlen(n);
    if (n >= 15)
    {
        ft_puthex(n / 16, may);
        n = n % 16;
    }
    if (n > 9)
        ft_putchar(n + sum);
    if (n < 9)
        ft_putchar(n + '0');
    return (ret);
}


static int flags(va_list pointer, char *args, int plus)
{
    int ret;

    ret = 0;
    args++;
    if (*args == '+' || *args == ' ')
    {
        args++;
        if (*args == '+')
            plus = 1;
        else
            plus = 2;
    }  
    if (*args == 'c')
    {
        ft_putchar((char)va_arg(pointer, int));
        ret++;
    }
    if (*args == 'p')
    {
        ret += ft_putstr("0x");
        ret += ft_puthex((unsigned long)va_arg(pointer, void *), 0);
    }
    if (*args == 's')
        ret += ft_putstr(va_arg(pointer, char *));
    if (*args == 'i' || *args == 'd')
        ret += ft_putnbr((int)va_arg(pointer, int), plus, -1, 0);
    if (*args == 'u')
        ret += ft_putnbr((unsigned int)va_arg(pointer, unsigned int), plus, -1, 0);
    if (*args == 'x' || *args == 'X')
        ret += ft_puthex(va_arg(pointer, unsigned int), *args);
    if (*args == '%')
        ret += ft_putchar('%');
    return (ret);
}

int ft_printf(const char *args, ...)
{
    va_list pointer;
    int ret;
    
    ret = 0;
    va_start(pointer, args);
    while (*args)
    {
        if (!args)
            break ;
        if ( *args == '%')
        {
            ret += flags(pointer, (char *)args, 0);
            args++;
            if (*args == '+' || *args == ' ')
                args++;
        }
        else
        {
            ft_putchar(*args);
            ret++;
        }
        args++;
    }
    return (ret);
}


int main(void)
{
    int vo;
    vo = 2172162;
    ft_printf("puntero: %p hex:%x hex maj:%X", &vo, &vo, &vo);
    printf("\npuntero: %p hex:%x hex maj:%X", &vo, &vo, &vo);
}
#include "libft/libft.h"
#include "printf/ft_printf.h"
#include <fcntl.h>

static int mat_len(char **mat)
{
    int ret = 0;
    while (mat[ret])
        ret++;
    return(ret);
}

static char *ft_higher(char *a)
{
    int index = 0;
    while (a[index] != '\0')
    {
        if (a[index] > 95)
            a[index] = a[index] - 32;
        index++;
    }
    return(a);
}

int main(int argv, char**args)
{
    if (!args[1])
    {
        ft_printf("No has puesto un argumento");
        return(-1);
    }
    if (!args[1] || (!args[2] && ft_strncmp(args[1], "-help", ft_strlen(args[0])) != 0))
    {
        ft_printf("No has puesto un argumento");
        return(-1);   
    }
    if (ft_strncmp(args[1], "-help", ft_strlen(args[1])) == 0)
    {
        ft_printf("/a.out <path txt> <palabra a encontrar>");
        return(0);
    }
    int fd = open(args[1], O_RDONLY);
    if (fd < 0)
    {
        ft_printf("Ha habido un error al abrir el archivo");
        return(-1);
    }
    while (1)
    {
        char *linea = get_next_line(fd);
        if (linea == NULL)
            break;
        char **buffer = ft_split(linea, ' ');
        int size = mat_len(buffer);
        int index = 0;
        while (index < size)
        {
            if (ft_strnstr(buffer[index], args[2], ft_strlen(buffer[index])) != NULL)
            {
                if (ft_strncmp(ft_strnstr(buffer[index], args[2], ft_strlen(buffer[index])), buffer[index], ft_strlen(buffer[index])) == 0)
                {
                    if ((index + 1) >= size)
                        ft_printf("\x1b[32m%s\x1b[m", ft_higher(buffer[index]));
                    else 
                        ft_printf("\x1b[32m%s \x1b[m", ft_higher(buffer[index]));
                }
                else
                {
                    if ((index + 1) >= size)
                        ft_printf("%s", buffer[index]);
                    else 
                        ft_printf("%s ", buffer[index]);
                }
            }
            else
            {
                if ((index + 1) >= size)
                    ft_printf("%s", buffer[index]);
                else 
                    ft_printf("%s ", buffer[index]);
            }
            index++;
        }
    }
    return(0);
}
/*
       .=.A.=.
 __.=./\ / \ /\.=.__
(-.'-;  |   |  ;-'.-)
   \ `\/     \/` /
    ;  `\   /`  ;
    |    | |    |
    ;,"-.-"-.-",;
     \\/^\ /^\//
      \   `   /
       ',___,'
        \\V//
         |||
         |||
         |||*/
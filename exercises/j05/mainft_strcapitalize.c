/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainft_strcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 19:02:08 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/03 23:19:08 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    *ft_strcapitalize(char *str);

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int		main(void)
{
    char    a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_putstr(a);
	ft_putchar('\n');
    printf( "%s\n",ft_strcapitalize(a));
	return (0);
}

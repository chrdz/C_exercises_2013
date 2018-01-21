/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainj07.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/05 12:51:27 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/05 23:29:06 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
        ft_putchar(str[i++]);
}

void    ft_putnbr(int n)
{
    if (n >= 10)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
        ft_putchar(48 + n);
}

void	ft_putint(int *str)
{
	int		i;

	i = 0;
	while (str[i] != 0x0)
	{
		ft_putnbr(str[i]);
		i++;
}

int		*ft_range(int min, int max);
//char	*ft_strdup(char *src);

int		main(void)
{
//    char    a[] = "well hell";
//	printf("%s\n", ft_strdup(a));
//    ft_putstr(ft_strdup(a));
//	printf("%d\n", ft_range(2, 43));
	ft_putint(ft_range(2, 43));
    return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 02:13:39 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/12 16:39:55 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		ft_spy(char *s1, char *s2)
{
	if (!*s1)
		return (0);
	while (*s1)
	{
		if (*s1 == 32)
			s1++;
		else if (*s1 != *s2)
			return (0);
		else if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		argv[i] = ft_strlowcase(argv[i]);
		if (ft_spy(argv[i], "president") ||
			ft_spy(argv[i], "attack") ||
			ft_spy(argv[i], "powers"))
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		i++;
	}
	return (0);
}

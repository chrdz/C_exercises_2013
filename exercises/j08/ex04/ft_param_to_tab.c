/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 17:46:41 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/08 22:08:55 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int		c;
	int		l;
	char	**tab;

	l = 0;
	tab = (t_stock_par **)malloc(sizeof(t_stock_par *) * (ac + 1));
	while (l < (ac + 1))
	{
		*(tab + l) = (t_stock_par *)malloc(sizeof(t_stock_par) * (t_stock_par->size_param);
		l++;
	}
	l = 0;
	while (l < )
	{
		c = 0;
		while (c < 9)
		{
			tab[l][c] = av[l][c];
			c++;
		}
		l++;
	}
	tab[l] = 0;
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 23:12:22 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/12 01:20:50 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int     ft_bouton(int i, int j, int k);

int		main(void)
{
	printf("%d\n", ft_bouton(1,2,3));
    printf("%d\n", ft_bouton(8,2,4));
    printf("%d\n", ft_bouton(2,2,3));
    printf("%d\n", ft_bouton(0,0,0));
	return (0);
}

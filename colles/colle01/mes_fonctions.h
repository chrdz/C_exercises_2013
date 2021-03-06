/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mes_fonctions.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 14:25:59 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/07 17:49:53 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_MES_FONCTIONS_H__
# define __FT_MES_FONCTIONS_H__

# include <unistd.h>

# include <stdlib.h>

int		ft_solution(int pos, char **tab);

int		ft_col(char s, int pos, char **tab);

int		ft_line(char s, int pos, char **tab);

int		ft_squart(char s, int pos, char **tab);

void	ft_putchar(char c);

void	ft_putstr(char *str);

char	**ft_strdup(char **src);

void	ft_print(char **tab);

int     ft_nb_sol(int pos, char **tab, int *sol);

#endif

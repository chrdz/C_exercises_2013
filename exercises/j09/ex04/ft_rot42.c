/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 22:06:50 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/11 22:59:40 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int		i;

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
			*(str + i) = (*(str + i) - 'a' + 42) % 26 + 'a';
		if (*(str + i) >= 'A' && *(str + i) <= 'Z')
			*(str + i) = (*(str + i) - 'A' + 42) % 26 + 'A';
		i++;
	}
	return (str);
}
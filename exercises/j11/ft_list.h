/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crodrigu <crodrigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 02:52:35 by crodrigu          #+#    #+#             */
/*   Updated: 2014/09/10 19:42:56 by crodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

#include <stdlib.h>
#include <unistd.h>

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

void				ft_list_push_front(t_list **begin_list, void *data);
void				ft_list_push_back(t_list **begin_list, void *data);
t_list				*ft_create_elem(void *data);
void				ft_print_list(t_list *list);
void				ft_putchar(char c);

#endif

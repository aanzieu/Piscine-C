/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanzieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/01 19:33:49 by aanzieu           #+#    #+#             */
/*   Updated: 2016/01/19 23:40:59 by aanzieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	if (*begin_list)
	{
		if ((*begin_list)->next)
			ft_list_push_back(&((*begin_list)->next), data);
		else
			(*begin_list)->next = ft_create_elem(data);
	}
	else
		(*begin_list) = ft_create_elem(data);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:22:24 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/28 18:14:42 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstcount(t_list *lst)
{
	int		i;
	t_list	*temp;

	i = 0;
	while (lst != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
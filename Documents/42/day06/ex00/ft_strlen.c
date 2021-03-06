/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rviale <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 15:26:04 by rviale            #+#    #+#             */
/*   Updated: 2016/08/17 15:26:06 by rviale           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		i++;
		j++;
	}
	return (j);
}

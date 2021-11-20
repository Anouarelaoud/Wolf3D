/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 19:13:48 by aait-el-          #+#    #+#             */
/*   Updated: 2018/10/06 22:54:19 by aait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_isdigit(char *line)
{
	size_t		i;

	i = 0;
	while (i < ft_strlen(line))
	{
		if ((line[i] < '0' || line[i] > '9') && line[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

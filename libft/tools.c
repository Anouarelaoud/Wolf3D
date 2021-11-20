/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 17:18:43 by aait-el-          #+#    #+#             */
/*   Updated: 2020/01/07 21:30:46 by aait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			line_lenght(char **line)
{
	int		i;

	i = 0;
	while (line[i])
		i++;
	return (i);
}

void		free_double_pointer(char ***split)
{
	char	**tmp;
	int		i;

	i = 0;
	tmp = *split;
	while (tmp[i])
	{
		free(tmp[i]);
		i++;
	}
	free(tmp);
}

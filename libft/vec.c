/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 20:05:25 by aait-el-          #+#    #+#             */
/*   Updated: 2020/01/07 21:33:40 by aait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec2		vecset(double x, double y)
{
	t_vec2	vector;

	vector.x = x;
	vector.y = y;
	return (vector);
}

t_vec2		vecadd(t_vec2 a, t_vec2 b)
{
	t_vec2	v;

	v.x = a.x + b.x;
	v.y = a.y + b.y;
	return (v);
}

t_vec2		vecsub(t_vec2 a, t_vec2 b)
{
	t_vec2	v;

	v.x = a.x - b.x;
	v.y = a.y - b.y;
	return (v);
}

t_vec2		vecopx(t_vec2 a, double x)
{
	t_vec2	v;

	v.x = a.x * x;
	v.y = a.y * x;
	return (v);
}

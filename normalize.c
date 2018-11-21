/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 17:11:24 by lguiller          #+#    #+#             */
/*   Updated: 2018/11/20 16:10:49 by lguiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvect.h"

double	ft_vecnorm(t_mat3 a)
{
	return (sqrt(a.x * a.x + a.y * a.y + a.z * a.z));
}

t_mat3	ft_vecnormalize(t_mat3 v)
{
	double	d;

	d = ft_vecnorm(v);
	v.x /= d;
	v.y /= d;
	v.z /= d;
	return (v);
}

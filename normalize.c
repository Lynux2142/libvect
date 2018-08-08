/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 17:11:24 by lguiller          #+#    #+#             */
/*   Updated: 2018/08/08 17:34:26 by lguiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvect.h"

double	ft_vect_dist(t_mat3 v)
{
	return (sqrt(pow(v.x, 2.0) + pow(v.y, 2.0) + pow(v.z, 2.0)));
}

t_mat3	ft_normalize(t_mat3 v)
{
	double	d;

	d = ft_vect_dist(v);
	v.x /= d;
	v.y /= d;
	v.z /= d;
	return (v);
}

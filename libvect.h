/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libvect.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 15:36:45 by lguiller          #+#    #+#             */
/*   Updated: 2018/09/07 14:03:33 by lguiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBVECT_H
# define LIBVECT_H

# include <math.h>

typedef struct		s_mat3
{
	double			x;
	double			y;
	double			z;
}					t_mat3;

t_mat3				ft_rot_x(t_mat3 v, double a);
t_mat3				ft_rot_y(t_mat3 v, double a);
t_mat3				ft_rot_z(t_mat3 v, double a);
t_mat3				ft_normalize(t_mat3 v);
double				ft_vect_dist(t_mat3 v);
double				ft_dot_product(t_mat3 u, t_mat3 v);
t_mat3				ft_reverse_vect(t_mat3 v);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libvect.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguiller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 15:36:45 by lguiller          #+#    #+#             */
/*   Updated: 2018/10/23 14:03:57 by lguiller         ###   ########.fr       */
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

typedef struct		s_line
{
	float			slope;
	float			offset;
	t_mat3			a;
	t_mat3			b;
}					t_line;

t_mat3				ft_vecrotx(t_mat3 v, double a);
t_mat3				ft_vecroty(t_mat3 v, double a);
t_mat3				ft_vecrotz(t_mat3 v, double a);
t_mat3				ft_vecnormalize(t_mat3 v);
double				ft_dot_product(t_mat3 u, t_mat3 v);
t_mat3				ft_reverse_vect(t_mat3 v);
t_mat3				ft_vec_intersection(t_line l1, t_line l2);
t_mat3				ft_vecdef(float x, float y, float z);
t_mat3				ft_vecadd(t_mat3 a, t_mat3 b);
t_mat3				ft_vecsub(t_mat3 a, t_mat3 b);
float				ft_vecnorm(t_mat3 a);
t_mat3				ft_cross_product(t_mat3 a, t_mat3 b);
t_mat3				ft_vecscale(t_mat3 a, float s);
t_mat3				ft_vecdiv(t_mat3 a, float s);
t_mat3				ft_cross_product(t_mat3 a, t_mat3 b);
t_mat3				ft_vecrot(t_mat3 a, float xrot, float yrot, float zrot);
float				ft_vecangle(t_mat3 a, t_mat3 b);
double				ft_torad(double x);
double				ft_todeg(double x);

#endif

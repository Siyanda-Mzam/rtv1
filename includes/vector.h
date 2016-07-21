/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simzam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 13:48:00 by simzam            #+#    #+#             */
/*   Updated: 2016/07/17 14:01:45 by simzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H
# include <math.h>

typedef struct		s_3_dimensional_vector
{
	double			x;
	double			y;
	double			z;
}					t_vec3;

t_vec3				vecadd(t_vec3 *a, t_vec3 *b);
t_vec3				vecsub(t_vec3 *a, t_vec3 *b);
t_vec3				vecdiv(t_vec3 *a, t_vec3 *b);
t_vec3				veccross(t_vec3 *a, t_vec3 *b);
double				vecdot(t_vec3 *a, t_vec3 *b);
double				veclength(t_vec3 *vec);
double				vecdistance(t_vec3 *a, t_vec3 *b);
void				vecnorm(t_vec3 *vec);
t_vec3				vecopplus(t_vec3 *a, double x);
t_vec3				vecopdiv(t_vec3 *a, double x);
t_vec3				vecreflect(t_vec3 *i, t_vec3 *n);
void				vecclamp(t_vec3 *vec, double a, double b);
t_vec3				vecprod(t_vec3 *a, t_vec3 *b);
t_vec3				vecopx(t_vec3 *a, double x);
double				ft_clamp(double x, double min, double max);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_vect_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 02:55:37 by qle-guen          #+#    #+#             */
/*   Updated: 2016/11/09 03:03:30 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libdict.h"

void		dict_vect_add(t_dict *d, void *key, t_vect val)
{
	t_dict_ent	*ent;

	ent = dict_find_ent(d, key);
	ent->key = key;
	ent->val = val;
	if (d->used / d->total > GROW_TRESHOLD)
		dict_grow(d);
}

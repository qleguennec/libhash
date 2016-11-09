/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_find_slot.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 00:35:37 by qle-guen          #+#    #+#             */
/*   Updated: 2016/11/09 22:54:10 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libdict.h"

size_t		dict_find_slot(t_dict *d, void *key)
{
	size_t	i;

	i = d->hashf(key) % d->total;
	while (d->ents[i].key)
	{
		if (!d->cmp(key, d->ents[i].key))
			return (i);
		i = (i + 1) % d->total;
	}
	return (i);
}

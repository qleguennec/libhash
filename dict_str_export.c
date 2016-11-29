/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_str_export.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 06:37:49 by qle-guen          #+#    #+#             */
/*   Updated: 2016/11/28 21:17:25 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libdict_intern.h"
#include "../libft/malloc.h"

char		**dict_str_export(t_dict *d, char *sep)
{
	char		**ret;
	size_t		keylen;
	size_t		n;
	size_t		seplen;
	t_dict_ent	*ent;

	MALLOC_N(ret, (d->used + 1));
	n = 0;
	ent = d->ents;
	seplen = ft_strlen(sep);
	while (n < d->used && dict_iter(d, &ent, DICT_USED))
	{
		keylen = ft_strlen(ent->key);
		MALLOC_N(ret[n], 1 + keylen + seplen + ent->val.used);
		ret[n] = ft_mempcpy(ret[n], ent->key, keylen);
		ret[n] = ft_mempcpy(ret[n], sep, seplen);
		ret[n] = ft_mempcpy(ret[n], ent->val.data, ent->val.used);
		*(ret[n]) = '\0';
		ret[n] -= keylen + seplen + ent->val.used;
		ent++;
		n++;
	}
	ret[n] = NULL;
	return (ret);
}

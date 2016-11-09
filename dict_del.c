/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_del.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 02:29:29 by qle-guen          #+#    #+#             */
/*   Updated: 2016/11/09 03:01:37 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libdict.h"

int			dict_del(t_dict *d, char *key)
{
	t_dict_ent	*ent;

	if (!(ent = dict_find_ent(d, key)))
		return (0);
	free(ent->key);
	ent->key = NULL;
	ent->val.used = 0;
	return (1);
}
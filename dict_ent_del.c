/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_ent_del.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 21:46:21 by qle-guen          #+#    #+#             */
/*   Updated: 2016/11/09 22:52:58 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libdict.h"

void	dict_ent_del(t_dict *d, t_dict_ent *ent)
{
	ent->key = NULL;
	ent->val.used = 0;
	d->used--;
}

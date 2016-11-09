/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_str_import.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 05:24:42 by qle-guen          #+#    #+#             */
/*   Updated: 2016/11/09 22:45:49 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libdict.h"
#include "libdict_intern.h"
#include "../libft/malloc.h"
#include "../libft/libft.h"

int		dict_str_import(t_dict *d, char *s, char *sep)
{
	char	*s1;
	char	*key;

	s1 = ft_strstr(s, sep);
	if (!s1)
		return (0);
	MALLOC_N(key, 1 + (s1 - s));
	lstadd(d, key);
	ft_memcpy(key, s, s1 - s);
	key[s1 - s] = '\0';
	dict_str_add(d, key, s1 + ft_strlen(sep));
	return (1);
}

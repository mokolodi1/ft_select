/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_nth_from_array.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 14:28:16 by tfleming          #+#    #+#             */
/*   Updated: 2015/05/14 17:45:35 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** width is the sizeof() for the things in the array
*/

#include "libft.h"

void				ft_remove_nth_from_array(int nth, void *array
												, size_t width, int length)
{
	char			*to_remove;

	to_remove = (((char*)array) + nth * width);
	ft_memmove((void*)to_remove, (void*)(to_remove + width)
				, (length - nth - 1) * width);
}

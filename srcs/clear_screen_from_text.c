/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_screen_from_text.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 11:22:03 by tfleming          #+#    #+#             */
/*   Updated: 2015/04/29 15:46:25 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  tgoto(tgetstr("cm", NULL), row, column)
**  moves cursor to (row, column)
**  tgetstr("ce", NULL)
**  clears from where the cursor is to the end of that line
*/

#include "ft_select.h"

void			clear_screen_from_text(t_environment *env)
{
	int				i;

	i = 0;
	while (i < env->height)
	{
		ft_putstr(tgoto(tgetstr("cm", NULL), 0, i));
		ft_putstr(tgetstr("ce", NULL));
		i++;
	}
}

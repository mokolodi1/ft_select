/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_highlighted_words.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/29 15:12:42 by tfleming          #+#    #+#             */
/*   Updated: 2015/05/14 23:36:23 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

/*
** ve: return the cursor to normal
** cl: clear the entire screen and position the cursor at the upper left corner
*/

void			return_highlighted_words(t_environment *env)
{
	int				i;
	int				print_space_p;

	abort_no_exit(0);
	print_space_p = 0;
	i = 0;
	while (i < env->word_count)
	{
		if (env->highlighted_p[i])
		{
			if (print_space_p)
				ft_putchar(' ');
			ft_putstr(env->words[i]);
			print_space_p = 1;
		}
		i++;
	}
	exit(0);
}

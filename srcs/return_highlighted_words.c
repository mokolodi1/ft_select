/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_highlighted_words.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/29 15:12:42 by tfleming          #+#    #+#             */
/*   Updated: 2015/04/29 19:20:13 by mbooth           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void			return_highlighted_words(t_environment *env)
{
	int				i;
	int				print_space_p;

	clear_screen_from_text(env);
	ft_putstr(tgetstr("cl", NULL));
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
	ft_putstr(tgetstr("ve", NULL));
	exit(0);
}

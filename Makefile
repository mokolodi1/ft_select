#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/04 17:52:57 by tfleming          #+#    #+#              #
#    Updated: 2015/05/15 19:47:33 by tfleming         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME =				ft_select

CC =				gcc
CFLAGS =			-Wall -Werror -Wextra

SRCS =				srcs
INCLUDES =			includes
LIBFT =         	libft
LIBFT_INCLUDES =	$(LIBFT)/includes

INC_FLAGS =         -I $(INCLUDES) -I $(LIBFT_INCLUDES)
LIB_FLAGS =         -L $(LIBFT) -lft -ltermcap\

COMPILED =			main.o \
					input_loop.o \
					refresh_screen.o \
					clear_screen_from_text.o \
					get_longest_word_length.o \
					print_words.o \
					return_highlighted_words.o \
					get_set_environment.o \
					abort_exit.o

all: $(NAME)

$(NAME): $(COMPILED)
	@make -C $(LIBFT)
	@$(CC) $(CFLAGS) -o $(NAME) $(LIB_FLAGS) $(COMPILED)
	@echo "made" $(NAME)

$(COMPILED): %.o: $(SRCS)/%.c
	@$(CC) -c $(CFLAGS) $(INC_FLAGS) $< -o $@

clean:
#	@make -C $(LIBFT) clean
	@-/bin/rm -f $(COMPILED)
	@echo "cleaned" $(NAME)

fclean: clean
#	@make -C $(LIBFT) fclean
	@-/bin/rm -f $(NAME)
	@echo "fcleaned" $(NAME)

re: fclean all

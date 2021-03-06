#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/04 17:52:57 by tfleming          #+#    #+#              #
#    Updated: 2015/05/14 23:05:44 by tfleming         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME =				libft.a

CC =				gcc
FLAGS =				-Wall -Werror -Wextra -g -O0

INCLUDES =			./includes
FT_SRC_DIR =		./libft
FT_LIST_DIR =		./ft_list
FT_PQ_DIR =			./ft_priority_queue
GET_NEXT_LINE_DIR =	./get-next-line
PRINTF_SRC_DIR =	./printf

FT_COMPILED =		ft_islower.o \
					ft_isupper.o \
					ft_tolower.o \
					ft_toupper.o \
					ft_isdigit.o \
					ft_isalpha.o \
					ft_isalnum.o \
					ft_isascii.o \
					ft_isprint.o \
					ft_isspace.o \
					ft_strtolower.o \
					ft_strtoupper.o \
					ft_is_valid_int.o \
					ft_strlen.o \
					ft_strlen_wide.o \
					ft_strnlen.o \
					ft_strchr.o \
					ft_strchr_last.o \
					ft_strcmp.o \
					ft_strncmp.o \
					ft_strstr.o \
					ft_strnstr.o \
					ft_strcpy.o \
					ft_strncpy.o \
					ft_strdup.o \
					ft_strcat.o \
					ft_strncat.o \
					ft_strlcat.o \
					ft_memcpy.o \
					ft_memccpy.o \
					ft_memmove.o \
					ft_memcmp.o \
					ft_memset.o \
					ft_memchr.o \
					ft_bzero.o \
					ft_atoi.o \
					ft_atoi_add_digit.o \
					ft_atoi_add_digit_u.o \
					ft_atoi_add_digit_large.o \
					ft_atoi_add_digit_ularge.o \
					ft_memalloc.o \
					ft_memdel.o \
					ft_strnew.o \
					ft_strdel.o \
					ft_strclr.o \
					ft_striter.o \
					ft_striteri.o \
					ft_strmap.o \
					ft_strmapi.o \
					ft_strequ.o \
					ft_strnequ.o \
					ft_strsub.o \
					ft_strjoin.o \
					ft_strjoinn.o \
					ft_strtrim.o \
					ft_strsplit.o \
					ft_strsplit_free.o \
					ft_countchars.o \
					ft_itoa.o \
					ft_itoa_large.o \
					ft_itoa_ularge.o \
					ft_itoa_write.o \
					ft_basetoa.o \
					ft_count_digits.o \
					ft_count_digits_ularge.o \
					ft_putchar.o \
					ft_putcharn.o \
					ft_putcharn_fd.o \
					ft_putstr.o \
					ft_putstr_literal_fd.o \
					ft_putstr_justify_right.o \
					ft_putstr_justify_left.o \
					ft_putstrn.o \
					ft_putendl_exit.o \
					ft_putendl_fd_exit.o \
					ft_putendl.o \
					ft_putnbr.o \
					ft_putnbr_justify_right.o \
					ft_putchar_fd.o \
					ft_putstr_fd.o \
					ft_putstrn_fd.o \
					ft_putendl_fd.o \
					ft_putnbr_fd.o \
					ft_putnbr_large_fd.o \
					ft_putstrarr.o \
					ft_put_clear_line.o \
					ft_abs.o \
					ft_abs_large.o \
					ft_abs_double.o \
					ft_arrlen.o \
					ft_array_expand.o \
					ft_array_reverse.o \
					ft_quicksort.o \
					ft_remove_nth_from_array.o \
					ft_min.o \
					ft_min_umax.o \
					ft_max.o \
					ft_intswp.o \
					ft_ptrswp.o \
					ft_ptrequ.o \
					ft_assert.o

FT_LIST_COMPILED =	ft_list_create_elem.o \
					ft_list_at.o \
					ft_list_clear.o \
					ft_list_find.o \
					ft_list_find_end.o \
					ft_list_last.o \
					ft_list_push_back.o \
					ft_list_push_front.o \
					ft_list_from_array.o \
					ft_list_remove_if.o \
					ft_list_remove_node.o \
					ft_list_reverse.o \
					ft_list_size.o \
					ft_list_sort.o \
					ft_list_foreach.o \
					ft_list_foreach_if.o

FT_PQ_COMPILED =	ft_pq_create_new.o \
					ft_pq_add.o \
					ft_pq_remove.o \
					ft_pq_peek.o \
					ft_pq_resize_array.o

GET_NEXT_LINE_COMPILED = \
					get_next_line.o \
					ft_read_file.o

PRINTF_COMPILED =	ft_printf.o \
					handle_format.o \
					parse_conversion.o \
					parse_flags.o \
					parse_width.o \
					parse_precision.o \
					parse_length.o \
					parse_specifier.o \
					validate_conversion.o \
					validate_flags.o \
					validate_flags_ignored.o \
					print_conversion.o \
					print_normal.o \
					print_char.o \
					print_wide_chars.o \
					print_format_error.o \
					get_current.o \
					get_number_argument.o \
					get_unsigned_number_argument.o \
					get_string_decimal.o \
					get_string_string.o \
					get_string_pointer.o \
					get_string_octal.o \
					get_string_hex.o \
					add_final_padding.o \
					add_precision_padding.o

COMPILED =			$(FT_COMPILED) \
					$(FT_LIST_COMPILED) \
					$(FT_PQ_COMPILED) \
					$(PRINTF_COMPILED) \
					$(GET_NEXT_LINE_COMPILED)

all: $(NAME)

$(NAME): $(COMPILED)
	@ar rc $(NAME) $(COMPILED)
	@ranlib $(NAME)
	@echo "made" $(NAME)

$(FT_COMPILED): %.o: $(FT_SRC_DIR)/%.c
	@$(CC) -c $(FLAGS) -I $(INCLUDES) $< -o $@

$(FT_LIST_COMPILED): %.o: $(FT_LIST_DIR)/%.c
	@$(CC) -c $(FLAGS) -I $(INCLUDES) $< -o $@

$(FT_PQ_COMPILED): %.o: $(FT_PQ_DIR)/%.c
	@$(CC) -c $(FLAGS) -I $(INCLUDES) $< -o $@

$(PRINTF_COMPILED): %.o: $(PRINTF_SRC_DIR)/%.c
	@$(CC) -c $(FLAGS) -I $(INCLUDES) $< -o $@

$(GET_NEXT_LINE_COMPILED): %.o: $(GET_NEXT_LINE_DIR)/%.c
	@$(CC) -c $(FLAGS) -I $(INCLUDES) $< -o $@

clean:
	@-/bin/rm -f $(COMPILED)
	@echo "cleaned" $(NAME)

fclean: clean
	@-/bin/rm -f $(NAME)
	@echo "fcleaned" $(NAME)

re: fclean all

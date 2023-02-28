##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile for task01
##

PRINTF	=	my_printf/

MYLS	=	../../my_ls/

TOOLS	=	../../my_ls/tools/

SRC     =       my_strcapitalize.c	\
                my_compute_power_rec.c  \
                my_compute_square_root.c        \
                my_find_prime_sup.c     \
                my_getnbr.c     \
                my_isneg.c      \
                my_is_prime.c	\
		my_putchar.c      \
		my_putnbr.c    \
		my_putstr.c     \
		my_revstr.c	\
		my_showmem.c    \
		my_showstr.c    \
		my_sort_int_array.c     \
                my_strcat.c     \
		my_strcmp.c     \
                my_strcpy.c     \
                my_str_isalpha.c        \
		my_str_islower.c        \
		my_str_isnum.c  \
		my_str_isprintable.c    \
		my_str_isupper.c        \
		my_strlen.c     \
		my_strlowcase.c \
		my_strncat.c    \
		my_strncmp.c    \
		my_strncpy.c    \
		my_strstr.c    \
		my_strupcase.c  \
		my_putnbr_unsigned.c \
		$(PRINTF)/my_printf.c	\
		$(PRINTF)/other/count.c	\
		$(PRINTF)/my_putnbr_base/my_putnbr_base8.c	\
                $(PRINTF)/my_putnbr_base/my_putnbr_base8_modif.c	\
                $(PRINTF)/my_putnbr_base/my_putnbr_base_hexa_maj.c	\
                $(PRINTF)/my_putnbr_base/my_putnbr_base_hexa_min.c	\
                $(PRINTF)/my_putnbr_base/my_putnbr_base_hexa_min_for_p.c	\
                $(PRINTF)/my_putnbr_base/my_putnbr_binary.c	\
		$(PRINTF)/flags/flag_binary.c	\
                $(PRINTF)/flags/flag_character.c	\
                $(PRINTF)/flags/flag_decimal.c	\
                $(PRINTF)/flags/flag_hexa_maj.c	\
                $(PRINTF)/flags/flag_hexa_min.c	\
                $(PRINTF)/flags/flag_integer.c	\
                $(PRINTF)/flags/flag_n.c	\
                $(PRINTF)/flags/flag_octal.c	\
                $(PRINTF)/flags/flag_s_maj.c	\
                $(PRINTF)/flags/flag_percent.c	\
                $(PRINTF)/flags/flag_pointer.c	\
                $(PRINTF)/flags/flag_string.c	\
                $(PRINTF)/flags/flag_unsigned.c	\
		$(PRINTF)/flags/flag_expo.c	\
		$(PRINTF)/flags/flag_float.c	\
		$(PRINTF)/flags/flag_expo_maj.c \
		my_show_word_array.c	\
		my_str_to_word_array.c	\
		my_strdup.c	\
		free_array_of_string.c     \
		convert_str_to_lower_case.c	\
		reverse_tab.c	\
		my_strdup_array_of_string.c	\
		remove_char.c	\
		int_to_string.c	\
		my_swap.c

SILENT	=	@

CC	=	$(SILENT)gcc

RM	=	$(SILENT)rm -f

COPY	=	$(SILENT)cp

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-g3

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	$(SILENT)ar rc $(NAME) $(OBJ)
	$(COPY) $(NAME) ../
	$(COPY) my.h ../../include/

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) ../$(NAME)
	$(RM) ../../$(NAME)

re:	fclean all

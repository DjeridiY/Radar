##
## EPITECH PROJECT, 2022
## makefile
## File description:
## makefile
##

SOURCE	=	src/

SRC =	$(SOURCE)main.c	\
		$(SOURCE)create_window.c	\
		$(SOURCE)destroy.c	\
		$(SOURCE)create.c	\
		$(SOURCE)create_wallpaper.c	\
		$(SOURCE)create_lugia.c	\
		$(SOURCE)create_tower.c	\
		$(SOURCE)check_intersection.c	\
		$(SOURCE)random_number.c	\
		$(SOURCE)move_lugia.c	\
		$(SOURCE)draw_lugia.c	\
		$(SOURCE)draw_tower.c	\
		$(SOURCE)draw_wallpaper.c	\
		$(SOURCE)help_cmd.c	\
		$(SOURCE)extract_information.c	\
		$(SOURCE)information_processing.c	\
		$(SOURCE)lugia_information.c	\
		$(SOURCE)tower_information.c	\
		$(SOURCE)get_time.c	\
		$(SOURCE)error_case.c	\
		$(SOURCE)travel_finish.c \
		$(SOURCE)create_text.c	\
		$(SOURCE)set_text.c	\
		$(SOURCE)draw_text.c \
		$(SOURCE)check_lugia.c	\
		$(SOURCE)check_tower.c	\
		$(SOURCE)string_to_int.c	\
		$(SOURCE)calculate_trajectory.c	\
		$(SOURCE)calculate_angle.c	\
		$(SOURCE)draw.c	\
		$(SOURCE)check_collision.c	\
		$(SOURCE)quadtree_add_hitbox.c	\
		$(SOURCE)quadtree_create.c	\
		$(SOURCE)quadtree_destroy.c	\
		$(SOURCE)check_collision_on_quad.c	\
		$(SOURCE)create_checker.c	\
		$(SOURCE)create_sub_quadtree.c	\
		$(SOURCE)in_tower.c	\
		$(SOURCE)on_collision.c	\
		$(SOURCE)analyse_events.c

OBJ	=	$(SRC:.c=.o)

NAME	=	radar

CFLAGS	=	-I./include/ -lcsfml-graphics -lcsfml-window -lcsfml-audio -g3 -lm

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my/
	gcc -o $(NAME) $(OBJ) $(CFLAGS) -lcsfml-system -L lib/my -lmy -Wall -Wextra
clean :
	make -C lib/my/ clean
	rm -f $(OBJ)

fclean: clean
	make -C lib/my/ fclean
	rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lguiller <lguiller@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/27 14:09:33 by lguiller          #+#    #+#              #
#    Updated: 2019/09/06 14:55:14 by lguiller         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##################
##  VARIABLES   ##
##################

NAME		= libvect.a
SRCS		= $(addsuffix .c, rotation_3d normalize dot_product reverse_vect \
			  vector vector2 vector3 intersection convertion)
OBJS		= $(SRCS:.c=.o)
CFLAGS		= -Wall -Wextra -Werror -g
CC			= clang

##################
##    COLORS    ##
##################

_GREY		= "\033[30m"
_RED		= "\033[31m"
_GREEN		= "\033[32m"
_YELLOW		= "\033[33m"
_BLUE		= "\033[34m"
_PURPLE		= "\033[35m"
_CYAN		= "\033[36m"
_WHITE		= "\033[37m"
_END		= "\033[0m"
_BOLD		= "\033[1m"
_CLEAR		= "\033[2K"
_SAVE		= "\033[7"
_BACK		= "\033[8"
_HIDE_CURS	= "\033[?25l"
_SHOW_CURS	= "\033[?25h"
_UP			= "\033[A"
_CUT		= "\033[k"

##################
##   TARGETS    ##
##################

.PHONY: all clean fclean re norme print
.SILENT:

all: $(NAME)

print:
	echo $(_CLEAR)$(_YELLOW)"Building - "$(_GREEN)$(NAME)$(_END)

$(NAME): print $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	echo $(_GREEN)"\nDone."$(_END)$(_SHOW_CURS)

$(OBJS): %.o: %.c
	gcc $(FLAGS) -c $< -o $@
	printf $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE)

norme:
	norminette *.[c,h]

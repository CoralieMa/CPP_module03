# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmartino <cmartino@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 12:12:35 by cmartino          #+#    #+#              #
#    Updated: 2024/03/12 11:42:51 by cmartino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ClapTrap

FILES	= main \
			ClapTrap \
			ScavTrap \
			FragTrap

SRCS	= $(addsuffix .cpp, $(FILES))

OBJS	= ${SRCS:.cpp=.o}

CC		= c++

RM		= rm -rf

CFLAGS	= -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}:	${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
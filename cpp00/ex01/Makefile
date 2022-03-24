# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdecorte42 <jdecorte42@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/27 17:11:47 by jdecorte          #+#    #+#              #
#    Updated: 2022/03/24 09:13:21 by jdecorte42       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

CFLAGS = -Wall -Wextra -Werror -I. -std=c++98

RM = rm -rf

SRCS = 	megaphone.cpp

$(NAME) :
	clang++ $(CFLAGS) $(SRCS) -o $(NAME)

all : $(NAME)

fclean : clean
	$(RM) $(NAME)

clean :
	$(RM) $(NAME)

re : fclean all
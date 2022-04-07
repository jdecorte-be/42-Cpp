NAME = phonebook

CFLAGS = -Wall -Wextra -Werror -I. -std=c++98

RM = rm -rf

SRCS = 	*.cpp

$(NAME) :
	clang++ $(CFLAGS) $(SRCS) -o $(NAME)

all : $(NAME)

fclean : clean
	$(RM) $(NAME)

clean :
	$(RM) $(NAME)

re : fclean all
CC			= c++ -Wall -Wextra -Werror -std=c++98
RM			= rm -rf
NAME		= ./phonebook
NAME_SHORT	= phonebook

INCS_DIR	= inc
MAIN_INC	= -I$(INCS_DIR)
INCS		= $(shell find $(INCS_DIR) -type f -name "*.hpp")

SRCS_DIR 	= src
SRCS		= $(shell find $(SRCS_DIR) -type f -name "*.cpp")

OBJS		= $(SRCS:.cpp=.o)

_COLOR		= \033[32m
_BOLDCOLOR	= \033[32;1m
_RESET		= \033[0m
_CLEAR		= \033[0K\r\c
_OK			= [\033[32mOK\033[0m]

%.o			: %.cpp
			@echo "[..] $(NAME_SHORT)... compiling $*.cpp\r\c"
			@$(CC) $(MAIN_INC) -c $< -o $@
			@echo "$(_CLEAR)"

all			: $(NAME)

$(NAME)		: $(OBJS) $(INCS)
			@$(CC) $(OBJS) $(MAIN_INC) -o $(NAME)
			@echo "$(_OK) $(NAME_SHORT) compiled"

clean		:
			@$(RM) $(OBJS)

fclean		: clean
			@$(RM) $(NAME)

re			: fclean all

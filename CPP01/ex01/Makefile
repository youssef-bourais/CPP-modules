NAME = Zombie

SRCS = main.cpp Zombie.cpp zombieHorde.cpp

CC = c++ -std=c++98

CFLAGS = -Wall -Werror -Wextra

OBJS = ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)
clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all



NAME = AAnimal

SRCS = main.cpp AAnimal.cpp Cat.cpp Dog.cpp  WrongAnimal.cpp WrongCat.cpp Brain.cpp 

CC = c++ -std=c++98

CFLAGS = -Wall -Werror -Wextra

OBJS = ${SRCS:.cpp=.o}

%.o : %.cpp	
		$(CC) $(CFLAGS) -c $<

all : $(NAME)

$(NAME) : $(OBJS) AAnimal.hpp
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all


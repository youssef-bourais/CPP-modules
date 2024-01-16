NAME = PmergeMe

SRCS = main.cpp PmergeMe.cpp Vector.cpp deque.cpp

CC = c++ -std=c++98

CFLAGS = -Wall  -Wextra  -O3 -O2 -fsanitize=address -g

OBJS = ${SRCS:.cpp=.o}

%.o : %.cpp	
		$(CC) $(CFLAGS) -c $<

all : $(NAME)

$(NAME) : $(OBJS) PmergeMe.hpp Makefile
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all


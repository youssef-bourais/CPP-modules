NAME = BitcoinExchange

SRCS = main.cpp BitcoinExchange

CC = c++ -std=c++98

CFLAGS = -Wall -Werror -Wextra 

OBJS = ${SRCS:.cpp=.o}

%.o : %.cpp	
		$(CC) $(CFLAGS) -c $<

all : $(NAME)

$(NAME) : $(OBJS) BitcoinExchange.hpp Makefile
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all


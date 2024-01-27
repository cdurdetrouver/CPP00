
NAME = megaphone
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDE = includes
SRC_DIR = src
SRC = $(shell find $(SRC_DIR) -type f -name "*.cpp")
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	c++  $(CPPFLAGS) -c $< -o $@

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
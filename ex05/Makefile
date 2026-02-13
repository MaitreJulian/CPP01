# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvenkata <jvenkata@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/17 15:52:26 by julian            #+#    #+#              #
#    Updated: 2026/02/13 13:30:52 by jvenkata         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl
SRC = main.cpp Harl.cpp
C = c++
CFLAGS = -Iinclude -Wall -Wextra -Werror -g -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(C) $(OBJ) -o $@

%.o: %.cpp
	$(C) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
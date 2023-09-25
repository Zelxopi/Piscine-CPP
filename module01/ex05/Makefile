# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/24 17:09:03 by mtrembla          #+#    #+#              #
#    Updated: 2023/09/24 17:25:20 by mtrembla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

SRCS = main.cpp \
		Harl.cpp \

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
RM = rm -fr
ODIR = obj/
OBJS = $(addprefix $(ODIR),$(SRCS:.cpp=.o))

all: $(NAME)

$(ODIR)%.o: %.cpp
	@mkdir -p $(ODIR)
	@$(CC) $(CFLAGS) -c $< -o $@ 
	@echo "\033[92m.\033[0m\c"

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


clean: 
	@$(RM) $(ODIR)
	@echo "🧹"

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
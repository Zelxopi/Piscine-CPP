# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/24 17:02:02 by mtrembla          #+#    #+#              #
#    Updated: 2023/09/24 17:04:25 by mtrembla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

SRCS = main.cpp \

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
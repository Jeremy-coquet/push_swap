# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/06 10:50:01 by jcoquet           #+#    #+#              #
#    Updated: 2024/05/06 10:50:02 by jcoquet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME	 		= push_swap
CC 				= gcc
CFLAGS 			= -Wall -Wextra -Werror -g -I.

SRCS			=	./srcs/Swap.c \
					./srcs/Rotate.c \
					./srcs/Reverse.c \
					./srcs/Push.c \
					./srcs/Push1.c \
					./srcs/Small_algo.c \
					./srcs/Algo100.c \
					./srcs/main.c \
					./srcs/Get_pos.c \
					./utils/List.c \
					./utils/Utils.c

OBJS			= $(SRCS:.c=.o)

LIBFT			= ./libft/libft.a
LIBFT_MAKE		= make -C libft -s
LIBFT_CLEAN		= make clean -C libft -s
LIBFT_FCLEAN	= make fclean -C libft -s

all:		$(NAME)

$(NAME): 	$(LIBFT) $(OBJS)
				@$(CC) $(CFLAGS) -o $(NAME) $(SRCS) $(LIBFT)
$(LIBFT):	
				@$(LIBFT_MAKE)
				@$(LIBFT_CLEAN)

clean:
				@rm -f $(OBJS)

fclean: 	
				@rm -f $(OBJS)
				@rm -f $(NAME) 
				@$(LIBFT_FCLEAN)
				
re:		
		@	rm -f $(OBJS) $(NAME) 
		@	$(LIBFT_FCLEAN)
		@	make all

.PHONY = all clean fclean re
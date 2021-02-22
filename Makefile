##
## EPITECH PROJECT, 2021
## Past Present Future
## File description:
## makefile
##

SRC	=	PastPresentFuture.cpp	\

OBJ	=	$(SRC:.cpp=.o)

NAME	=	PastPresentFuture

CFLAGS	=	-Wall -Wextra -Werror -lsfml-window -lsfml-graphics \
		-lsfml-system -lsfml-audio

all:		$(NAME) message

$(NAME):	$(OBJ)
		g++ -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean: 	clean
		rm -f $(NAME) *~

re:		fclean all

message:
		@echo "Successfully compiled!"

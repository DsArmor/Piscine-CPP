NAME	=	human

SRC		=	main.cpp \
			Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp

HDR		=	Weapon.hpp \
			HumanA.hpp \
			HumanB.hpp

# ---------------------------------
OBJ 	=	$(SRC:.cpp=.o)

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) $(OBJ) -I. -o $(NAME)


%.o:		%.cpp $(HDR)
			$(CC) $(FLAGS) -c $< -o $@

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

leaks:  	all
			leaks -atExit -- ./$(NAME)

.PHONY:		all clean fclean re test
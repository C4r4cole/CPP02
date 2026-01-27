# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmoulin <fmoulin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/11 14:02:02 by fmoulin           #+#    #+#              #
#    Updated: 2026/01/27 17:52:03 by fmoulin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ===========================
#           CONFIG
# ===========================

NAME        = BSP

OBJ_DIR     = obj

CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98
RM          = rm -f

# ===========================
#           SOURCES
# ===========================

SRCS =  main.cpp Fixed.cpp Point.cpp bsp.cpp
		
OBJS = $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

# ===========================
#           RULES
# ===========================

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

#name
NAME		:= ft_retro

# Define all the compiling flags
CXX			:= clang++
CXXFLAGS	:= -Wall -Werror -Wextra -Iinc -g
LDFLAGS		:= -lncurses

#src and obj
SRCS		:= $(wildcard src/*.cpp)

OBJS		:= $(SRCS:.cpp=.o)

#compile and create everything
all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@echo "[INFO] OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] $(NAME) removed"

re: fclean all

.PHONY: all clean fclean format re
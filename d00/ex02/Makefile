#name
NAME		:= Account

# Define all the compiling flags
CXX			:= clang++
CXXFLAGS	:= -Wall -Werror -Wextra -I. -g

#src and obj
SRCS		:= $(wildcard *.cpp)

OBJS		:= $(SRCS:.cpp=.o)

#compile and create everything
all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@echo "[INFO] OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] $(NAME) removed"

re: fclean all

.PHONY: all clean fclean format re
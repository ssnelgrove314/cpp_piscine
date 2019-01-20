#name
NAME		:= megaphone

#src and obj
SRCS		:= megaphone.cpp
OBJS		:= $(SRCS:.cpp=.o)

# Define all the compiling flags
CXX			:= clang++
CXXFLAGS	:= -Wall -Werror -Wextra -g

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
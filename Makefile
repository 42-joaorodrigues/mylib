################################################################################
#                              MyLib by joao-alm                               #
#                                 Version 1.0                                  #
################################################################################

#────────────────────────────────────Compilation──────────────────────────────#

NAME			= libmylib.a
LIBC			= ar rcs
CC				= cc
CFLAGS			= -Wall -Werror -Wextra
RM				= rm -rf
O_DIR			= obj
PRE_COMP		= $(O_DIR)/.pre_comp

all: $(NAME)

#──────────────────────────────────────Sources────────────────────────────────#

# Char Files
SRC_CHAR		= ft_isalnum.c \
				  ft_isalpha.c \
				  ft_isascii.c \
				  ft_isdigit.c \
				  ft_isprint.c
SRC_CHAR		:= $(addprefix char/, $(SRC_CHAR))

# Conversion Files
SRC_CONV		= atoll_valid.c \
				  ft_atoi.c \
				  ft_itoa.c \
				  ft_tolower.c \
				  ft_toupper.c
SRC_CONV		:= $(addprefix conversion/, $(SRC_CONV))

# Error Files
SRC_ERROR		= error.c
SRC_ERROR		:= $(addprefix error/, $(SRC_ERROR))

# GetNextLine Files
SRC_GNL			= get_next_line.c \
				  get_next_line_utils.c \
				  gnl_free_buffer.c
SRC_GNL			:= $(addprefix gnl/, $(SRC_GNL))

# List Files
SRC_LIST		= ft_lstadd_back_bonus.c \
				  ft_lstadd_front_bonus.c \
				  ft_lstclear_bonus.c \
				  ft_lstdelone_bonus.c \
				  ft_lstiter_bonus.c \
				  ft_lstlast_bonus.c \
				  ft_lstmap_bonus.c \
				  ft_lstnew_bonus.c \
				  ft_lstsize_bonus.c \
				  lstdel_safely.c \
				  lstdetach.c \
				  lstdup.c \
				  lstget_int.c \
				  lstnew_int.c
SRC_LIST		:= $(addprefix list/, $(SRC_LIST))

# Memory Files
SRC_MEM			= free_matrix.c \
				  free_partial_matrix.c \
				  ft_bzero.c \
				  ft_calloc.c \
				  ft_memchr.c \
				  ft_memcmp.c \
				  ft_memcpy.c \
				  ft_memmove.c \
				  ft_memset.c \
				  realloc.c \
				  sort_tab.c
SRC_MEM			:= $(addprefix memory/, $(SRC_MEM))

# Print Files
SRC_PRINT		= ft_printf.c \
				  ft_putchar_fd.c \
				  ft_putendl_fd.c \
				  ft_putnbr_fd.c \
				  ft_putstr_fd.c \
				  put_characters.c \
				  put_numbers.c
SRC_PRINT		:= $(addprefix print/, $(SRC_PRINT))

# String Files
SRC_STRING		= ft_split.c \
				  ft_strchr.c \
				  ft_strcmp.c \
				  ft_strdup.c \
				  ft_striteri.c \
				  ft_strjoin.c \
				  ft_strlcat.c \
				  ft_strlcpy.c \
				  ft_strlen.c \
				  ft_strmapi.c \
				  ft_strncmp.c \
				  ft_strnstr.c \
				  ft_strrchr.c \
				  ft_strtrim.c \
				  ft_substr.c \
				  intlen.c \
				  isempty.c \
				  strarrcount.c \
				  strarrdup.c \
				  strcpy.c \
				  ft_strcat.c \
				  strjoin_free.c \
				  strndup.c
SRC_STRING		:= $(addprefix string/, $(SRC_STRING))

# All Sources
SRC				= $(SRC_CHAR) $(SRC_CONV) $(SRC_GNL) $(SRC_LIST) \
				  $(SRC_MEM) $(SRC_PRINT) $(SRC_STRING) $(SRC_ERROR)
SRC				:= $(addprefix src/, $(SRC))
INC				= -I inc
OBJ				= $(SRC:%.c=$(O_DIR)/%.o)

#───────────────────────────────Compilation Commands──────────────────────────#

$(O_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(NAME): $(PRE_COMP) $(OBJ)
	@$(LIBC) $@ $(OBJ)
	@make .success TEXT="Compiling $(NAME)" --no-print-directory

#─────────────────────────────────Cleaning Commands───────────────────────────#

clean:
	@make .progress TEXT="Cleaning  $(NAME)" --no-print-directory
	@rm -rf $(O_DIR)
	@make .success TEXT="Cleaning  $(NAME)" --no-print-directory

fclean:
	@make .progress TEXT="Cleaning  $(NAME)" --no-print-directory
	@rm -rf $(O_DIR)
	@rm -rf $(NAME)
	@make .success TEXT="Cleaning  $(NAME)" --no-print-directory

re: fclean all

#────────────────────────────────────Colors───────────────────────────────────#

YELLOW	= \033[38;2;255;248;147m# FFF893
PINK	= \033[38;2;231;133;190m# E785BE
GREEN	= \033[38;2;129;223;164m# 81DFA4
RESET	= \033[0m

#─────────────────────────────────Animation Rules────────────────────────────#

$(PRE_COMP):
	@mkdir -p $(dir $@)
	@touch $@
	@make .progress TEXT="Compiling $(NAME)" --no-print-directory

.progress:
	@for i in 10 20 30 40 50 60 70 80 90; do \
		if [ $$i -eq 10 ]; then printf "$(TEXT) ⣿⣀⣀⣀⣀⣀⣀⣀⣀⣀ $$i%%\r"; fi; \
		if [ $$i -eq 20 ]; then printf "$(TEXT) ⣿⣿⣀⣀⣀⣀⣀⣀⣀⣀ $$i%%\r"; fi; \
		if [ $$i -eq 30 ]; then printf "$(TEXT) ⣿⣿⣿⣀⣀⣀⣀⣀⣀⣀ $$i%%\r"; fi; \
		if [ $$i -eq 40 ]; then printf "$(TEXT) ⣿⣿⣿⣿⣀⣀⣀⣀⣀⣀ $$i%%\r"; fi; \
		if [ $$i -eq 50 ]; then printf "$(TEXT) ⣿⣿⣿⣿⣿⣀⣀⣀⣀⣀ $$i%%\r"; fi; \
		if [ $$i -eq 60 ]; then printf "$(TEXT) ⣿⣿⣿⣿⣿⣿⣀⣀⣀⣀ $$i%%\r"; fi; \
		if [ $$i -eq 70 ]; then printf "$(TEXT) ⣿⣿⣿⣿⣿⣿⣿⣀⣀⣀ $$i%%\r"; fi; \
		if [ $$i -eq 80 ]; then printf "$(TEXT) ⣿⣿⣿⣿⣿⣿⣿⣿⣀⣀ $$i%%\r"; fi; \
		if [ $$i -eq 90 ]; then printf "$(TEXT) ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣀ $$i%%\r"; fi; \
		sleep 0.05; \
	done; \
	printf "$(RESET)"

.success:
	@printf "$(TEXT) $(GREEN)⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿ 100%%$(RESET)\n"

#────────────────────────────────Phony Targets───────────────────────────────#

.PHONY: all clean fclean re

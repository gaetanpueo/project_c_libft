#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/11 11:37:19 by gpueo--g          #+#    #+#              #
#    Updated: 2014/11/18 17:15:19 by gpueo--g         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

BDIR	=	bin/
SDIR	=	src/
ODIR	=	obj/
HDIR	=	inc/

NAME	=	libft.so
SRCS	=	ft_abs.c \
			ft_atoi.c \
			ft_atol.c \
			ft_bzero.c \
			ft_count_char.c \
			ft_count_digits.c \
			ft_epur_str.c \
			ft_hexval.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_iscntrl.c \
			ft_isdigit.c \
			ft_isgraph.c \
			ft_ishexa.c \
			ft_islower.c \
			ft_isprint.c \
			ft_ispunct.c \
			ft_isspace.c \
			ft_isupper.c \
			ft_isxdigit.c \
			ft_itoa.c \
			ft_lstadd.c \
			ft_lstdel.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_ltoa.c \
			ft_memalloc.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memdel.c \
			ft_memdel_2d.c \
			ft_memmove.c \
			ft_memset.c \
			ft_nospace_strlen.c \
			ft_putchar.c \
			ft_putchar_fd.c \
			ft_putdouble.c \
			ft_putdouble_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_putnbr.c \
			ft_putnbr_base.c \
			ft_putnbr_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_realloc.c \
			ft_realloc_o.c \
			ft_sgn.c \
			ft_strcat.c \
			ft_strchr.c \
			ft_strclr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdel.c \
			ft_strdup.c \
			ft_strequ.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strlower.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strncat.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strnequ.c \
			ft_strnew.c \
			ft_strnstr.c \
			ft_strpos.c \
			ft_strrchr.c \
			ft_strrep.c \
			ft_strsplit.c \
			ft_strstr.c \
			ft_strsub.c \
			ft_strtrim.c \
			ft_swap_char.c \
			ft_swap_int.c \
			ft_tolower.c \
			ft_toupper.c \
			get_next_line.c
_OBJS	=	$(SRCS:.c=.o)
OBJS	=	$(patsubst %,$(ODIR)%,$(_OBJS))

CC		=	gcc
FLAGS 	=	-Wall -Wextra -Werror -g
LDFLAGS	=	-I $(HDIR) -fPIC

all: scmsg $(NAME)
	@echo "\n--------------------------------------------------------------------------------"

scmsg:
	@echo "--------------------------- Start compilation libft ----------------------------\n"

scemsg:
	@echo "\033[34;1m>> \033[0mCompilation files ..."

mkdir:
	@if [ -d $(BDIR) ]; then \
		echo "\033[34;1m>> \033[0mBinaries directory already exist ...\033[73G"; \
	else \
		echo "\033[34;1m>> \033[0mCreating binaries directory ...\033[73G\c"; \
		mkdir $(BDIR); \
		echo "\033[37;1m[\033[34mDone !\033[37m]\033[0m"; \
	fi
	@if [ -d $(ODIR) ]; then \
		echo "\033[34;1m>> \033[0mObjects directory already exist ...\033[73G"; \
	else \
		echo "\033[34;1m>> \033[0mCreating objects directory ...\033[73G\c"; \
		mkdir $(ODIR); \
		echo "\033[37;1m[\033[34mDone !\033[37m]\033[0m"; \
	fi

$(NAME): mkdir scemsg $(OBJS)
	@gcc -shared -o $(BDIR)$(NAME) $(OBJS)
	@echo "\n\033[73G\033[37;1m[\033[34mDone !\033[37m]\033[0m"

$(ODIR)%.o: $(SDIR)%.c
	@$(CC) $(FLAGS) $(LDFLAGS) -o $@ -c $<
	@echo "|\c)"

cleanobj:
	@echo "----------------------------- Deleting files libft -----------------------------\n"
	@echo "\033[34;1m>> \033[0mRemoving object files ...\033[73G\c"
	@rm -f $(OBJS)
	@echo "\033[37;1m[\033[34mDone !\033[37m]\033[0m"
	@echo "\033[34;1m>> \033[0mRemoving objects directory ...\033[73G\c"
	@rm -rf $(ODIR)
	@echo "\033[37;1m[\033[34mDone !\033[37m]\033[0m"

clean: cleanobj
	@echo "\n--------------------------------------------------------------------------------"

fclean: cleanobj
	@echo "\033[34;1m>> \033[0mRemoving : $(NAME) ...\033[73G\c"
	@rm -f $(BDIR)$(NAME)
	@echo "\033[37;1m[\033[34mDone !\033[37m]\033[0m"
	@echo "\033[34;1m>> \033[0mRemoving binaries directory ...\033[73G\c"
	@rm -rf $(BDIR)
	@echo "\033[37;1m[\033[34mDone !\033[37m]\033[0m"
	@echo "\n--------------------------------------------------------------------------------"

re: fclean all

.PHONY: all clean fclean re

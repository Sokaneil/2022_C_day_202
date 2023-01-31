# E89 Pedagogical & Technical Lab
# project:     Unitaire
# created on:  2023-01-30 - 11:04 +0100
# 1st author:  sokaneil.sieng - sokaneil.sieng
# description: Makefile

NAME	=	libstu.a

SRCS	=	src/memset.c	\
		src/memcpy.c	\
		src/arrset.c	\
		src/memmove.c

OBJS	=	$(SRCS:.c=.o)

NAME_TEST	=	test.out


SRCS_TEST	=	test/memset.c	\
			test/memcpy.c	\
			test/arrset.c	\
			test/memmove.c

OBJS_TEST	=	$(SRCS_TEST:.c=.o)


CFLAGS	+=	-W -Wall -Wextra -Werror -Iinclude/

LDFLAGS	+=

RM	=	rm -vf

CC	:=	gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(NAME_TEST): $(OBJS) $(OBJS_TEST)
	$(CC) -o $(NAME_TEST) $(OBJS) $(OBJS_TEST) -lcriterion

save:
	git status
	git add *
	git commit -m "Immersion s2"
	git push

test:
	$(CC) $(CFLAGS)

clean:
	@$(RM) $(OBJS) $(OBJS_TEST)

fclean: clean
	@$(RM) $(NAME) $(NAME_TEST)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re

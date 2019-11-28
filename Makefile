NAME	= libft.a

H_DIR	= .

S_DIR	= ft_bzero.c\
			ft_isalnum.c\
			ft_calloc.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_atoi.c\
			ft_memchr.c\
			ft_memcpy.c\
			ft_memccpy.c\
			ft_memset.c\
			ft_memcmp.c\
			ft_memmove.c\
			ft_strchr.c\
			ft_strdup.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strlcat.c\
			ft_tolower.c\
			ft_strnstr.c\
			ft_strncmp.c\
			ft_toupper.c\
			ft_strrchr.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_split.c\
			ft_itoa.c\
			ft_strmapi.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c

B_DIR	=	ft_lstnew.c\
			ft_lstadd_front.c\
			ft_lstsize.c\
			ft_lstlast.c\
			ft_lstadd_back.c\
			ft_lstdelone.c\
			ft_lstclear.c\
			ft_lstiter.c\
			ft_lstmap.c\

OBJS	= ${S_DIR:.c=.o}
OBJBONUS = ${B_DIR:.c=.o}
OPTION	= -I${H_DIR}

CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f
AR		= ar rc

.c.o:
			gcc ${CFLAGS} ${OPTION} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS} 

bonus:		${NAME} ${OBJBONUS}
			${AR} ${NAME} ${OBJBONUS}

all:		${NAME}

clean:
			${RM} ${OBJS} ${OBJBONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus

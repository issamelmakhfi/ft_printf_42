CFILES = ft_get_hex.c ft_get_uphex.c ft_printf.c ft_putchar.c ft_putnbr.c ft_putnbrun.c ft_putstr.c \
		ft_detect1.c ft_detect2.c ft_detect3.c ft_get_add.c 
OFILES = ${CFILES:.c=.o}
BCFILES = ft_get_hex_bonus.c ft_get_uphex_bonus.c ft_printf_bonus.c ft_putchar_bonus.c ft_putnbr_bonus.c ft_putnbrun_bonus.c \
		ft_putstr_bonus.c ft_detect1_bonus.c ft_detect2_bonus.c ft_detect3_bonus.c ft_get_add_bonus.c ft_flag1_bonus.c ft_sign_bonus.c \
		ft_space_bonus.c ft_flags_bonus.c 
BOFILES = ${BCFILES:.c=.o}
CC = gcc
CFLAGS = -Wextra -Wall -Werror
NAME = libftprintf.a

all : ${NAME}

${NAME} : ${OFILES} 
	ar -cr ${NAME} ${OFILES}

clean : 
	rm -f  ${OFILES} ${BOFILES}

fclean : clean
	rm -f ${NAME}

re : fclean all


bonus : ${BOFILES} 
	ar -cr ${NAME} ${BOFILES}

%.o: %.c libftprintf.h
	$(CC) $(CFLAGS) -c -o $@ $<

.PHONY : clean re fclean bonus 
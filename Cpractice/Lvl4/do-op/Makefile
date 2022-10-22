# -*- Makefile -*-

#target : dependencies
#	action

COMPILER = gcc
CFLAGS = -Wall -Wextra -Werror
CFILES = files/checkop.c files/main.c files/operations.c
OBJECTS = ${CFILES:.c=.o}
HEADER = files/header.h
EXEC = do-op

all : ${EXEC}

${EXEC} : ${OBJECTS}
	${COMPILER} ${CFLAGS} ${CFILES} -o ${EXEC}

clean :
	rm -f ${OBJECTS}

fclean : clean
	rm -f ${EXEC}

re : fclean all

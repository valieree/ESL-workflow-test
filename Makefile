TARGET = vector_app

CC = gcc
CFLAGS = -Wall -Wextra -std=c11

SRCS = test.c vector3d.c

OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c vector3d.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)

CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = Arithapp
SRCS = Arithapp.c add.c sub.c mul.c div.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c add.h sub.h mul.h div.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = espirais
SOURCES = main.c espquadrada.c esptriangular.c minhaesp.c
HEADERS = espirais.h
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJECTS)

.PHONY: all clean
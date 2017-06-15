
SOURCES=$(wildcard *.c)
OBJECTS=$(SOURCES:%.c=%.o)
TARGET=matrices

CFLAGS= -g -ggdb -Wall -Wextra -o0

.PHONY: all
all: $(TARGET)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJECTS)
	$(LINK.c) $^ -o $@

.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJECTS) *~



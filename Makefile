
SOURCES=$(wildcard *.c)
OBJECTS=$(SOURCES:%.c=%.o)
TARGET=matrices

CFLAGS+= -Wall -Wextra

.PHONY: all
all: $(TARGET)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJECTS)
	$(LINK.c) $^ -o $@

.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJECTS) *~



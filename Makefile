CC     = gcc
CFLAGS = -Wall -Wextra -Wno-unused-result -O2
LDLIBS = -lm
SRC    = $(wildcard src/*.c)
BINS   = $(patsubst src/%.c,build/%,$(SRC))

all: $(BINS)

build/%: src/%.c | build
	$(CC) $(CFLAGS) -o $@ $< $(LDLIBS)

build:
	mkdir -p build

clean:
	rm -f $(BINS)

.PHONY: all clean

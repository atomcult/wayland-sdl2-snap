.POSIX:
.PHONY: clean install

LDFLAGS += -lraylib
PREFIX   = /usr

OBJ := ubuntu

all: $(OBJ)

$(OBJ): %: %.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

clean:
	rm $(OBJ)

install:
	install -sD $(OBJ) -t $(PREFIX)/bin

#author: Armin Puffler, 1225268
#program name: coffeemaker
#date: 15.03.2017

CC = gcc
DEFS = -D_DEFAULT_SOURCE
CFLAGS = -Wall -g -std=c99 -pedantic $(DEFS)
OBJECTFILES = myexpand.o
PROGRAMNAME = myexpand
LDFLAGS =
.PHONY: all clean

all: $(PROGRAMNAME)

$(PROGRAMNAME): $(OBJECTFILES)
		 $(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	 $(CC) $(CFLAGS) -c -o $@ $<

clean:
	 rm -f $(OBJECTFILES) $(PROGRAMNAME)

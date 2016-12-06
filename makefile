CC = g++
CFLAGS = -Wall
EXEC = counter
OBJS = counter.o
IMPLEM = counter.cc

all: build

clean:
	-rm *.o
build: $(EXEC)

$(EXEC):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@
.c:.o
	$(CC) $(CFLAGS) -c $<

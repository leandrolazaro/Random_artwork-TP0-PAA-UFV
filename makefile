TARGET=random_artwork

# compiler
CC=gcc
CCO=clang
# warnings
WARN=-Wall


CCFLAGS=$(WARN)

SRC= main.c structs/pixel/pixel.c structs/figure/figure.c structs/generic/generic.c structs/painting/painting.c

all:
	$(CC) -o $(TARGET) $(SRC) $(CCFLAGS) -lm

run:
	./$(TARGET)

clear:
	rm $(TARGET)

clang:
	$(CCO) -o $(TARGET) $(SRC) $(CCFLAGS) -lm -O3
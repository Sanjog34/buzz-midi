CC = gcc
CFLAGS =-Wall -g -Wextra
LIBS = -lm

TARGET = buzzmidi
SRC = buzzmidi.c helper.c headerparse.c eventparser.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LIBS)

clean:
	rm -f $(TARGET)

.PHONY: all clean


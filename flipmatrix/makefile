TARGET=flipmatrix

CC=g++

CFLAGS=-std=c++0x

all : clean $(TARGET) test

$(TARGET) : $(TARGET).o
	$(CC) $(CFLAGS) -o $@ $^ 

$(TARGET).o : $(TARGET).cpp
	$(CC) $(CFLAGS) -c $^

clean :
	rm -f $(TARGET) *.o

test :
	./$(TARGET)


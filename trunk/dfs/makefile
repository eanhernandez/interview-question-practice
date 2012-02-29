TARGET=dfs

CC=g++

CFLAGS=-std=c++11

all : clean $(TARGET) test

$(TARGET) : $(TARGET).o
	$(CC) $(CFLAGS) -o $@ $^ 

$(TARGET).o : $(TARGET).cpp
	$(CC) $(CFLAGS) -c $^

clean :
	rm -f $(TARGET) *.o

test :
	./$(TARGET)


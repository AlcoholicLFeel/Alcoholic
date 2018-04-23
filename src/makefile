srcs=$(wildcard *.c) $(wildcard *.cpp)
dir=$(notdir $(srcs))
objs=$(patsubst %.c,%.o,$(patsubst %.cpp,%.o,$(dir)))

all:$(objs)

$(objs):%.o:%.cpp
	$(cc) $(inc) $(cflags) -c $^ -o $@

clean:
	rm -rf $(objs)

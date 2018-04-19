srcs=$(wildcard *.c) $(wildcard *.cpp)
dir=$(notdir $(srcs))
objs=$(patsubst %.c,%.o,$(patsubst %.cpp,%.o,$(dir)))

all:$(objs) move

$(objs):%.o:%.cpp
	$(cc) $(inc) $(cflags) -c $^ -o $@

move:
	mv $(objs) $(obj_dir)

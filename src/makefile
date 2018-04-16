srcs=$(wildcard *.c) $(wildcard *.cpp)
dir=$(notdir $(srcs))
objs=$(patsubst %.c,%.o,$(patsubst %.cpp,%.o,$(dir)))

$(obj_dir)/$(objs):$(srcs)
	$(cc) $(inc) $(cflags) -c $^ -o $@

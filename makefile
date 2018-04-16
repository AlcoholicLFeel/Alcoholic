cc=g++
target=leaf
sub_dir=src
top_dir=$(shell pwd)
obj_dir=$(top_dir)/obj
cflags=-Wall
inc=-I$(top_dir)/inc
export cc obj_dir cflags inc


all:checkdir $(sub_dir) $(target)

checkdir:
	mkdir -p $(obj_dir)

$(sub_dir):echo
	make -C $@
echo:
	@echo $(sub_dir)
	@echo begin compile

$(target):$(obj_dir)/main.o
	$(cc) $(cflags) -o $@ $^

.PHONY:clean
clean:
	rm -rf $(obj_dir)

cc=g++
target=leaf
sub_dir=src src/sudu
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

$(target):
	$(cc) $(cflags) $(obj_dir)/*.o -o $@

.PHONY:clean
clean:
	rm -rf $(obj_dir)

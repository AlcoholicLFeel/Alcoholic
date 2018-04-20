cc=g++
target=leaf
sub_dir=src src/sudu src/log
top_dir=$(shell pwd)
obj_dir=$(top_dir)/obj
cflags=-Wall -std=c++11
inc=-I$(top_dir)/inc
export cc obj_dir cflags inc


all:checkdir call_sub $(target)

checkdir:
	mkdir -p $(obj_dir)

call_sub:
	@for n in $(sub_dir);do make -C $$n; done

$(target):
	$(cc) $(cflags) $(obj_dir)/*.o -o $@

.PHONY:clean
clean:
	rm -rf leaf  $(obj_dir)
	@for n in $(sub_dir);do make -C $$n clean; done

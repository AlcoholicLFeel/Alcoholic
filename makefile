cc=g++
target=leaf
sub_dir=src src/sudu src/log
top_dir=$(shell pwd)
cflags=-Wall -std=c++11
inc=-I$(top_dir)/inc
objs=$(foreach n,$(sub_dir),$(wildcard $(n)/*.o))
export cc cflags inc


all:ctarget call_sub $(target)

ctarget:
	rm -rf $(target)

call_sub:
	@for n in $(sub_dir);do make -C $$n; done

$(target):
	$(cc) $(cflags) $(objs) -o $@

.PHONY:clean
clean:
	rm -rf $(target)
	@for n in $(sub_dir);do make -C $$n clean; done

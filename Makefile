all:
	gcc first_prj.c -o data -DCHECKS
NO_CHK:
	gcc first_prj.c -o data
clean:
	rm -fr data *.o

try: project.o use.o 
	cc project.o use.o -o try
project.o: project.c project.h
	cc -c project.c
use.o: use.c project.h
	cc -c use.c

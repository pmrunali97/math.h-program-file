project: function.o mainfile.o 
	cc function.o mainfile.o -o project
function.o: function.c function.h
	cc -c function.c
mainfile.o: mainfile.c function.h
	cc -c mainfile.c
clean: 
	rm *.o

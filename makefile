CC=gcc
testmake: test.c str.c
	$(CC) -o testmake test.c str.c -I.
	
clean:
	rf -f *.o testmake *.xml

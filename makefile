CC=gcc
testmake: test.c str.c
	$(CC) -o testmake test.c str.c -I.
	
clean:
	rm *.o testmake *.xml

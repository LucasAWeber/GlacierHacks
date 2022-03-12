LifeBasic: main.o functions.o
	gcc -Wall -std=c99 main.o functions.o -o LifeBasic

main.o: main.c header.h
	gcc -Wall -std=c99 -c main.c

functions.o: functions.c header.h
	gcc -Wall -std=c99 -c functions.c

clean:
	rm *.o LifeBasic
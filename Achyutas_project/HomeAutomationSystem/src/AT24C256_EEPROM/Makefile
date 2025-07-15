CC ?= gcc 

all:eeprom.o
	echo "EEPROM code compiled"

eeprom.o:eeprom.c
	$(CC) -c eeprom.c

clean:
	rm *.o

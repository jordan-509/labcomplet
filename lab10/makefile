CC=gcc
OBj=max1.o min1.o var.o

ifeq ($(DEBUG),yes)
CC_OPTIONS=-g -W -Wall

else 
CC_OPTIONS=

endif

install: My_binaire
	sudo mv  My_binaire $(HOME)/

My_binaire: min1.o max1.o var.o testf.o
	${CC}  ${CC_OTIONS}  min1.o max1.o var.o testf.o -o My_binaire 
ifeq ($(DEBUG),yes)
	@echo "mode debug"
else 
	@echo "mode realase"
endif 	
max1.o: max1.c max1.h 
	${CC}  ${CC_OPTIONS}  -c max1.c 

min.o: min1.c  min1.h
	gcc -Wall -c min1.c    


var.o: var.c var.h 
	gcc -Wall -c var.c

testf.o: testf.c
	gcc -Wall -c testf.c 

clean :
	rm -f *.o

%.o : %.c
	${CC} ${CC_OPTIONS} -c $^ -o $@
	





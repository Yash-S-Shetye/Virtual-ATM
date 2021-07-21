ATM: main.o details.o deposit.o withdraw.o
	gcc -o ATM main.o details.o deposit.o withdraw.o

main.o: main.c atm_functions.h
	gcc -c main.c
	
details.o: details.c atm_functions.h
	gcc -c details.c

deposit.o: deposit.c atm_functions.h
	gcc -c deposit.c

withdraw.o: withdraw.c atm_functions.h
	gcc -c withdraw.c

clean:
	rm ATM main.o details.o deposit.o withdraw.o
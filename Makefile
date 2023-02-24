OBJ = fx_S1318.c tobin.c
CC = cc 
CFLAGS = -pg -Wall
CLEAN = main fund trig perf_64 perf_32 

main: $(OBJ) main.c
	$(CC) -o $@  $^ 

fund: $(OBJ) fund_calc.c
	$(CC) -o $@  $^ 

trig: $(OBJ) trig_calc.c
	$(CC) -o $@  $^

perf_64: $(OBJ) perf.c
	$(CC) $(CFLAGS) -o $@  $^

perf_32: $(OBJ) perf.c
	$(CC) $(CFLAGS) -m32 -o $@  $^

clean:
	rm -f *.o *.out $(CLEAN)

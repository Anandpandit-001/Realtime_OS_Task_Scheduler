SRC := $(wildcard src/*.c)
OBJ := $(patsubst src/%.c, obj/%.o, $(SRC))

FLAGS := -I src/include -Wall -Wextra -std=c99

.PHONY: run clean

bin/scheduler: $(OBJ) | bin
	gcc $^ -o $@

bin:
	if not exist bin mkdir bin

obj:
	if not exist obj mkdir obj

run: bin/scheduler
	./bin/scheduler

obj/%.o: src/%.c | obj
	gcc $(FLAGS) -c $^ -o $@

clean:
	if exist obj\* del /Q obj\*
	if exist bin\* del /Q bin\*
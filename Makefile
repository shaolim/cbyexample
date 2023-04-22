compile-hello-world:
	gcc examples/hello-world/hello-world.c -o out/hello-world.o

execute-hello-world: compile-hello-world
	./out/hello-world.o

compile-variables:
	gcc examples/variables/variables.c -o out/variables.o

execute-variables: compile-variables
	./out/variables.o

compile-operators:
	gcc examples/operators/operators.c -o out/operators.o

execute-operators: compile-operators
	./out/operators.o

compile-if-else:
	gcc examples/if-else/if-else.c -o out/if-else.o

execute-if-else: compile-if-else
	./out/if-else.o

compile-switch:
	gcc examples/switch/switch.c -o out/switch.o

execute-switch: compile-switch
	./out/switch.o

clean:
	rm -rf out/*.o
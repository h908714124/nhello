default: copy copy_simple

copy: copy.c
	gcc -o copy copy.c
	objdump -D copy > copy.dump

copy_simple: copy_simple.c
	gcc -o copy_simple copy_simple.c
	objdump -D copy_simple > copy_simple.dump


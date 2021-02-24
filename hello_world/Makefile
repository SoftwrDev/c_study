
INCLUDES += ""
OUTPUT = bin/hello
FILES += hello.c

prepare:
	@rm -fr bin || true && \
	mkdir -p bin

compile:
	gcc -I $(INCLUDES) -c $(FILES)

build: prepare hello.o
	gcc -I $(INCLUDES) $(FILES) -o $(OUTPUT) && \
	make clean

clean:
	@rm *.o

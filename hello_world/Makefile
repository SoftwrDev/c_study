
prepare:
	@rm -fr bin || true && \
	mkdir -p bin

compile:
	gcc -c hello.c

build: prepare hello.o
	gcc hello.c -o bin/hello && \
	make clean

clean:
	@echo "Cleaning Artifacts..." && \
	rm *.o

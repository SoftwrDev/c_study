
all:
ifndef APP_NAME
	@echo "APP_NAME is not defined" &&exit 1
endif

prepare: all
	@rm -fr bin || true && \
	mkdir -p bin

main.o:
	gcc -c main.c

build: prepare main.o
	gcc main.o -o bin/$(APP_NAME) && \
	make clean

clean:
	@echo "Cleaning Artifacts..." && \
	rm *.o

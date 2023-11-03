.PHONY: build clean

build: 
	$(warning	Attempting to build passgen...)
	cc src/main.c src/pw_short.c -o build/pwplease.exe

run:
	$(info	Now running passgen from make.)
	@.\build\pwplease.exe
	$(info	)

clean:
	$(info	Cleaning .\build of all .exe)
	@cd build && rm -f *.exe
	$(info	Cleaning .\build of all .o)
	@cd build && rm -f *.o

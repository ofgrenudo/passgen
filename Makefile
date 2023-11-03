.PHONY: build clean

author = Joshua D. Winters-Brown
version = 0.1.1
program_name = passgen
build_dir = ./build/
object_files = src/main.c src/pw_short.c

build: 
	$(warning	Attempting to build passgen...)
	cc $(object_files) -o $(build_dir)/$(program_name).exe

run:
	$(info	Now running passgen from make.)
	@$(build_dir)$(program_name).exe
	$(info	)

release:
	$(info Now creating a release binary.)
	cc $(object_files) -o $(build_dir)/$(program_name)-$(version).exe

clean:
	$(info	Cleaning .\build of all .exe)
	@cd $(build_dir) && rm -f *.exe
	$(info	Cleaning .\build of all .o)
	@cd $(build_dir) && rm -f *.o

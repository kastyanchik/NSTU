all: program_go program_c

program_go: main.go
	@echo "Сборка проекта go"
	go build -o program_go main.go



program_c: preprocess_c compilation_c assembly_c main.o
	@echo "Компоновка"
	g++ main.o -o program

preprocess_c: main.cpp
	@echo ""
	@echo "Препроцессинг"
	g++ -E main.cpp -o main.ii

compilation_c: main.ii
	@echo "Компиляция"
	g++ -S main.ii -o main.s

assembly_c: main.s
	@echo "Ассемблирование"
	as main.s -o main.o

clean:
	rm -rf *.o *.ii *.s program_go program



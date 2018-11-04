#SRC = $(patsubst %.c, %.o, $(wildcard *.c))
#LIB = $(wildcard *.h)
DATE = `date --rfc-3339=d`

compile:
	gcc ./dragon-book/section1.6/1.6.3-4/1.6.4.c -o ./target/${DATE}.out
run:
	./target/*.out
clean:
	rm -rf ./target/{*,}.out
	rm -rf ./{*,}.out
	rm -rf *out
#SRC = $(patsubst %.c, %.o, $(wildcard *.c))
#LIB = $(wildcard *.h)
DATE = `date --rfc-3339=d`

compile:
	gcc ./dragon-book/*.c -o ./target/${DATE}.out
run:
	./target/*.out
clean:
	rm -rf ./target/{*,}.out
	rm -rf ./{*,}.out
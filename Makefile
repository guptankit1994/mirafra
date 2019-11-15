cc = gcc 


#.PHONY: all clean


main: main.o insertion.o selection.o bubble.o merge.o quick.o
	$(cc) -o main  main.o insertion_sort.o bubble_sort.o merge_sort.o quick_sort.o selection_sort.o

main.o: main.c
	$(cc) -c  main.c

insertion.o: insertion_sort.c
	$(cc) -c  insertion_sort.c

bubble.o: bubble_sort.c
	$(cc) -c bubble_sort.c	

selection.o: selection_sort.c
	$(cc) -c  selection_sort.c

merge.o: merge_sort.c
	$(cc) -c merge_sort.c

quick.o: quick_sort.c
	$(cc) -c  quick_sort.c

clean:
	rm -rf *.o
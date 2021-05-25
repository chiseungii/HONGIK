partition(PIVOT,[],[],[]) :- !.
partition(PIVOT,[A|B],[A|LEFT],RIGHT) :-
	A<PIVOT ->
	partition(PIVOT,B,LEFT,RIGHT).
partition(PIVOT,[A|B],LEFT,[A|RIGHT]) :-
	A>PIVOT ->
	partition(PIVOT,B,LEFT,RIGHT).

printDivide(PIVOT,[],[]) :- !.
printDivide(PIVOT,LEFT,RIGHT) :-
	write("divide="), write(PIVOT),
	write('|'), write(LEFT),
	write(RIGHT), nl.

printMerge(PIVOT,[],[]) :-
	write("merge:"),
	write([PIVOT]), nl.
printMerge(PIVOT,LEFT,RIGHT) :-
	write("merge:"), write(LEFT),
	write([PIVOT]), write(RIGHT), nl.

quickSort([],[]) :- !.
quickSort([PIVOT|B]) :-
	quickSort([PIVOT|B],RESULT),
	write(RESULT), nl.
quickSort([PIVOT|B],RESULT) :-
	partition(PIVOT,B,LEFT,RIGHT),
	printDivide(PIVOT,LEFT,RIGHT),
	quickSort(LEFT,TMPL),
	quickSort(RIGHT,TMPR),
	printMerge(PIVOT,TMPL,TMPR),
	append(TMPL,[PIVOT|TMPR],RESULT).

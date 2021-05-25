nQueen(N) :-
	write("n="), write(N), nl,
	nQueen(N,RESULT),
	length(RESULT,NUM),
	write("# of answer="),
	write(NUM), nl,
	write(RESULT), nl.
nQueen(N,RESULT) :-
	length(SOLUTION,N),
	findall(SOLUTION,queen(SOLUTION,N),RESULT).

listing(N,N,[N]) :- !.
listing(A,N,[A|B]) :-
	A<N ->
	A1 is A+1,
	listing(A1,N,B).

queen([],_) :- !.
queen([Q|REST],N) :-
	queen(REST,N),
	listing(1,N,LIST),
	member(Q,LIST),
	promising(Q,REST,1).

promising(_,[],_) :- !.
promising(Q,[Q1|REST],DISTANCE) :-
	Q=\=Q1 ->
	Tmp is abs(Q1-Q),
	Tmp =\= DISTANCE ->
	DISTANCE1 is DISTANCE+1,
	promising(Q,REST,DISTANCE1).

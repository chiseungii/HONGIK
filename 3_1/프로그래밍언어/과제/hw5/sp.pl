near(1,2,6). near(1,3,3).
near(2,1,6). near(2,3,2). near(2,4,5).
near(3,1,3). near(3,2,2). near(3,4,3). near(3,5,4).
near(4,2,5). near(4,3,3). near(4,5,2). near(4,6,3).
near(5,3,4). near(5,4,2). near(5,6,5).
near(6,4,3). near(6,5,5).

sp(START,ARRIVE) :-
	findall(X,sp(START,ARRIVE,PATH,X,[]),[A|L]),
	findall(X,sp(START,ARRIVE,X,LENGTH,[]),P),
	minLength([A|L],A,MINRES),
	minPath([A|L],P,MINRES,RPATH,RLENGTH),
	write(RPATH), nl,
	write(RLENGTH), nl.

sp(START,START,[START],0,VISIT) :- !.
sp(START,ARRIVE,[START|PATH],LENGTH,VISIT) :-
	\+member(START,VISIT) ->
	near(START,START1,WEIGHT),
	sp(START1,ARRIVE,PATH,LENGTH1,[START|VISIT]),
	LENGTH is LENGTH1+WEIGHT.

minLength([],MIN,MIN) :- !.
minLength([A1|L],MIN,RESULT) :-
	A1<MIN ->
	MIN1 is A1,
	minLength(L,MIN1,RESULT);
	minLength(L,MIN,RESULT).

minPath([MINRES|L],[A2|P],MINRES,A2,MINRES) :- !.
minPath([A1|L],[A2|P],MINRES,RPATH,RLENGTH) :-
	minPath(L,P,MINRES,RPATH,RLENGTH).

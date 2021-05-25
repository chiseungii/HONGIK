hanoi(N) :- recursive(N, 1, 3, 2).

recursive(N, From, Tmp, To) :-
	N=:=1 ->
	write("1->["), write(From),
	write(','), write(To),
	write(']'), nl;

	N2 is N-1,
	recursive(N2, From, To, Tmp),
	write(N), write("->["),
	write(From), write(','),
	write(To), write(']'), nl,
	recursive(N2, Tmp, From, To).

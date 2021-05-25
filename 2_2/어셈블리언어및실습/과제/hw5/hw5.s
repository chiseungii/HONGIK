	.section ".data"
n:	.word 0
ary:	.skip 4*19*19
fmt0:	.asciz "%d"
fmt1:	.asciz "n input = "
fmt2:	.asciz "\n"
fmt3:	.asciz "%d\t"

	.section ".text"
	.global main, printf, scanf

main:	save %sp, -96, %sp

input:	set fmt1, %o0
	call printf
	nop
	set fmt0, %o0
	set n, %o1
	call scanf
	nop			! n 입력

	set n, %o0
	ld [%o0], %l0		! n ; %l0
	cmp %l0, 2
	ble exit_r
	nop
	cmp %l0, 20
	bge exit_r
	nop			! 종료 조건 검사

	ba init
	clr %l1			! i : %l1

init:	set n, %o0
	ld [%o0], %l0
	cmp %l1, %l0
	bge initIJ			! for(int i=0; i<n; i++)
	nop

	ba init2
	clr %l2

init2:	set n, %o0
	ld [%o0], %l0
	cmp %l2, %l0
	bge,a init
	inc %l1			! for(int j=0; j<n; j++)

	mov %l1, %o0
	call .mul
	mov 19, %o1
	add %o0, %l2, %o0
	sll %o0, 2, %o0		! ary[i][j]의 주소

	set ary, %o1
	st %g0, [%o0 + %o1]		! ary[i][j] = 0

	ba init2
	inc %l2

initIJ:	clr %l1
	set n, %o0
	ld [%o0], %l0
	srl %l0, 1, %l0
	mov %l0, %l2

	ba checkk
	mov 1, %l3		! k : %l3

checkk:	set n, %o2
	ld [%o2], %o0
	call .mul
	mov %o0, %o1
	cmp %l3, %o0
	bg,a print
	clr %l1			! while(k <= n * n)

	ba empty
	nop

empty:	mov %l1, %o0
	call .mul
	mov 19, %o1
	add %o0, %l2, %o0
	sll %o0, 2, %o0

	set ary, %o1
	ld [%o0 + %o1], %o2
	cmp %o2, 0		! if(!ary[i][j])
	be draw
	nop

	add %l1, 2, %l1
	set n, %o0
	ld [%o0], %o1
	sub %o1, 1, %o1
	add %l2, %o1, %l2

	set n, %o0
	ld [%o0], %l0

	mov %l1, %o0
	call .rem
	mov %l0, %o1
	mov %o0, %l1		! 1 = i % n

	mov %l2, %o0
	call .rem
	mov %l0, %o1
	mov %o0, %l2		! j = j % n

	ba checkk
	nop

draw:	mov %l1, %o0
	call .mul
	mov 19, %o1
	add %o0, %l2, %o0
	sll %o0, 2, %o0

	set ary, %o1
	st %l3, [%o0 + %o1]		! ary[i][j] = k

	inc %l3			! k++
	set n, %o0
	ld [%o0], %o1
	sub %o1, 1, %o1
	add %l1, %o1, %l1		! i = i + (n - 1)
	inc %l2			! j++

	set n, %o0
	ld [%o0], %l0

	mov %l1, %o0
	call .rem
	mov %l0, %o1
	mov %o0, %l1		! i = i % n

	mov %l2, %o0
	call .rem
	mov %l0, %o1
	mov %o0, %l2		! j = j % n

	ba checkk
	nop

print:	set n, %o0
	ld [%o0], %l0
	cmp %l1, %l0
	bge input			! for(int i=0; i<n; i++)
	nop

	ba print2
	clr %l2

print2:	set n, %o0
	ld [%o0], %l0
	cmp %l2, %l0
	bge enter
	nop			! for(int j=0; j<n; j++)

	mov %l1, %o0
	call .mul
	mov 19, %o1
	add %o0, %l2, %o0
	sll %o0, 2, %o0		! ary[i][j]의 주소

	set ary, %o1
	ld [%o0 + %o1], %o2

	set fmt3, %o0
	call printf
	mov %o2, %o1		! cout << ary[i][j] << '\t'

	ba print2
	int %l2

enter:	set fmt2, %o0
	call printf
	nop

	ba print
	inc %l1

exit_r:	ret
	restore

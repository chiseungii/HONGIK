fmt1: .asciz "input = "
fmt2: .asciz "%d"
fmt3: .asciz "output = non-prime number ( %d )\n"
fmt4: .asciz "output = prime number\n"

.align 4
.global main, scanf, printf

main:	save %sp, -104, %sp

	! 정수 입력 받기
	set fmt1, %o0
	call printf
	nop
	set fmt2, %o0
	add %fp, -4, %o1
	call scanf
	nop
	ld [%fp-4], %l0

	! 종료 조건 확인
	cmp %l0, 0
	ble exit_r
	nop

	! 반복문 돌리기 위해 필요한 정수 준비
	mov 2, %l1
	mov 1, %l2

loop:	cmp %l1, %l0
	bge print
	nop

	mov %l0, %o0
	mov %l1, %o1
	call .rem
	nop

	cmp %o0, 0
	be sum
	nop

	inc %l1
	ba loop
	nop

sum:	mov %o0, %o0
	mov %l2, %o1
	call .mul
	nop
	mov %o0, %l2
	inc %l1
	ba loop
	nop

print:	cmp %l2, 1
	be prime
	nop

	set fmt3, %o0
	mov %l2, %o1
	call printf
	nop
	ba main
	nop

prime:	set fmt4, %o0
	call printf
	nop
	ba main
	nop

exit_r:	ret
	restore

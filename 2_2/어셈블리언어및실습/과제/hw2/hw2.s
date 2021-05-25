fmt1: .asciz "input = "
fmt2: .asciz "%d"
fmt3: .asciz "== output == %x\n"
fmt4: .asciz "n = "

.align 4
.global main, scanf, printf

main: save %sp, -104, %sp

	! 첫 번째 정수 입력 받음
	set fmt1, %o0
	call printf
	nop
	set fmt2, %o0
	add %fp, -4, %o1
	call scanf
	nop
	ld [%fp-4], %l0

loop: ! 두 번째 정수 입력 받음
	set fmt4, %o0
	call printf
	nop
	set fmt2, %o0
	add %fp, -8, %o1
	call scanf
	nop
	ld [%fp-8], %l1

	! 종료 조건 확인
	cmp %l1, 0
	bl exit_r

	! n만큼 오른쪽으로 이동
	srl %l0, %l1, %l2
	set fmt3, %o0
	mov %l2, %o1
	call printf
	nop
	ba loop
	nop

	! n만큼 왼쪽으로 이동
	mov %l0, %l3
	mov 32, %l4
	sub %l4, %l1, %l4
	sll %l3, %l4, %l3

	! 둘이 더해줌
	add %l2, %l3, %l2

	! 출력
	set fmt3, %o0
	mov %l2, %o1
	call printf
	nop
	ba loop
	nop

exit_r: ret
	restore

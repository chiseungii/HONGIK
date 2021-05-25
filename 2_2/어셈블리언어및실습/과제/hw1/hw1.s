fmt2: .asciz "input="
fmt4: .asciz "%d"
.align 4

.global main, scanf, printf

main: save %sp, -104, %sp
loop: set fmt2, %o0
	call printf
	nop

	set fmt4, %o0
	add %fp, -4, %o1
	call scanf
	nop

	ld [%fp-4], %l1	! 첫 번째 정수 읽어서 로드

	subcc %l1, 0, %g0
	bl exit_r
	nop	! 첫 번째 정수 음수면 종료

	set fmt2, %o0
	call printf
	nop

	set fmt4, %o0
	add %fp, -8, %o1
	call scanf
	nop

	ld [%fp-8], %l2	! 두 번째 정수 읽어서 로드

	mov %l1, %l7
	add %l1, 1, %l6
	ba loop_sum
	nop

loop_sum: subcc %l6, %l2, %g0
	bg print_sum
	nop

	add %l6, %l7, %l7
	inc %l6
	ba loop_sum
	nop

print_sum: set %l17, %o0
	call print
	nop
	ba loop
	nop

exit_r: ret
	restore

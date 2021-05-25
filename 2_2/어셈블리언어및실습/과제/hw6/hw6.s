		! homework6

fmt0:		.asciz "input = "
fmt1:		.asciz "%d"
fmt2:		.asciz "output = %d\n"
		.align 4

		a = -4
		b = -8
		c = -12
		.global main, printf, scanf
main:		save %sp, -104, %sp

inputa:		set fmt0, %o0
		call printf
		nop
		set fmt1, %o0
		call scanf
		add %fp, a, %o1			! cin >> a

		ld [%fp + a], %o0
		cmp %o0, 0			! if (a < 0)
		bl exit_r				! return 0;
		nop

inputb:		set fmt0, %o0
		call printf
		nop
		set fmt1, %o0
		call scanf
		add %fp, b, %o1			! cin >> b

		set fmt0, %o0
		call printf
		nop
		set fmt1, %o0
		call scanf
		add %fp, c, %o1			! cin >> c

		ld [%fp + c], %o0
		cmp %o0, 1			! if (c == 1)
		be sub1
		nop
		ba sub2				! else
		nop

sub1:		ld [%fp + a], %o0
		call mymul
		ld [%fp + b], %o1
		ba print_r
		mov %o0, %o3

sub2:		ld [%fp + a], %o0
		call myadd
		ld [%fp + b], %o1
		ba print_r
		mov %o0, %o3

print_r:	set fmt2, %o0
		call printf
		mov %o3, %o1
		ba inputa
		nop

exit_r:		ret
		restore

mymul:		save %sp, -96, %sp

		clr %l0				! res : %l0, res = 0

		ba checki
		mov %i0, %l1			! i : %l1, i = a

checki:		cmp %l1, %i1			! i <= b
		bg,a exit_mul
		mov %l0, %i0
		
		mov %l1, %o0
		call .mul
		mov %l1, %o1			! i*i

		add %l0, %o0, %l0			! res += i*i

		ba checki
		inc %l1

exit_mul:	ret
		restore

myadd:		clr %l0

		ba checkj
		mov %o0, %l1

checkj:		cmp %l1, %o1
		bg,a exit_add
		mov %l0, %o0

		add %l0, %l1, %l0

		ba checkj
		inc %l1

exit_add:	retl
		nop

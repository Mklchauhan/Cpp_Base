	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 0	sdk_version 15, 5
	.globl	_swap_endianess_16bit           ; -- Begin function swap_endianess_16bit
	.p2align	2
_swap_endianess_16bit:                  ; @swap_endianess_16bit
	.cfi_startproc
; %bb.0:
	rev16	w0, w0
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_swap_endianess_32bit           ; -- Begin function swap_endianess_32bit
	.p2align	2
_swap_endianess_32bit:                  ; @swap_endianess_32bit
	.cfi_startproc
; %bb.0:
	rev	w0, w0
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
Lloh0:
	adrp	x0, l_str@PAGE
Lloh1:
	add	x0, x0, l_str@PAGEOFF
	bl	_puts
	mov	w8, #13330                      ; =0x3412
	str	x8, [sp]
Lloh2:
	adrp	x0, l_.str.2@PAGE
Lloh3:
	add	x0, x0, l_.str.2@PAGEOFF
	bl	_printf
	mov	w8, #13330                      ; =0x3412
	movk	w8, #30806, lsl #16
	str	x8, [sp]
Lloh4:
	adrp	x0, l_.str.3@PAGE
Lloh5:
	add	x0, x0, l_.str.3@PAGEOFF
	bl	_printf
	mov	w0, #0                          ; =0x0
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.loh AdrpAdd	Lloh4, Lloh5
	.loh AdrpAdd	Lloh2, Lloh3
	.loh AdrpAdd	Lloh0, Lloh1
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str.2:                               ; @.str.2
	.asciz	"swapping the 16 bit: %04x\n"

l_.str.3:                               ; @.str.3
	.asciz	"swapping the 32 bit: %08x\n"

l_str:                                  ; @str
	.asciz	"Big Endian"

.subsections_via_symbols

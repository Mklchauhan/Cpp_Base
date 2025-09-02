	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 0	sdk_version 15, 5
	.globl	_swap_endianess_16bit           ; -- Begin function swap_endianess_16bit
	.p2align	2
_swap_endianess_16bit:                  ; @swap_endianess_16bit
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	strh	w0, [sp, #14]
	ldrh	w9, [sp, #14]
	ldrh	w8, [sp, #14]
	asr	w8, w8, #8
	orr	w8, w8, w9, lsl #8
	and	w0, w8, #0xffff
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_swap_endianess_32bit           ; -- Begin function swap_endianess_32bit
	.p2align	2
_swap_endianess_32bit:                  ; @swap_endianess_32bit
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	w0, [sp, #12]
	ldr	w8, [sp, #12]
	lsr	w8, w8, #24
	and	w8, w8, #0xff
	ldr	w9, [sp, #12]
	lsr	w9, w9, #8
	and	w9, w9, #0xff00
	orr	w8, w8, w9
	ldr	w9, [sp, #12]
	lsl	w9, w9, #8
	and	w9, w9, #0xff0000
	orr	w8, w8, w9
	ldr	w9, [sp, #12]
	lsl	w9, w9, #24
	and	w9, w9, #0xff000000
	orr	w0, w8, w9
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	wzr, [x29, #-4]
	mov	w8, #4660                       ; =0x1234
	sturh	w8, [x29, #-6]
	sub	x8, x29, #12
	mov	w9, #22136                      ; =0x5678
	movk	w9, #4660, lsl #16
	stur	w9, [x29, #-12]
	str	x8, [sp, #8]
	ldr	x8, [sp, #8]
	ldr	w8, [x8]
	subs	w8, w8, #89
	b.ne	LBB2_2
	b	LBB2_1
LBB2_1:
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	b	LBB2_3
LBB2_2:
	adrp	x0, l_.str.1@PAGE
	add	x0, x0, l_.str.1@PAGEOFF
	bl	_printf
	b	LBB2_3
LBB2_3:
	ldurh	w0, [x29, #-6]
	bl	_swap_endianess_16bit
	mov	x9, sp
                                        ; implicit-def: $x8
	mov	x8, x0
	and	x8, x8, #0xffff
	str	x8, [x9]
	adrp	x0, l_.str.2@PAGE
	add	x0, x0, l_.str.2@PAGEOFF
	bl	_printf
	ldur	w0, [x29, #-12]
	bl	_swap_endianess_32bit
	mov	x9, sp
                                        ; implicit-def: $x8
	mov	x8, x0
	str	x8, [x9]
	adrp	x0, l_.str.3@PAGE
	add	x0, x0, l_.str.3@PAGEOFF
	bl	_printf
	mov	w0, #0                          ; =0x0
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"Little Endian\n"

l_.str.1:                               ; @.str.1
	.asciz	"Big Endian\n"

l_.str.2:                               ; @.str.2
	.asciz	"swapping the 16 bit: %04x\n"

l_.str.3:                               ; @.str.3
	.asciz	"swapping the 32 bit: %08x\n"

.subsections_via_symbols

	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 0	sdk_version 15, 4
	.globl	_non_volatile_read              ; -- Begin function non_volatile_read
	.p2align	2
_non_volatile_read:                     ; @non_volatile_read
	.cfi_startproc
; %bb.0:
	mov	w0, #123                        ; =0x7b
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_volatile_read                  ; -- Begin function volatile_read
	.p2align	2
_volatile_read:                         ; @volatile_read
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	mov	w8, #123                        ; =0x7b
	str	w8, [sp, #12]
	mov	w8, #16960                      ; =0x4240
	movk	w8, #15, lsl #16
LBB1_1:                                 ; =>This Inner Loop Header: Depth=1
	ldr	w0, [sp, #12]
	subs	w8, w8, #1
	b.ne	LBB1_1
; %bb.2:
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
	stp	x20, x19, [sp, #16]             ; 16-byte Folded Spill
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	mov	w8, #123                        ; =0x7b
	str	w8, [sp, #12]
	mov	w8, #16960                      ; =0x4240
	movk	w8, #15, lsl #16
LBB2_1:                                 ; =>This Inner Loop Header: Depth=1
	ldr	w19, [sp, #12]
	subs	w8, w8, #1
	b.ne	LBB2_1
; %bb.2:
	mov	w8, #123                        ; =0x7b
	str	x8, [sp]
Lloh0:
	adrp	x0, l_.str@PAGE
Lloh1:
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	str	x19, [sp]
Lloh2:
	adrp	x0, l_.str.1@PAGE
Lloh3:
	add	x0, x0, l_.str.1@PAGEOFF
	bl	_printf
	mov	w0, #0                          ; =0x0
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.loh AdrpAdd	Lloh2, Lloh3
	.loh AdrpAdd	Lloh0, Lloh1
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"Non-volatile result: %d\n"

l_.str.1:                               ; @.str.1
	.asciz	"Volatile result: %d\n"

.subsections_via_symbols

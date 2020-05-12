;-------------------------------------------------------------------------------
; MSP430 Assembler Code Template for use with TI Code Composer Studio
;
;
;-------------------------------------------------------------------------------
            .cdecls C,LIST,"msp430.h"       ; Include device header file
            
;-------------------------------------------------------------------------------
            .def    RESET                   ; Export program entry-point to
                                            ; make it known to linker.
;-------------------------------------------------------------------------------
            .text                           ; Assemble into program memory.
            .retain                         ; Override ELF conditional linking
                                            ; and retain current section.
            .retainrefs                     ; And retain any sections that have
                                            ; references to current section.

;-------------------------------------------------------------------------------
RESET       mov.w   #__STACK_END,SP         ; Initialize stackpointer
StopWDT     mov.w   #WDTPW|WDTHOLD,&WDTCTL  ; Stop watchdog timer


;-------------------------------------------------------------------------------
; Program designed to use timers to blink a LED on the MSP430 board
;-------------------------------------------------------------------------------

	; Set GPIO P1.0 to be an output
	BIS.B	#1, &PADIR_L

	; Enable interrupts
	NOP
	BIS		#GIE, SR
	NOP

	; Configure ACLK as the timer clock source, with both the
	; ID and IDEX dividers set to /1.
	; ACLK runs at 32768 Hz, and so will the timer.
	BIS		#TASSEL_1, &TA0CTL	; TASSEL == 1 selects ACLK
	BIS		#ID_0, &TA0CTL		; ID == 0 selects /1
	BIS		#TAIDEX_0, &TA0EX0	; IDEX == 0 selects /1


;-------------------------------------------------------------------------------
; Stack Pointer definition
;-------------------------------------------------------------------------------
            .global __STACK_END
            .sect   .stack
            
;-------------------------------------------------------------------------------
; Interrupt Vectors
;-------------------------------------------------------------------------------
            .sect   ".reset"                ; MSP430 RESET Vector
            .short  RESET
            

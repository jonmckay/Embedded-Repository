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
; Main loop here
;-------------------------------------------------------------------------------

;-------------------------------------------------------------------------------
; Program to blink LED on GPIO P1.0
;-------------------------------------------------------------------------------
	; Set GPIO P1.0 to be an output
	;BIS.B#1, &PADIR_L

;MainLoop:

	; Set output on GPIO P1.0 to high voltage
	;BIS.B#1, &PAOUT_L

	;MOV #50000, R4 ; works out to a delay of about 0.2 seconds

;DelayOn:

	;SUB #1, R4 ; subtract 1 from R4
	;CMP #0, R4 ; compare R4 to 0
	;JNZ DelayOn ; while R4 != 0, keep running DelayOn loop

	; Set output on GPIO P1.0 to low voltage
	;BIC.B#1, &PAOUT_L

	;MOV #50000, R4

;DelayOff:

	;SUB #1, R4
	;CMP #0, R4
	;JNZ DelayOff

	;JMP MainLoop

	;NOP

;-------------------------------------------------------------------------------
; Program to set GPIO P1.0 to an output (LED) and GPIO P1.1 to an input (button)
;-------------------------------------------------------------------------------

	; Set GPIO P1.0 to be an output (PADIR bit == 1)
	BIS.B	#1, &PADIR_L

	; Set GPIO P1.1 to be an input (PADIR bit == 0)
	BIC.B	#2, &PADIR_L

MainLoop:	; infinite loop that does nothing

	JMP MainLoop

	NOP

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
            

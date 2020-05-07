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
; Program to toggle a LED with a button press on MSP430 board
;-------------------------------------------------------------------------------

	; Set GPIO P1.0 to be an output (PADIR bit 0 == 1)
	BIS.B	#1, &PADIR_L

	; Set GPIO P1.1 to be an input (PADIR bit 1 == 0)
	BIC.B	#2, &PADIR_L

	; Set GPIO P1.1 to be pulled up or down (PAREN bit 1 == 1)
	BIS.B	#2, &PAREN_L

	; Set GPIO P1.1 to use a pull-up resistor (PAOUT bit 1 == 1)
	BIS.B	#2, &PAOUT_L

MainLoop:

	; Test if GPIO P1.1 input voltage is 0 or 1
	BIT.B	#2, &PAIN_L

	; If P1.1 == 0, button is pushed: turn on the LED on P1.0
	JZ TurnOnLED

	; Button is not pushed if we get here.
	; P1.1 == 1 if we get here, so turn off LED on P1.0
	BIC.B	#1, &PAOUT_L

	JMP AfterLEDSet

TurnOnLED:
	; We jumped here because the button is pressed.
	; Turn on LED and fall through to AfterLEDSet
	BIS.B	#1, &PAOUT_L


AfterLEDSet:

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
            

	AREA CODE1, CODE, READONLY
ENTRY
	LDR R0, =N1
	LDR R1, =N2
	LDRH R2, [R0]
	LDRH R3, [R1]
	MUL R4, R3, R2
	LDR R6, =RESULT
	STR R4, [R6]
STOP B STOP
N1 DCW 0X1234
N2 DCW 0X5678
	AREA DATA1, DATA, READWRITE
RESULT DCD 0
	END
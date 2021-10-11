# 32bit Systems

## CPU Registers

* 8 general purpose
	* EAX
		* Accumulator
		* Addition/Substraktion -> Ergebnis -> EAX
		* Rueckgabewert von Funktionen -> EAX
		* LSB 16bits: EAX
			* AL low 8 bits of EAX
			* AH high 8 bits of EAX
			* fuer die hoeheren muesste man shiften
	* EBX
		* Base Register
		* keine Sonderfunktion
		* oft als Zwischenspeicher (LS:EAX, MS:EBX)
	* ECX
		* Counter
		* Schleifenvariable
	* EDX
		* Data register
		* oft in Kombination mit EAX fuer Rechenoperationen
	* ESI
	* EDI
	* EBP
	* ESP
* 2 index registers (end with I)
	* ESI
		* source index
		* um pointer zu speichern (der auf speicher zum auslesen zeigt)
	* EDI
		* destination index
		* pointer auf bereich in den geschrieben werden soll
* 2 pointer register (end with P)
	* EBP
		* base pointer
	* ESP
		* oberste stack adresse
		* aendert sich jedes mal, wenn gepushed/gepopped wird

## special register

* EIP
	* instruction pointer
	* next address to instruction to run
	* can't be changed directly
	* can be influenced by jumps, calls and returns

# register naming convention

* 64 bit: RAX
* 32 bit: EAX (low)
* 16 bit: AX (low)
* 8 bit: AH (high) AL (low)


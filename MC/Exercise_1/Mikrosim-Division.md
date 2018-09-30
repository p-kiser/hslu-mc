# 8-Bit Division im Mikrosim

## Aufgabe

Mithilfe des Mikrosim32-Simulators soll eine 8Bit-Division ausgeführt werden, indem der
Mikrocode (mikrocode.mcs) modifiziert und das entsprechende Programm geschrieben wird.

**Spezifikationen:**

1. Input: Dividend-Adresse = 12h
2. Input: Divisor-Adresse = 13h
3. Output: Quotient-Adresse = 14h
4. Output: Rest-Adresse = 15h
5. Flag-Adresse „Divisor = 0“ = 16h
6. Eine Division durch 0 ist nicht zulässig und darf nicht ausgeführt werden:
    - Falls Divisor = 0, Inhalt von 16h = FFh
    - Falls Divisor  0, Inhalt von 16h = 00h 

1. In der Control-Unit zwei Befehle auf DIV und MOD umstellen und umbenennen.
2. Arbeitsspeicher:

- 00: `LDA $13` # Dividend in Akkumulator laden
- 01: `JNZ $05` # Weitermachen, falls Dividend nicht Null
- 02: `LDA $17` # Status-Code in Akku laden (Error)
- 03: `STA $16` # Status-Code speichern
- 04: `JMP $00` # Fertig
- 05: `LDA $18` # Status-Code laden (OK)
- 06: `STA $16` # Status-Code speichern 
- 07: `LDA $12` # Dividend laden
- 08: `DIV $13` # Division
- 09: `STA $14` # Resultat speichern
- 0A: `LDA $12` # Dividend laden
- 0B: `MOD $13` # Modulo
- 0C: `STA $15` # Resultat speichern
- 0D: `JMP $00`   

...
- 12: `14.` # Dividend
- 13: `3.`  # Divisor

...

- 17: `$FF` # Status-Code Error
- 18: `$00` # Status-Code OK

# CoreWar
# CoreWar
Здесь представленна реализация игры CoreWar. Это коммандный проект четырех человек.  

Бой в памяти (англ. Core War) — разновидность компьютерной игры «Дарвин», разработанная
Александром К. Дьюдни.  

В этой игре чемпионы(программы, написанные на псевдоассемблере) боряться между собой на арене,
представляющую собой закольцованное поле из 4096 байт. Сначала чемпионы загружаются на поле и
инициализируются их каретки . Затем каретки последовательно исполняют код своих чемпионов. Победителем считается тот,
кто последним отрапортовал о своей целостности.  

Проект состоит из 2 программ:
 - asm для перевода *.s файлов с кодом чемпионов в файлы *.cor с байт кодом. 
 ```
il-g1% ./asm
Usage: ./asm <sourcefile.s>
```
 - corewar для осуществления самой игры. 
 
 
В папке standard лежат эталонные программы standart/asm и standart/corewar, а также примеры чемпионов (многие невалидные). 

Usage:

```
il-g1% ./corewar 
Usage:
	-a	: Prints output from "aff" (Default is to hide it)
#### TEXT OUTPUT MODE ##################################################
	-d N	: Dumps memory (x64 mode) after N cycles then exits
	-dump N	: Dumps memory (x32 mode) after N cycles then exits
	-n N	: Sets the number of the next player
	-v N	: Verbosity levels, can be added together to enable several
		* 2 : Show cycles
		* 4 : Show operations
		* 8 : Show deaths
		* 16 : Show cursors movements
#### OUTPUT MODE #######################################################
	-vis N	: Turn on visualisator and/or set size of cell
		* N in range [1, 18] or not defined; (18 is Warcraft mode)
```

Пример:

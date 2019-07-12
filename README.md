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
 
 
В папке standard лежат эталонные программы standart/asm и standart/corewar, а также примеры чемпионов (standart/champs/examples точно валидные). 

Usage:

```
il-g1% ./corewar 
Usage: ./corewar <champions.cor>
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
```
il-g1% ./asm zork.s
Writing output program to zork.cor
il-g1% ./asm helltrain.s
Writing output program to helltrain.cor
il-g1% ./corewar  helltrain.cor zork.cor helltrain.cor 
Introducing contestants...
* Player 1, weighing 617 bytes, "helltrain" ("choo-choo, motherf*****s !") !
* Player 2, weighing 23 bytes, "zork" ("I'M ALIIIIVE") !
* Player 3, weighing 617 bytes, "helltrain" ("choo-choo, motherf*****s !") !
Contestant 1, "helltrain", has won !
```
Визуализация с флагом -vis 18 с 4-мя одинаковыми чампионами helltrain.cor (копируют свой вспомогательный код, который пытается перезаписать все игровое поле):
![Alt text](images/image2.png?raw=true "First example") 
Визуализация с флагом -vis 18 с 2-мя одинаковыми чампионами helltrain.cor  и  zork.cor (был стерт в начале):
![Alt text](images/image1.png?raw=true "Second example") 

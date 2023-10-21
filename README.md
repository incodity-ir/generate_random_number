# generate_random_number
program for generating random numbers with C Language

To write a program that could make a generate random numbers, one must notice that a generate random begins at a specific point.
<strong>For this you need to change the starting point to generate completely random numbers</strong>
<br/>
for this, u can use the random function. -> ( include <stdlib.h> )
<br><br>
<hr>

U see 6 files in project :
<br>
1 - <strong> main.c </strong>  : Program Main file
<br>
2 - <strong> main.o </strong>  : object file as main.c ( created by command : gcc -c main.c -o main.o )
<br>
3 - <strong> helper.c </strong>  : Functions definition file
<br>
4 - <strong> helper.o </strong>  : object file as helper.c ( created by command : gcc -c helper.c -o helper.o )
<br>
5 - <strong> header.h </strong> : Create library for functions declration
<br>
6 - <strong> app </strong> : Executable File ( created by command : gcc *.o -o app )
<br>
<br><br>
<hr>
<h3>Run Application :</h3>
open Terminal in linux and enter the address of the include project.
<br>
Then enter the following command :
<br>
command : ./app

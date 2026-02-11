 # Push_swap

This project has been created as part of the 42 curriculum by rzimaeva.

## What is it ?

The push_swap project consists in sorting different elements from a pile thanks to specific operations. They will have to be sorted by the fewer operations possible.

## Algorithm

For the project to be doable, we have to use a main algorithm to sort a big number of elements such as the turkish algorithm or even radix which is the one I used.
Radix uses the bitwise logic to sort numbers from 100 to 500 for example.
To sort a smaller number of elements I will use a sort_three (using different conditions to manage all the possibilities from 3 numbers) and a sort_five (I will take the two smallest numbers to pile b and proceed to sort them in pile a).

## Ressources

For this project I mainly used 42 peer learning and used AI for the main instructions to code so I could have an idea of where to start and how to agence my project but also for explanations on different concepts. I also went on the radix page from geekstogeeks.org to understand how the algorithm works and also perso.esiee.fr for circular chained lists and other openclassrooms whereabouts. 

## How to use it ?

You have to write "make" in your terminal so the makefile can create the push_swap program. Once you did that you just have to use the program we just created like "./push_swap 5 89 7 23 1" for example.
Once you're done and you want to remove all the additional files and program, you just have to "make fclean".

if we use a visualizer from o-reo's github for example, we will first go to the visualizer git.
Then write in the terminal
- ../push_swap

After that :
- mkdir build
- cd build
- cmake ..
- make

And finally
- ./bin/visualizer

During the evaluation, use following commands :
- ARG="7 8 1 77 89 5"; ./push_swap $ARG > instructions.txt && echo "Nombre de coups :" && wc -l < instructions.txt
- ARG=$(shuf -i 0-1000 -n 100 | tr '\n' ' '); ./push_swap $ARG | wc -l | checker_OS ARG

## Performances

Since I used the radix algorithm I don't have all the requirements for a 100% grade and will instead benefit from a 84% grade.
For 100 numbers, I have 1084 operations.
For 500 numbers, I have 6784 operations.

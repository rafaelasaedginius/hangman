# hangman
First of all a lot of thanks to my collaborator and mentor @Richisuper for guiding me through all the project untill finished.
It's a long and exhausting learning project but yet feel so rewarding.
this is my first simple made game wit C language, honestly at this point im still a noob without experience but i will keep on doing my best and trying to do better and better
Wish me luck, and i Hope u can all enjoy this simple made game.

## code analysis
i will start to explain the code from .c format to .h format
1. main.c : is a file that mainly used only for interface and choosing the next phase of the game. u can choose with whether with string or number character based on the number beside the menu.
2. language.c : language.c is the file containing the language option function to link you to the next phase of the game when u choose the language to proceed the game, also it will link the game to a file containing the word or phrase that will be used on the game. this game is based with 2 language that is english and indonesian. so thats why there is funtion named wordbank and bankkata.
3. level editor.c : by it's name this file is solely for editing the level file which contain the word or phrase that linked to language.c file. this level editor function is using fopen read, write and fclose function.
4. score.c : score.c like level editor.c is also 1 single purpose file which is to maintain and adding the current score untill the game ends, and save the score to a file named scores.txt. the file is including a function if there is no such file exits, the function will make it instead and use it for saving the score each time we play. the score saved is also include, time date, difficulty and language that used in each game proceeding. 
5. game.c : in game.c there is a lot of fucntion but i will divide the main use of funtion in 3.

**the first one is language linking funtion. the difficulty & language linking function use is to direct u to the wordbak or bankkata depending on the language input that returned from the function of chooselang in language.c. it will link user to the file of word and phrase used in game , and also to pass it to score.c to be saved in each score we make in each game played.

**the second is start funtion which is a basic function that appear the first time after user pick 1 or START on the UI, it will make the user choose a coice of difficulty containing a number of * character that represent the difficulty for each * added, and after the difficulty choosing is done the user is linked to chooselang and then linked again to difficulty function i describe in the first game.c

**the last is proceedgame function which is basically all the game logic that me and my collaborator @richiesuper build and linked with checker.c. the proceedgame have 3 parameter which is sentences(the word or phrases), difficulty, (the difficulty), and the language(lanaguage choosen). the proceed game also use the help of checker.c whic contain check answer function which is basiccaly checking the input of character that user are giving and running the boolean of true and false commiting the game algorithms and will have 7 chances starting with 0 and ending with 6 while in every mistake a new type of ascii arts will be presented as a warning of lives. before check answer function is comitted there is also hide answer functioon which is used in each loop to hide or i can say replace the all the character build the word or phrase with '_" as a overview of the game.

6. all of the .h format file :
its the header file which contain the prototype of all function in the same file name with the .c format and there is an exception in hangman.h which is a header of start, level_editor, and score funtion.

7. .txt file
all the .txt file is used for saving level except scores.txt which the fucntion automatically made for saving the score of user.

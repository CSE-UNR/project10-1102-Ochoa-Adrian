//Adrian Ochoa
//5/6/2025

#include <stdio.h>
#define READ_FILE "mystery.txt"
#define WRITE_FILE "words.txt"
#define MAX_GUESS 6
#define WORD_LENGTH 5

int string_length(char word[][]);
int string_match(char word1[][], char word2[][]);
void copy_string (char copy[][], char copyfrom[][]);
void get_guess(char guess[][]);
int yes_guess(char guess[][]);
void check_guess(char guess[],

int main(){
char mystery[WORD_LENGTH]
FILE* rptr, wptr

 rptr = fopen(READ_FILE, "r");

if(rptr == NULL){
printf("Can't read.");
return 0;
}

wptr = fopen(WRITE_FILE, "w");
if(wptr == NULL){
printf("Can't write.");
return 0;
}

printf("GUESS %d!: Enter the Guess: ");
printf("=============================");


if(MAX_GUESS != WORD_LENGTH){
printf("Your guess must be 5 letters long.");
}


if(get_guess == "mystery.txt"){
printf("YOU GUESS THE WORD!\n");
printf("GOATED!");


fscanf(rptr, "%s", mystery);

fclose(rptr);
fclose(wptr);


return 0;
}


int string_length(char word[]){
int count = 0;
while (word[count]!= '\0'){
count++;

}
return count;
}

int words_match(char word1[][], char word2[][]){

for(int i = 0; i < WORD_LENGTH; i++){
if(word1[i][] != word2[i][]){
}
}
return word1[][];
}

void copy_string(char copy[][], char copyfrom[][]){
for (int i = 0; i < WORD_LENGTH; i++){
copy[i][] = copyfrom[i][];
}
copy[WORD_LENGTH] = '\0';
}


void get_guess(char guess[][]){
char letters;
while(int i < WORD_LENGTH)
if(letters = '\n'){
i++;

}

//struggled :(

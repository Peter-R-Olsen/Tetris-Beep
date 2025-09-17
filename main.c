#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <unistd.h>

// Oktav 4 (Midterste C til B)
//    C4 - 262 Hz
//    C#4 / Db4 - 277 Hz
//    D4 - 294 Hz
//    D#4 / Eb4 - 311 Hz
//    E4 - 330 Hz
//    F4 - 349 Hz
//    F#4 / Gb4 - 370 Hz
//    G4 - 392 Hz
//    G#4 / Ab4 - 415 Hz
//    A4 - 440 Hz (Den standard, mange instrumenter stemmes efter)
//    A#4 / Bb4 - 466 Hz
//    B4 - 494 Hz
// Oktav 5 (Højere C til B)
//    C5 - 523 Hz
//    C#5 / Db5 - 554 Hz
//    D5 - 587 Hz
//    D#5 / Eb5 - 622 Hz
//    E5 - 659 Hz
//    F5 - 698 Hz
//    F#5 / Gb5 - 740 Hz
//    G5 - 784 Hz
//    G#5 / Ab5 - 831 Hz
//    A5 - 880 Hz
//    A#5 / Bb5 - 932 Hz
//    B5 - 988 Hz
int a4 = 440;
int b4 = 494;
int c4 = 262;
int d4 = 294;
int e4 = 330;
int f4 = 349;
int fs4 = 370;
int g4 = 392;
int c5 = 523;
int d5 = 587;
int e5 = 659;

void Tetris() {
Beep(b4, 400); // b ok
Beep(fs4, 200); // f# ok
Beep(g4, 200); // g ok
Beep(a4, 400); // a ok
Beep(g4, 200); // g ok
Beep(fs4, 200); // f# ok
Beep(e4, 400); // e ok
Beep(e4, 200); // e ok
Beep(g4, 200); // g ok
Beep(b4,400); // b ok
Beep(a4,200); //a ok
Beep(g4,200); // g ok
Beep(fs4,400); // f# ok
Beep(fs4,200); // f# ok
Beep(g4,200); // g ok
Beep(a4,400); // a ok
Beep(b4,350); // b ok
Beep(g4,480); // g ok
Beep(e4,320); // e ok
Beep(e4,320); // e ok

usleep(380000); // ok

Beep(g4,450); // g ok
Beep(b4,200); // b ok
Beep(e5,400); // e ok
Beep(d5,200); // d ok
Beep(c5,200); // c ok
Beep(b4,500); // b ok
Beep(g4,220); // g ok
Beep(b4,400); // b ok
Beep(a4,200); // a ok
Beep(g4,200); // g ok
Beep(fs4,400); // f# ok
Beep(fs4,200); // F# ok
Beep(g4,200); // g ok
Beep(a4,400); // a ok
Beep(b4,350); // b ok
Beep(g4,410); // g ok
Beep(e4,320); // e ok
Beep(e4,320); // e ok

}

int main(){
    printf("Stay awhile and Listen");
Tetris();
sleep(1);
return (0);
}
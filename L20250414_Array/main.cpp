#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

const int WIDTH = 12;
const int HEIGHT = 10;

struct Player {
    int x;
    int y;
    int inputKey;
    char icon = 'P';
};

char map[HEIGHT][WIDTH + 1] = {
    "***********",
    "*         *",
    "*         *",
    "*         *",
    "*         *",
    "*         *",
    "*         *",
    "*         *",
    "*         *",
    "***********"
};

Player player = { 2, 1, 0 };


void Input() {
    int key = _getch();
    if (key == 224) {
        player.inputKey = _getch();
    }
    else if (key == 27) {
        exit(0); 
    }
}


void Tick() {
    int nx = player.x;
    int ny = player.y;

    switch (player.inputKey) {
    case 72: ny--; break; // ↑
    case 80: ny++; break; // ↓
    case 75: nx--; break; // ←
    case 77: nx++; break; // →
    }

    if (map[ny][nx] != '*') {
        player.x = nx;
        player.y = ny;
    }

    player.inputKey = 0;
}


void Render() {
    system("cls");
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (x == player.x && y == player.y)
                cout << player.icon;
            else
                cout << map[y][x];
        }
        cout << endl;
    }
}

int main() {
    while (true) {
        Input();   
        Tick();    
        Render();  
    }


    return 0;
}


/*
By: DaviJMC
LastUpdate: 31/01/2024 (DD/MM/YYYY)
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define wht 0
#define org 1
#define grn 2
#define red 3
#define ble 4
#define yel 5


// Matriz inicial do cubo
void setCubo(int cubo[6][3][3]) {
    cubo[0][0][0] = wht;
    cubo[0][0][1] = wht;
    cubo[0][0][2] = wht;
    cubo[0][1][0] = wht;
    cubo[0][1][1] = wht;
    cubo[0][1][2] = wht;
    cubo[0][2][0] = wht;
    cubo[0][2][1] = wht;
    cubo[0][2][2] = wht;
    cubo[1][0][0] = org;
    cubo[1][0][1] = org;
    cubo[1][0][2] = org;
    cubo[1][1][0] = org;
    cubo[1][1][1] = org;
    cubo[1][1][2] = org;
    cubo[1][2][0] = org;
    cubo[1][2][1] = org;
    cubo[1][2][2] = org;
    cubo[2][0][0] = grn;
    cubo[2][0][1] = grn;
    cubo[2][0][2] = grn;
    cubo[2][1][0] = grn;
    cubo[2][1][1] = grn;
    cubo[2][1][2] = grn;
    cubo[2][2][0] = grn;
    cubo[2][2][1] = grn;
    cubo[2][2][2] = grn;
    cubo[3][0][0] = red;
    cubo[3][0][1] = red;
    cubo[3][0][2] = red;
    cubo[3][1][0] = red;
    cubo[3][1][1] = red;
    cubo[3][1][2] = red;
    cubo[3][2][0] = red;
    cubo[3][2][1] = red;
    cubo[3][2][2] = red;
    cubo[4][0][0] = ble;
    cubo[4][0][1] = ble;
    cubo[4][0][2] = ble;
    cubo[4][1][0] = ble;
    cubo[4][1][1] = ble;
    cubo[4][1][2] = ble;
    cubo[4][2][0] = ble;
    cubo[4][2][1] = ble;
    cubo[4][2][2] = ble;
    cubo[5][0][0] = yel;
    cubo[5][0][1] = yel;
    cubo[5][0][2] = yel;
    cubo[5][1][0] = yel;
    cubo[5][1][1] = yel;
    cubo[5][1][2] = yel;
    cubo[5][2][0] = yel;
    cubo[5][2][1] = yel;
    cubo[5][2][2] = yel;
}


void showCubo(int cubo[6][3][3]){
    for(int i=0; i<3; i++){
        cout << "                        ";
        for(int j=0; j<3; j++){
            //printf("i: %d j:%d ", i, j);
            switch(cubo[yel][i][j]){
                case 0:
                    cout << "wht ";
                    break;
                case 1:
                    cout << "org ";
                    break;
                case 2:
                    cout << "grn ";
                    break;
                case 3:
                    cout << "red ";
                    break;
                case 4:
                    cout << "ble ";
                    break;
                case 5:
                    cout << "yel ";
                    break;
            }
        }
        cout << endl;
    }
    cout << endl;
    for(int k=0; k<3; k++){
        for(int i=1; i<5; i++){
            for(int j=0; j<3; j++){
                //printf("K:%dI:%dJ:%d ", k, i, j);
                switch(cubo[i][k][j]){
                    case 0:
                        cout << "wht ";
                        break;
                    case 1:
                        cout << "org ";
                        break;
                    case 2:
                        cout << "grn ";
                        break;
                    case 3:
                        cout << "red ";
                        break;
                    case 4:
                        cout << "ble ";
                        break;
                    case 5:
                        cout << "yel ";
                        break;
                }
            }
            cout << "            "; //
        }
        cout << endl;
    }
    cout << endl;
    for(int i=0; i<3; i++){
        cout << "                        ";
        for(int j=0; j<3; j++){
            //printf("i: %d j: %d ", i, j);
            switch(cubo[wht][i][j]){
                case 0:
                    cout << "wht ";
                    break;
                case 1:
                    cout << "org ";
                    break;
                case 2:
                    cout << "grn ";
                    break;
                case 3:
                    cout << "red ";
                    break;
                case 4:
                    cout << "ble ";
                    break;
                case 5:
                    cout << "yel ";
                    break;
            }
        }
        cout << endl;
    }
    cout << endl << endl << endl;
}


int nextmov(){
    char mov;
    cin >> mov;
    return mov;
}


int embaralha(){
    char mov = 'r';
    int rnd;
    rnd = rand()%120;
    if(rnd<=10){
        mov = 'r';
    }else if(rnd<=20){
        mov = 'R';
    }else if(rnd<=30){
        mov = 'l';
    }else if(rnd<=40){
        mov = 'L';
    }else if(rnd<=50){
        mov = 'u';
    }else if(rnd<=60){
        mov = 'U';
    }else if(rnd<=70){
        mov = 'd';
    }else if(rnd<=80){
        mov = 'D';
    }else if(rnd<=90){
        mov = 'b';
    }else if(rnd<=100){
        mov = 'B';
    }else if(rnd<=110){
        mov = 'f';
    }else if(rnd<=120){
        mov = 'F';
    }
    return mov;
}


void right(int cubo[6][3][3]){
    int aux[3]; //rodar lado vermelho
    aux[0] = cubo[wht][0][2];
    aux[1] = cubo[wht][1][2];
    aux[2] = cubo[wht][2][2];
    cubo[wht][0][2] = cubo[ble][0][2];
    cubo[wht][1][2] = cubo[ble][1][2];
    cubo[wht][2][2] = cubo[ble][2][2];
    cubo[ble][0][2] = cubo[yel][0][2];
    cubo[ble][1][2] = cubo[yel][1][2];
    cubo[ble][2][2] = cubo[yel][2][2];
    cubo[yel][0][2] = cubo[grn][0][2];
    cubo[yel][1][2] = cubo[grn][1][2];
    cubo[yel][2][2] = cubo[grn][2][2];
    cubo[grn][0][2] = aux[0];
    cubo[grn][1][2] = aux[1];
    cubo[grn][2][2] = aux[2];
    aux[0] = cubo[red][0][0];
    aux[1] = cubo[red][1][0];
    cubo[red][0][0] = cubo[red][2][0];
    cubo[red][1][0] = cubo[red][2][1];
    cubo[red][2][0] = cubo[red][2][2];
    cubo[red][2][1] = cubo[red][1][2];
    cubo[red][2][2] = cubo[red][0][2];
    cubo[red][1][2] = cubo[red][0][1];
    cubo[red][0][2] = aux[0];
    cubo[red][0][1] = aux[1];
}

void rightLine(int cubo[6][3][3]){
    int aux[3];
    aux[0] = cubo[wht][0][2];
    aux[1] = cubo[wht][1][2];
    aux[2] = cubo[wht][2][2];
    cubo[wht][0][2] = cubo[grn][0][2];
    cubo[wht][1][2] = cubo[grn][1][2];
    cubo[wht][2][2] = cubo[grn][2][2];
    cubo[grn][0][2] = cubo[yel][0][2];
    cubo[grn][1][2] = cubo[yel][1][2];
    cubo[grn][2][2] = cubo[yel][2][2];
    cubo[yel][0][2] = cubo[ble][0][2];
    cubo[yel][1][2] = cubo[ble][1][2];
    cubo[yel][2][2] = cubo[ble][2][2];
    cubo[ble][0][2] = aux[0];
    cubo[ble][1][2] = aux[1];
    cubo[ble][2][2] = aux[2];
    aux[1] = cubo[red][1][0];
    aux[2] = cubo[red][2][0];
    cubo[red][2][0] = cubo[red][0][0];
    cubo[red][1][0] = cubo[red][0][1];
    cubo[red][0][0] = cubo[red][0][2];
    cubo[red][0][1] = cubo[red][1][2];
    cubo[red][0][2] = cubo[red][2][2];
    cubo[red][1][2] = cubo[red][2][1];
    cubo[red][2][2] = aux[2];
    cubo[red][2][1] = aux[1];
}

void left(int cubo[6][3][3]){
     int aux[3];
    aux[0] = cubo[wht][0][0];
    aux[1] = cubo[wht][1][0];
    aux[2] = cubo[wht][2][0];
    cubo[wht][0][0] = cubo[ble][0][0];
    cubo[wht][1][0] = cubo[ble][1][0];
    cubo[wht][2][0] = cubo[ble][2][0];
    cubo[ble][0][0] = cubo[yel][0][0];
    cubo[ble][1][0] = cubo[yel][1][0];
    cubo[ble][2][0] = cubo[yel][2][0];
    cubo[yel][0][0] = cubo[grn][0][0];
    cubo[yel][1][0] = cubo[grn][1][0];
    cubo[yel][2][0] = cubo[grn][2][0];
    cubo[grn][0][0] = aux[0];
    cubo[grn][1][0] = aux[1];
    cubo[grn][2][0] = aux[2];
    aux[1] = cubo[org][1][0];
    aux[2] = cubo[org][2][0];
    cubo[org][2][0] = cubo[org][0][0];
    cubo[org][1][0] = cubo[org][0][1];
    cubo[org][0][0] = cubo[org][0][2];
    cubo[org][0][1] = cubo[org][1][2];
    cubo[org][0][2] = cubo[org][2][2];
    cubo[org][1][2] = cubo[org][2][1];
    cubo[org][2][2] = aux[2];
    cubo[org][2][1] = aux[1];
}

void leftLine(int cubo[6][3][3]){
    int aux[3];
    aux[0] = cubo[wht][0][0];
    aux[1] = cubo[wht][1][0];
    aux[2] = cubo[wht][2][0];
    cubo[wht][0][0] = cubo[grn][0][0];
    cubo[wht][1][0] = cubo[grn][1][0];
    cubo[wht][2][0] = cubo[grn][2][0];
    cubo[grn][0][0] = cubo[yel][0][0];
    cubo[grn][1][0] = cubo[yel][1][0];
    cubo[grn][2][0] = cubo[yel][2][0];
    cubo[yel][0][0] = cubo[ble][0][0];
    cubo[yel][1][0] = cubo[ble][1][0];
    cubo[yel][2][0] = cubo[ble][2][0];
    cubo[ble][0][0] = aux[0];
    cubo[ble][1][0] = aux[1];
    cubo[ble][2][0] = aux[2];
    aux[0] = cubo[org][0][0];
    aux[1] = cubo[org][1][0];
    cubo[org][0][0] = cubo[org][2][0];
    cubo[org][1][0] = cubo[org][2][1];
    cubo[org][2][0] = cubo[org][2][2];
    cubo[org][2][1] = cubo[org][1][2];
    cubo[org][2][2] = cubo[org][0][2];
    cubo[org][1][2] = cubo[org][0][1];
    cubo[org][0][2] = aux[0];
    cubo[org][0][1] = aux[1];
}

void up(int cubo[6][3][3]){
    int aux[3];
    aux[0] = cubo[grn][0][0];
    aux[1] = cubo[grn][0][1];
    aux[2] = cubo[grn][0][2];
    cubo[grn][0][0] = cubo[red][0][0];
    cubo[grn][0][1] = cubo[red][0][1];
    cubo[grn][0][2] = cubo[red][0][2];
    cubo[red][0][0] = cubo[ble][0][0];
    cubo[red][0][1] = cubo[ble][0][1];
    cubo[red][0][2] = cubo[ble][0][2];
    cubo[ble][0][0] = cubo[org][0][0];
    cubo[ble][0][1] = cubo[org][0][1];
    cubo[ble][0][2] = cubo[org][0][2];
    cubo[org][0][0] = aux[0];
    cubo[org][0][1] = aux[1];
    cubo[org][0][2] = aux[2];
    aux[1] = cubo[yel][0][0];
    aux[2] = cubo[yel][0][1];
    cubo[yel][0][0] = cubo[yel][0][2];
    cubo[yel][0][1] = cubo[yel][1][2];
    cubo[yel][0][2] = cubo[yel][2][2];
    cubo[yel][1][2] = cubo[yel][2][1];
    cubo[yel][2][2] = cubo[yel][2][0];
    cubo[yel][2][1] = cubo[yel][1][0];
    cubo[yel][2][0] = aux[1];
    cubo[yel][1][0] = aux[2];    
}

void upLine(int cubo[6][3][3]){
    int aux[3];
    aux[0] = cubo[grn][0][0];
    aux[1] = cubo[grn][0][1];
    aux[2] = cubo[grn][0][2];
    cubo[grn][0][0] = cubo[org][0][0];
    cubo[grn][0][1] = cubo[org][0][1];
    cubo[grn][0][2] = cubo[org][0][2];
    cubo[org][0][0] = cubo[ble][0][0];
    cubo[org][0][1] = cubo[ble][0][1];
    cubo[org][0][2] = cubo[ble][0][2];
    cubo[ble][0][0] = cubo[red][0][0];
    cubo[ble][0][1] = cubo[red][0][1];
    cubo[ble][0][2] = cubo[red][0][2];
    cubo[red][0][0] = aux[0];
    cubo[red][0][1] = aux[1];
    cubo[red][0][2] = aux[2];
    aux[1] = cubo[yel][0][0];
    aux[2] = cubo[yel][0][1];
    cubo[yel][0][0] = cubo[yel][2][0];
    cubo[yel][0][1] = cubo[yel][1][0];
    cubo[yel][2][0] = cubo[yel][2][2];
    cubo[yel][1][0] = cubo[yel][2][1];
    cubo[yel][2][2] = cubo[yel][0][2];
    cubo[yel][2][1] = cubo[yel][1][2];
    cubo[yel][0][2] = aux[1];
    cubo[yel][1][2] = aux[2];
}

void down(int cubo[6][3][3]){
    int aux[3];
    aux[0] = cubo[grn][2][0];
    aux[1] = cubo[grn][2][1];
    aux[2] = cubo[grn][2][2];
    cubo[grn][2][0] = cubo[red][2][0];
    cubo[grn][2][1] = cubo[red][2][1];
    cubo[grn][2][2] = cubo[red][2][2];
    cubo[red][2][0] = cubo[ble][2][0];
    cubo[red][2][1] = cubo[ble][2][1];
    cubo[red][2][2] = cubo[ble][2][2];
    cubo[ble][2][0] = cubo[org][2][0];
    cubo[ble][2][1] = cubo[org][2][1];
    cubo[ble][2][2] = cubo[org][2][2];
    cubo[org][2][0] = aux[0];
    cubo[org][2][1] = aux[1];
    cubo[org][2][2] = aux[2];
    aux[1] = cubo[wht][0][0];
    aux[2] = cubo[wht][0][1];
    cubo[wht][0][0] = cubo[wht][0][2];
    cubo[wht][0][1] = cubo[wht][1][2];
    cubo[wht][0][2] = cubo[wht][2][2];
    cubo[wht][1][2] = cubo[wht][2][1];
    cubo[wht][2][2] = cubo[wht][2][0];
    cubo[wht][2][1] = cubo[wht][1][0];
    cubo[wht][2][0] = aux[1];
    cubo[wht][1][0] = aux[2];
}

void downLine(int cubo[6][3][3]){
    int aux[3];
    aux[0] = cubo[grn][2][0];
    aux[1] = cubo[grn][2][1];
    aux[2] = cubo[grn][2][2];
    cubo[grn][2][0] = cubo[org][2][0];
    cubo[grn][2][1] = cubo[org][2][1];
    cubo[grn][2][2] = cubo[org][2][2];
    cubo[org][2][0] = cubo[ble][2][0];
    cubo[org][2][1] = cubo[ble][2][1];
    cubo[org][2][2] = cubo[ble][2][2];
    cubo[ble][2][0] = cubo[red][2][0];
    cubo[ble][2][1] = cubo[red][2][1];
    cubo[ble][2][2] = cubo[red][2][2];
    cubo[red][2][0] = aux[0];
    cubo[red][2][1] = aux[1];
    cubo[red][2][2] = aux[2];
    aux[1] = cubo[wht][0][0];
    aux[2] = cubo[wht][0][1];
    cubo[wht][0][0] = cubo[wht][2][0];
    cubo[wht][0][1] = cubo[wht][1][0];
    cubo[wht][2][0] = cubo[wht][2][2];
    cubo[wht][1][0] = cubo[wht][2][1];
    cubo[wht][2][2] = cubo[wht][0][2];
    cubo[wht][2][1] = cubo[wht][1][2];
    cubo[wht][0][2] = aux[1];
    cubo[wht][1][2] = aux[2];    
}

void back(int cubo[6][3][3]){
    int aux[3];
    aux[1] = cubo[ble][0][0];
    aux[2] = cubo[ble][0][1];
    cubo[ble][0][0] = cubo[ble][0][2];
    cubo[ble][0][1] = cubo[ble][1][2];
    cubo[ble][0][2] = cubo[ble][2][2];
    cubo[ble][1][2] = cubo[ble][2][1];
    cubo[ble][2][2] = cubo[ble][2][0];
    cubo[ble][2][1] = cubo[ble][1][0];
    cubo[ble][2][0] = aux[1];
    cubo[ble][1][0] = aux[2];
    aux[0] = cubo[red][0][2];
    aux[1] = cubo[red][1][2];
    aux[2] = cubo[red][2][2];
    cubo[red][0][2] = cubo[wht][2][2];
    cubo[red][1][2] = cubo[wht][2][1];
    cubo[red][2][2] = cubo[wht][2][0];
    cubo[wht][2][2] = cubo[org][2][0];
    cubo[wht][2][1] = cubo[org][1][0];
    cubo[wht][2][0] = cubo[org][0][0];
    cubo[org][2][0] = cubo[yel][0][0];
    cubo[org][1][0] = cubo[yel][0][1];
    cubo[org][0][0] = cubo[yel][0][2];
    cubo[yel][0][2] = aux[2];
    cubo[yel][0][1] = aux[1];
    cubo[yel][0][0] = aux[0];
}

void backLine(int cubo[6][3][3]){
    int aux[3];
    aux[1] = cubo[ble][0][0];
    aux[2] = cubo[ble][0][1];
    cubo[ble][0][0] = cubo[ble][2][0];
    cubo[ble][0][1] = cubo[ble][1][0];
    cubo[ble][2][0] = cubo[ble][2][2];
    cubo[ble][1][0] = cubo[ble][2][1];
    cubo[ble][2][2] = cubo[ble][0][2];
    cubo[ble][2][1] = cubo[ble][1][2];
    cubo[ble][0][2] = aux[1];
    cubo[ble][1][2] = aux[2];
    aux[0] = cubo[red][0][2];
    aux[1] = cubo[red][1][2];
    aux[2] = cubo[red][2][2];
    cubo[red][0][2] = cubo[yel][0][0];
    cubo[red][1][2] = cubo[yel][0][1];
    cubo[red][2][2] = cubo[yel][0][2];
    cubo[yel][0][0] = cubo[org][2][0];
    cubo[yel][0][1] = cubo[org][1][0];
    cubo[yel][0][2] = cubo[org][0][0];
    cubo[org][2][0] = cubo[wht][2][0];
    cubo[org][1][0] = cubo[wht][2][1];
    cubo[org][0][0] = cubo[wht][2][2];
    cubo[wht][2][0] = aux[2];
    cubo[wht][2][1] = aux[1];
    cubo[wht][2][2] = aux[0];
}

void front(int cubo[6][3][3]){
    int aux[3];
    aux[1] = cubo[grn][0][0];
    aux[2] = cubo[grn][0][1];
    cubo[grn][0][0] = cubo[grn][2][0];
    cubo[grn][0][1] = cubo[grn][1][0];
    cubo[grn][2][0] = cubo[grn][2][2];
    cubo[grn][1][0] = cubo[grn][2][1];
    cubo[grn][2][2] = cubo[grn][0][2];
    cubo[grn][2][1] = cubo[grn][1][2];
    cubo[grn][0][2] = aux[1];
    cubo[grn][1][2] = aux[2];
    aux[0] = cubo[red][0][0];
    aux[1] = cubo[red][1][0];
    aux[2] = cubo[red][2][0];
    cubo[red][0][0] = cubo[yel][2][0];
    cubo[red][1][0] = cubo[yel][2][1];
    cubo[red][2][0] = cubo[yel][2][2];
    cubo[yel][2][0] = cubo[org][2][2];
    cubo[yel][2][1] = cubo[org][1][2];
    cubo[yel][2][2] = cubo[org][0][2];
    cubo[org][2][2] = cubo[wht][0][2];
    cubo[org][1][2] = cubo[wht][0][1];
    cubo[org][0][2] = cubo[wht][0][0];
    cubo[wht][0][0] = aux[2];
    cubo[wht][0][1] = aux[1];
    cubo[wht][0][2] = aux[0];
}

void frontLine(int cubo[6][3][3]){
    int aux[3];
    aux[1] = cubo[grn][0][0];
    aux[2] = cubo[grn][0][1];
    cubo[grn][0][0] = cubo[grn][0][2];
    cubo[grn][0][1] = cubo[grn][1][2];
    cubo[grn][0][2] = cubo[grn][2][2];
    cubo[grn][1][2] = cubo[grn][2][1];
    cubo[grn][2][2] = cubo[grn][2][0];
    cubo[grn][2][1] = cubo[grn][1][0];
    cubo[grn][2][0] = aux[1];
    cubo[grn][1][0] = aux[2];
    aux[0] = cubo[red][0][0];
    aux[1] = cubo[red][1][0];
    aux[2] = cubo[red][2][0];
    cubo[red][0][0] = cubo[wht][0][2];
    cubo[red][1][0] = cubo[wht][0][1];
    cubo[red][2][0] = cubo[wht][0][0];
    cubo[wht][0][2] = cubo[org][2][2];
    cubo[wht][0][1] = cubo[org][1][2];
    cubo[wht][0][0] = cubo[org][0][2];
    cubo[org][2][2] = cubo[yel][2][0];
    cubo[org][1][2] = cubo[yel][2][1];
    cubo[org][0][2] = cubo[yel][2][2];
    cubo[yel][2][0] = aux[0];
    cubo[yel][2][1] = aux[1];
    cubo[yel][2][2] = aux[2];
}

void rotate(int cubo[6][3][3]){ //roda pra direta
    int aux[9];
    aux[1] = cubo[wht][0][0];
    aux[2] = cubo[wht][0][1];
    cubo[wht][0][0] = cubo[wht][2][0];
    cubo[wht][0][1] = cubo[wht][1][0];
    cubo[wht][2][0] = cubo[wht][2][2];
    cubo[wht][1][0] = cubo[wht][2][1];
    cubo[wht][2][2] = cubo[wht][0][2];
    cubo[wht][2][1] = cubo[wht][1][2];
    cubo[wht][0][2] = aux[1];
    cubo[wht][1][2] = aux[2];
    aux[1] = cubo[yel][0][0];
    aux[2] = cubo[yel][0][1];
    cubo[yel][0][0] = cubo[yel][0][2];
    cubo[yel][0][1] = cubo[yel][1][2];
    cubo[yel][0][2] = cubo[yel][2][2];
    cubo[yel][1][2] = cubo[yel][2][1];
    cubo[yel][2][2] = cubo[yel][2][0];
    cubo[yel][2][1] = cubo[yel][1][0];
    cubo[yel][2][0] = aux[1];
    cubo[yel][1][0] = aux[2];
    aux[0] = cubo[grn][0][0];
    aux[1] = cubo[grn][0][1];
    aux[2] = cubo[grn][1][0];
    aux[3] = cubo[grn][1][1];
    aux[4] = cubo[grn][0][2];
    aux[5] = cubo[grn][1][2];
    aux[6] = cubo[grn][2][0];
    aux[7] = cubo[grn][2][1];
    aux[8] = cubo[grn][2][2];
    cubo[grn][0][0] = cubo[org][0][0];
    cubo[grn][0][1] = cubo[org][0][1];
    cubo[grn][1][0] = cubo[org][1][0];
    cubo[grn][1][1] = cubo[org][1][1];
    cubo[grn][0][2] = cubo[org][0][2];
    cubo[grn][1][2] = cubo[org][1][2];
    cubo[grn][2][0] = cubo[org][2][0];
    cubo[grn][2][1] = cubo[org][2][1];
    cubo[grn][2][2] = cubo[org][2][2];
    cubo[org][0][0] = cubo[ble][0][0];
    cubo[org][0][1] = cubo[ble][0][1];
    cubo[org][1][0] = cubo[ble][1][0];
    cubo[org][1][1] = cubo[ble][1][1];
    cubo[org][0][2] = cubo[ble][0][2];
    cubo[org][1][2] = cubo[ble][1][2];
    cubo[org][2][0] = cubo[ble][2][0];
    cubo[org][2][1] = cubo[ble][2][1];
    cubo[org][2][2] = cubo[ble][2][2];
    cubo[ble][0][0] = cubo[red][0][0];
    cubo[ble][0][1] = cubo[red][0][1];
    cubo[ble][1][0] = cubo[red][1][0];
    cubo[ble][1][1] = cubo[red][1][1];
    cubo[ble][0][2] = cubo[red][0][2];
    cubo[ble][1][2] = cubo[red][1][2];
    cubo[ble][2][0] = cubo[red][2][0];
    cubo[ble][2][1] = cubo[red][2][1];
    cubo[ble][2][2] = cubo[red][2][2];
    cubo[red][0][0] = aux[0];
    cubo[red][0][1] = aux[1];
    cubo[red][1][0] = aux[2];
    cubo[red][1][1] = aux[3];
    cubo[red][0][2] = aux[4];
    cubo[red][1][2] = aux[5];
    cubo[red][2][0] = aux[6];
    cubo[red][2][1] = aux[7];
    cubo[red][2][2] = aux[8];
}

void rotateLine(int cubo[6][3][3]){ //roda pra esquerda
    int aux[9];
    aux[1] = cubo[wht][0][0];
    aux[2] = cubo[wht][0][1];
    cubo[wht][0][0] = cubo[wht][0][2];
    cubo[wht][0][1] = cubo[wht][1][2];
    cubo[wht][0][2] = cubo[wht][2][2];
    cubo[wht][1][2] = cubo[wht][2][1];
    cubo[wht][2][2] = cubo[wht][2][0];
    cubo[wht][2][1] = cubo[wht][1][0];
    cubo[wht][2][0] = aux[1];
    cubo[wht][1][0] = aux[2];
    aux[1] = cubo[yel][0][0];
    aux[2] = cubo[yel][0][1];
    cubo[yel][0][0] = cubo[yel][2][0];
    cubo[yel][0][1] = cubo[yel][1][0];
    cubo[yel][2][0] = cubo[yel][2][2];
    cubo[yel][1][0] = cubo[yel][2][1];
    cubo[yel][2][2] = cubo[yel][0][2];
    cubo[yel][2][1] = cubo[yel][1][2];
    cubo[yel][0][2] = aux[1];
    cubo[yel][1][2] = aux[2];
    aux[0] = cubo[grn][0][0];
    aux[1] = cubo[grn][0][1];
    aux[2] = cubo[grn][1][0];
    aux[3] = cubo[grn][1][1];
    aux[4] = cubo[grn][0][2];
    aux[5] = cubo[grn][1][2];
    aux[6] = cubo[grn][2][0];
    aux[7] = cubo[grn][2][1];
    aux[8] = cubo[grn][2][2];
    cubo[grn][0][0] = cubo[red][0][0];
    cubo[grn][0][1] = cubo[red][0][1];
    cubo[grn][1][0] = cubo[red][1][0];
    cubo[grn][1][1] = cubo[red][1][1];
    cubo[grn][0][2] = cubo[red][0][2];
    cubo[grn][1][2] = cubo[red][1][2];
    cubo[grn][2][0] = cubo[red][2][0];
    cubo[grn][2][1] = cubo[red][2][1];
    cubo[grn][2][2] = cubo[red][2][2];
    cubo[red][0][0] = cubo[ble][0][0];
    cubo[red][0][1] = cubo[ble][0][1];
    cubo[red][1][0] = cubo[ble][1][0];
    cubo[red][1][1] = cubo[ble][1][1];
    cubo[red][0][2] = cubo[ble][0][2];
    cubo[red][1][2] = cubo[ble][1][2];
    cubo[red][2][0] = cubo[ble][2][0];
    cubo[red][2][1] = cubo[ble][2][1];
    cubo[red][2][2] = cubo[ble][2][2];
    cubo[ble][0][0] = cubo[org][0][0];
    cubo[ble][0][1] = cubo[org][0][1];
    cubo[ble][1][0] = cubo[org][1][0];
    cubo[ble][1][1] = cubo[org][1][1];
    cubo[ble][0][2] = cubo[org][0][2];
    cubo[ble][1][2] = cubo[org][1][2];
    cubo[ble][2][0] = cubo[org][2][0];
    cubo[ble][2][1] = cubo[org][2][1];
    cubo[ble][2][2] = cubo[org][2][2];
    cubo[org][0][0] = aux[0];
    cubo[org][0][1] = aux[1];
    cubo[org][1][0] = aux[2];
    cubo[org][1][1] = aux[3];
    cubo[org][0][2] = aux[4];
    cubo[org][1][2] = aux[5];
    cubo[org][2][0] = aux[6];
    cubo[org][2][1] = aux[7];
    cubo[org][2][2] = aux[8];
}

void rotateUp(int cubo[6][3][3]){ //roda pra cima
    int aux[9];
    aux[1] = cubo[org][0][0];
    aux[2] = cubo[org][0][1];
    cubo[org][0][0] = cubo[org][0][2];
    cubo[org][0][1] = cubo[org][1][2];
    cubo[org][0][2] = cubo[org][2][2];
    cubo[org][1][2] = cubo[org][2][1];
    cubo[org][2][2] = cubo[org][2][0];
    cubo[org][2][1] = cubo[org][1][0];
    cubo[org][2][0] = aux[1];
    cubo[org][1][0] = aux[2];
    aux[1] = cubo[red][0][0];
    aux[2] = cubo[red][0][1];
    cubo[red][0][0] = cubo[red][2][0];
    cubo[red][0][1] = cubo[red][1][0];
    cubo[red][2][0] = cubo[red][2][2];
    cubo[red][1][0] = cubo[red][2][1];
    cubo[red][2][2] = cubo[red][0][2];
    cubo[red][2][1] = cubo[red][1][2];
    cubo[red][0][2] = aux[1];
    cubo[red][1][2] = aux[2];
    aux[0] = cubo[grn][0][0];
    aux[1] = cubo[grn][0][1];
    aux[2] = cubo[grn][1][0];
    aux[3] = cubo[grn][1][1];
    aux[4] = cubo[grn][0][2];
    aux[5] = cubo[grn][1][2];
    aux[6] = cubo[grn][2][0];
    aux[7] = cubo[grn][2][1];
    aux[8] = cubo[grn][2][2];
    cubo[grn][0][0] = cubo[wht][0][0];
    cubo[grn][0][1] = cubo[wht][0][1];
    cubo[grn][1][0] = cubo[wht][1][0];
    cubo[grn][1][1] = cubo[wht][1][1];
    cubo[grn][0][2] = cubo[wht][0][2];
    cubo[grn][1][2] = cubo[wht][1][2];
    cubo[grn][2][0] = cubo[wht][2][0];
    cubo[grn][2][1] = cubo[wht][2][1];
    cubo[grn][2][2] = cubo[wht][2][2];
    cubo[wht][0][0] = cubo[ble][0][0];
    cubo[wht][0][1] = cubo[ble][0][1];
    cubo[wht][1][0] = cubo[ble][1][0];
    cubo[wht][1][1] = cubo[ble][1][1];
    cubo[wht][0][2] = cubo[ble][0][2];
    cubo[wht][1][2] = cubo[ble][1][2];
    cubo[wht][2][0] = cubo[ble][2][0];
    cubo[wht][2][1] = cubo[ble][2][1];
    cubo[wht][2][2] = cubo[ble][2][2];
    cubo[ble][0][0] = cubo[yel][0][0];
    cubo[ble][0][1] = cubo[yel][0][1];
    cubo[ble][1][0] = cubo[yel][1][0];
    cubo[ble][1][1] = cubo[yel][1][1];
    cubo[ble][0][2] = cubo[yel][0][2];
    cubo[ble][1][2] = cubo[yel][1][2];
    cubo[ble][2][0] = cubo[yel][2][0];
    cubo[ble][2][1] = cubo[yel][2][1];
    cubo[ble][2][2] = cubo[yel][2][2];
    cubo[yel][0][0] = aux[0];
    cubo[yel][0][1] = aux[1];
    cubo[yel][1][0] = aux[2];
    cubo[yel][1][1] = aux[3];
    cubo[yel][0][2] = aux[4];
    cubo[yel][1][2] = aux[5];
    cubo[yel][2][0] = aux[6];
    cubo[yel][2][1] = aux[7];
    cubo[yel][2][2] = aux[8];
}

void rotateDown(int cubo[6][3][3]){ //roda pra baixo
    int aux[9];
    aux[1] = cubo[red][0][0];
    aux[2] = cubo[red][0][1];
    cubo[red][0][0] = cubo[red][0][2];
    cubo[red][0][1] = cubo[red][1][2];
    cubo[red][0][2] = cubo[red][2][2];
    cubo[red][1][2] = cubo[red][2][1];
    cubo[red][2][2] = cubo[red][2][0];
    cubo[red][2][1] = cubo[red][1][0];
    cubo[red][2][0] = aux[1];
    cubo[red][1][0] = aux[2];
    aux[1] = cubo[org][0][0];
    aux[2] = cubo[org][0][1];
    cubo[org][0][0] = cubo[org][2][0];
    cubo[org][0][1] = cubo[org][1][0];
    cubo[org][2][0] = cubo[org][2][2];
    cubo[org][1][0] = cubo[org][2][1];
    cubo[org][2][2] = cubo[org][0][2];
    cubo[org][2][1] = cubo[org][1][2];
    cubo[org][0][2] = aux[1];
    cubo[org][1][2] = aux[2];
    aux[0] = cubo[grn][0][0];
    aux[1] = cubo[grn][0][1];
    aux[2] = cubo[grn][1][0];
    aux[3] = cubo[grn][1][1];
    aux[4] = cubo[grn][0][2];
    aux[5] = cubo[grn][1][2];
    aux[6] = cubo[grn][2][0];
    aux[7] = cubo[grn][2][1];
    aux[8] = cubo[grn][2][2];
    cubo[grn][0][0] = cubo[yel][0][0];
    cubo[grn][0][1] = cubo[yel][0][1];
    cubo[grn][1][0] = cubo[yel][1][0];
    cubo[grn][1][1] = cubo[yel][1][1];
    cubo[grn][0][2] = cubo[yel][0][2];
    cubo[grn][1][2] = cubo[yel][1][2];
    cubo[grn][2][0] = cubo[yel][2][0];
    cubo[grn][2][1] = cubo[yel][2][1];
    cubo[grn][2][2] = cubo[yel][2][2];
    cubo[yel][0][0] = cubo[ble][0][0];
    cubo[yel][0][1] = cubo[ble][0][1];
    cubo[yel][1][0] = cubo[ble][1][0];
    cubo[yel][1][1] = cubo[ble][1][1];
    cubo[yel][0][2] = cubo[ble][0][2];
    cubo[yel][1][2] = cubo[ble][1][2];
    cubo[yel][2][0] = cubo[ble][2][0];
    cubo[yel][2][1] = cubo[ble][2][1];
    cubo[yel][2][2] = cubo[ble][2][2];
    cubo[ble][0][0] = cubo[wht][0][0];
    cubo[ble][0][1] = cubo[wht][0][1];
    cubo[ble][1][0] = cubo[wht][1][0];
    cubo[ble][1][1] = cubo[wht][1][1];
    cubo[ble][0][2] = cubo[wht][0][2];
    cubo[ble][1][2] = cubo[wht][1][2];
    cubo[ble][2][0] = cubo[wht][2][0];
    cubo[ble][2][1] = cubo[wht][2][1];
    cubo[ble][2][2] = cubo[wht][2][2];
    cubo[wht][0][0] = aux[0];
    cubo[wht][0][1] = aux[1];
    cubo[wht][1][0] = aux[2];
    cubo[wht][1][1] = aux[3];
    cubo[wht][0][2] = aux[4];
    cubo[wht][1][2] = aux[5];
    cubo[wht][2][0] = aux[6];
    cubo[wht][2][1] = aux[7];
    cubo[wht][2][2] = aux[8];
}

int main(){
    int cubo[6][3][3];
    int cnt=0;
    unsigned seed = time(NULL);
    srand(seed);
    setCubo(cubo);
    showCubo(cubo);
    char mov = ' ';
    while(mov != 'p'){
        if(cnt){
            mov = embaralha();
            cnt--;
        }else{
            mov = nextmov();
        }
        switch (mov){
        case 'r':
            right(cubo);
            break;
        case 'R':
            rightLine(cubo);
            break;
        case 'l':
            left(cubo);
            break;
        case 'L':
            leftLine(cubo);
            break;
        case 'u':
            up(cubo);
            break;
        case 'U':
            upLine(cubo);
            break;
        case 'd':
            down(cubo);
            break;
        case 'D':
            downLine(cubo);
            break;
        case 'f':
            front(cubo);
            break;
        case 'F':
            frontLine(cubo);
            break;
        case 'b':
            back(cubo);
            break;
        case 'B':
            backLine(cubo);
            break;
        case 's':
            rotate(cubo);
            break;
        case 'S':
            rotateLine(cubo);
            break;
        case 'a':
            rotateUp(cubo);
            break;
        case 'A':
            rotateDown(cubo);
            break;
        case 'q':
            cout << "Quantas embaralhadas: ";
            cin >> cnt;
            break;
        default:
            break;
        }
        showCubo(cubo);
    }
    return 0;
}

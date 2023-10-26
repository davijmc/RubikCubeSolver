/*
By: DaviJMC
LastUpdate: 26/10/2023 (DD/MM/YYYY)
*/
// Future implemnts: Add func de mudar de face
#include <iostream>

using namespace std;

#define wht 0
#define org 1
#define grn 2
#define red 3
#define ble 4
#define yel 5


// Matriz inivcial do cubo
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
            cout << "            ";
        }
        cout << endl;
    }
    cout << endl;
    for(int i=0; i<3; i++){
        cout << "                        ";
        for(int j=0; j<3; j++){
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
}


int nextmov(){
    char mov;
    cin >> mov;
    return mov;
}


void r(int cubo[6][3][3]){
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

void rl(int cubo[6][3][3]){
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
    cubo[red][0][0] = cubo[red][0][2];//
    cubo[red][0][1] = cubo[red][1][2];
    cubo[red][0][2] = cubo[red][2][2];
    cubo[red][1][2] = cubo[red][2][1];
    cubo[red][2][2] = aux[2];
    cubo[red][2][1] = aux[1];
}

void l(int cubo[6][3][3]){
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
    cubo[org][0][0] = cubo[org][0][2];//
    cubo[org][0][1] = cubo[org][1][2];
    cubo[org][0][2] = cubo[org][2][2];
    cubo[org][1][2] = cubo[org][2][1];
    cubo[org][2][2] = aux[2];
    cubo[org][2][1] = aux[1];
}
void ll(int cubo[6][3][3]){
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
void u(int cubo[6][3][3]){
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
}
void ul(int cubo[6][3][3]){
    int aux[3];
    aux[0] = cubo[ble][0][0];
    aux[1] = cubo[ble][0][1];
    aux[2] = cubo[ble][0][2];
    cubo[grn][0][0] = cubo[org][0][0];
    cubo[grn][0][1] = cubo[org][0][1];
    cubo[grn][0][2] = cubo[org][0][2];
    cubo[red][0][0] = cubo[grn][0][0];
    cubo[red][0][1] = cubo[grn][0][1];
    cubo[red][0][2] = cubo[grn][0][2];
    cubo[ble][0][0] = cubo[red][0][0];
    cubo[ble][0][1] = cubo[red][0][1];
    cubo[ble][0][2] = cubo[red][0][2];
    cubo[org][0][0] = aux[0];
    cubo[org][0][1] = aux[1];
    cubo[org][0][2] = aux[2];
}
void d(int cubo[6][3][3]){

}
void dl(int cubo[6][3][3]){
    
}
void b(int cubo[6][3][3]){

}
void bl(int cubo[6][3][3]){
    
}
void f(int cubo[6][3][3]){

}
void fl(int cubo[6][3][3]){
    
}

int main(){
    int cubo[6][3][3];
    setCubo(cubo);
    showCubo(cubo);
    char mov = 'b';
    while(mov != 'a'){
        mov = nextmov();
        switch (mov){
        case 'r':
            r(cubo);
            break;
        case 'R':
            rl(cubo);
            break;
        case 'l':
            l(cubo);
            break;
        case 'L':
            ll(cubo);
            break;
        case 'u':
            u(cubo);
            break;
        case 'U':
            ul(cubo);
            break;
        case 'd':
            d(cubo);
            break;
        case 'D':
            dl(cubo);
            break;
        case 'f':
            f(cubo);
            break;
        case 'F':
            fl(cubo);
            break;
        case 'b':
            b(cubo);
            break;
        case 'B':
            bl(cubo);
            break;
        default:
            break;
        }
        showCubo(cubo);
    }
}

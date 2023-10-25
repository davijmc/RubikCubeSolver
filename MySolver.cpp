/*
By: DaviJMC
Last Update: 23/10/2023 (DD/MM/YYYY)
*/
#include <iostream>

using namespace std;

#define red 0
#define org 1
#define ble 2
#define grn 3
#define yel 4
#define wit 5

// Seta matriz do cubo
void setCubo(int cubo[6][3][3]) {
    cubo[0][0][0] = wit;
    cubo[0][0][1] = wit;
    cubo[0][0][2] = wit;
    cubo[0][1][0] = wit;
    cubo[0][1][1] = wit;
    cubo[0][1][2] = wit;
    cubo[0][2][0] = wit;
    cubo[0][2][1] = wit;
    cubo[0][2][2] = wit;
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
    for(int i =0; i<6; i++){
        for(int j =0; j<3; j++){        
            for(int k =0; k<3; k++){
                cout << cubo[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }
}


int nextmov(){
    char mov;
    cin >> mov;
    return mov;
}


int r(int cubo[6][3][3]){
    int aux[3];
    aux[0] = cubo[0][0][2];
    aux[1] = cubo[0][1][2];
    aux[2] = cubo[0][2][2];
    cubo[0][0][2] = cubo[4][0][2];
    cubo[0][1][2] = cubo[4][1][2];
    cubo[0][2][2] = cubo[4][2][2];
    cubo[4][0][2] = cubo[5][0][2];
    cubo[4][1][2] = cubo[5][1][2];
    cubo[4][2][2] = cubo[5][2][2];
    cubo[5][0][2] = cubo[2][0][2];
    cubo[5][1][2] = cubo[2][1][2];
    cubo[5][2][2] = cubo[2][2][2];
    cubo[2][0][2] = aux[0];
    cubo[2][1][2] = aux[1];
    cubo[2][2][2] = aux[2];
}
int rl(){
    
}
int l(){

}
int ll(){
    
}
int u(){

}
int ul(){
    
}
int d(){

}
int dl(){
    
}
int b(){

}
int bl(){
    
}
int f(){

}
int fl(){
    
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
            rl();
            break;
        case 'l':
            l();
            break;
        case 'L':
            ll();
            break;
        case 'u':
            u();
            break;
        case 'U':
            ul();
            break;
        case 'd':
            d();
            break;
        case 'D':
            dl();
            break;
        case 'f':
            f();
            break;
        case 'F':
            fl();
            break;
        case 'b':
            b();
            break;
        case 'B':
            bl();
            break;
        default:
            break;
        }
        showCubo(cubo);
    }
}

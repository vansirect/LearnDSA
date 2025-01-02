#include<iostream>
using namespace std;

void display(char brd[8][8]) {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            cout << brd[i][j] << " ";
        }
        cout << endl;
    }
}
void initboard(char brd[8][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0)
               /*basically what we a are doing here is checkingthe square is light or dark
			   * because in checkers you place the piece on dark squares
               * 
			   * so lets say if where  i = 0 and j = 0 then 0+0 = 0 and 0%2 = 0 so it will be light square
			   * and if i = 0 and j = 1 then 0+1 = 1 and 1%2 = 1 so it will be dark square
               * 
               * 
               * 
               
               */
            {
                brd[i][j] = ' '; // Light square
            }
            else {
                if (i < 3) {
					brd[i][j] = 'X'; //here its less than 3 because i is the row number and we are placing the pieces on the top 3 rows
                }
                else if (i > 4) {
                    brd[i][j] = 'O'; 
                else {
                    brd[i][j] = '.'; 
                }
            }
        }
    }
}

int main() {
    char brd[8][8];
    initboard(brd);
    display(brd);

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    srand(time(0));
     char alphabet = rand() % 26 + 'a';
    cout << "Start with random alphabet :  " << alphabet << endl;

    string player1 , player2;
    int point1 = 0 , sizeofP1 = 0 ;
    int point2 = 0 , sizeofP2 = 0 ;
    int value1 = 0 , value2 = 0 ;
    int i = 0 , j = 0 , k =0 ;



for ( i=0 ; i<=4 ; i++) {

    cin >> player1;
    sizeofP1 = player1.size();
    char lastAlphabet1 = player1[(sizeofP1 - 1)];


    cin >> player2;
    sizeofP2 = player2.size();
    char lastAlphabet2 = player2[(sizeofP2 - 1)];

    if ( sizeofP1 > sizeofP2 )
        j = sizeofP2;
    else
        j = sizeofP1;



//TODO check it again ,

    if ( player1 == player2 ) {
        cout << " Player 1  - You lose - " << endl;
        break;
    }

    if ( player2 == player1 ) {
        cout << " Player 2  - You lose - " << endl;
        break;
    }


    if (player1[0] == alphabet) {
        alphabet = lastAlphabet1;
        point1 ++;
        i++;

    }

    else {
        cout << " Player 1  - You lose - " << endl;
        break;
    }



    if (player2[0] == alphabet) {
        alphabet = lastAlphabet2;
        point2++;
        i++;

    }

    else {
        cout << " Player 2  - You lose - " << endl;
        break;
    }

    for ( k = 0 ; k <= j ; k ++ ) {
        if ( player1[k] > player2[k] ){
            value1 ++;
            break;
        }

        if ( player2[k] > player1[k] ) {
            value2 ++;
            break;
        }



    }
//    cout << "Value 1 **: " << value1 <<endl;
//    cout << "Value 2 **: " << value2 <<endl;

    if ( value1 > value2 )
        point1 ++;

    if ( value2 > value1 )
        point2 ++;

}


    if (point1 > point2) {
        cout << "\n Player 1 ***** you win ***** ";
            }
    else if (point1 == point2)
        cout << "\n good game, you both have the same points.";
    else
        cout << "\n Player 2 ***** you win ***** ";






    return 0;




}

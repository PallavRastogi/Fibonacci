#include <iostream>
.
using namespace std;

int fibo(int ctrl, int a = 0, int b= 1) {
    int temp;
    int i = 1;

    while (i < (ctrl+1)) {
        i++;

        temp = a;
        a = b;
        b = temp+b;
    }
    return a;
}

int main(){
    int ctrl;
    string kwd;

    cout << "Enter Index Of Fibo Term You Want To Find:-\n";
    cin >> ctrl;

    switch (ctrl) {
        case 1:
            kwd = "st";
            break;
        case 2:
            kwd = "nd";
            break;
        case 3:
            kwd = "rd";
            break;
        default:
            kwd = "th";
            break;
    }

    cout << "\nThe " << ctrl << kwd << " fibo term is: " << fibo(ctrl);

    return 0;
}

//end//

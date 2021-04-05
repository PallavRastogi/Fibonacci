#include <iostream>

using namespace std;

int fibo(int ctrl){

    if(ctrl==0){

        return 0;

    }

    else if(ctrl == 1){

        return 1;

    }

    else{

        return (fibo(ctrl-1) + fibo(ctrl-2));

    }

    

}

int main(){

    cout<<"Enter Index Of Fibo Term You Want To Find:-\n";

    int ctrl;

    cin>>ctrl;

    string kwd;

    switch(ctrl){

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

    

    

    cout<<"\nThe "<<ctrl<<kwd<<" fibo term is: "<<fibo(ctrl);

    return 0;

}

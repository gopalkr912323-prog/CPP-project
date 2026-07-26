# include <iostream>

# include <conio.h>
using namespace std;
int main(){
    char choose;

    cout<<"\n\nAre you ready for \"Quiz Game\""<<endl;
    cout<<"\nA. Yes\t\t\t B. No"<< endl;
    cout<<"\nSelect Option: ";
    cin>> choose;
    if(choose == 'a' || choose == 'A'){

    }
    else if(choose == 'b' || choose == 'B'){
        cout<<"Thank you";
        return 0;
        
    }
    else{
        cout<<"wrong option \nPlese enter correct option";
        return 0;
    }
    cout<<"---------------------------------------------------------";
    cout<<"\n\t\tLet's start Quiz Game"<< endl;

    char user_select[5] ;

    char ans[] = {'a' , 'c' , 'd', 'b' , 'b'};
    char ans1[] = {'A' , 'C', 'D' , 'B', 'B'};

    switch(1){
        case 1: cout<<"\n\n1. What does CPU stand for?"<< endl;
                cout<<"\nA. Central Processing Unit\nB. Computer Processing Unit\nC. Central Program Unit \nD. Control Processing Unit";
                cout<<"\n\nSelect Option: ";
                cin>> user_select[0];
                cout<<"---------------------------------------------------------";
            


        case 2: cout <<"\n\n2. Which device is used to enter data into a computer?"<< endl;
                cout<<"\nA. Monitor \nB. Printer \nC. Keyboard \nD. Speaker";
                cout<<"\n\nSelect Option: ";
                cin>> user_select[1];
                cout<<"---------------------------------------------------------";
        case 3: cout<<"\n\n3. Which of these is an output device?"<< endl;
                cout<<"\nA. Mouse \nB. Keyboard \nC. Scanner \nD. Monitor";
                cout<<"\n\nSelect Option: ";
                cin>> user_select[2];
                cout<<"---------------------------------------------------------";
        case 4: cout<<"\n\n4. Which memory is temporary?"<< endl;
                cout<<"\nA. ROM \nB. RAM \nC. Hard Disk \nD. SSd";
                cout<<"\n\nSelect Option: ";
                cin>> user_select[3];
                cout<<"---------------------------------------------------------";
        case 5: cout<<"\n\n5. Which software is used to browse the internet?"<< endl;
                cout<<"\nA. MS Word \nB. Chrome \nC. Paint \nD. Excel";
                cout<<"\n\nSelect Option: ";
                cin>> user_select[4];
                cout<<"---------------------------------------------------------";

    }

    // cout<< user_select[0];
    int right = 0;
    cout<<"\nYour Scoreboard:- \n";
    for(int i = 0; i < 5 ; i++){
        if( user_select[i] == ans[i] || user_select[i] == ans1[i]){
            cout<<"\n"<< i+1<<". correct";
            right++;

        }
        else{
            cout<<"\n"<< i+1<<". incorrect";
        }

    }
    cout<<"\n\nYour score : "<< right<<"/5\n\n";



    
















    getch();
    return 0;
}
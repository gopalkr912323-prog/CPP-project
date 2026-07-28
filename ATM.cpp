# include <iostream>
# include <conio.h>
using namespace std;
int main(){
    unsigned int balance = 0;
    char Select_option;
    char select_lang;
    int pin[4] = {1,1,1,1};
    int user_entered_pin[4];
    int N_pin[4];
    

    cout<<"\n\n\t\t\tWelecome!"<<endl;
    cout<<"\t\t Please insert Your card.\n";
    cout<<"\nPress Enter...";
    getch();
    cout<<"\n----------------------------------------------------------------";
    cout<<"\n\t\tPlease Select Application ID\n";
    cout<<"A. Domestic \t\t B. International\n";
    char choose;
    cout<<"Choose: ";
    cin>> choose;
    cout<<"----------------------------------------------------------------";

    switch(choose){
        case 'A':
        case 'a' : cout<<"\n\t\tPlease Select Language\n";
                    cout<<"A. English \nB. Hindi\n";
                    char select;
                    cout<<"Select: ";
                    cin>> select_lang;
                    cout<<"----------------------------------------------------------------";
                    
            
                    break;
        case 'B': 
        case 'b':   cout<<"\nSorry your card is not international-enabled\n\nThank you";
                    return 0;

        default : cout<<"\nWrong option \n\nThank you";
                    return 0;
    }

    for(int i = 1 ; i <= 20 ; i++){
        int right = 0;
        switch(select_lang){
                case 'a':
                // case 'A': cout<<"\n\t\tPlease Enter Your PIN\n";
                //             int PIN;
                //             cout<<"Enter PIN: ";
                            
                //             // cin >> PIN;
                //             for(int i = 1; i <= 4 ; i++){
                //                 getch();
                //                 cout<<"*";
                //             }
                //             getch();
                //             cout<<"\n----------------------------------------------------------------";

                            cout<<"\n\n\tDear Customer,Please Select Transaction\n\n";
                            cout<<"A. Withdrawl\t\tB. Balance Enquiry \nC.Pin Change\t\tD. Deposit \nE. Exit    \t\tF. Mini Statement\n";

                            
                            cout<<"\nSelect option: ";
                            cin>> Select_option;
                            cout<<"----------------------------------------------------------------";
                            break;
                
                case 'b':
                case 'B': cout<<"\n Sorry sir, Hindi is not available for now\n\nThank you";
                            return 0;

                default: cout<<"\nWrong option\n\nThank you";
                        return 0;
        }

    

        switch (Select_option){
            case 'a':   //Withdrawl Section
            case 'A': cout<<"\n\t\tPlease Select Account Type\n";
                        cout<<"A. Credit \nB. Current \nc. Saving\n";
                        cout<<"Select: ";
                        char select;
                        cin >> select;
                        cout<<"----------------------------------------------------------------";
                        switch(select){
                            case 'c':
                            case 'C': cout<<"\n\t\tPlease Enter Amount\n";
                                        cout<<"\t(Cash Available : Rs 100 , 500)\n";
                                        int Amt;
                                        cout<<"\nEnter Amount: ";
                                        cin>> Amt;
                                        cout<<"----------------------------------------------------------------";

                                        cout<<"\nEnter PIN: ";
                                        for(int i = 0 ; i < 4; i++){
                                            user_entered_pin[i] = getch() - '0';
                                            cout<<"*";
                                        }
                                        getch();

                                        // int right = 0;
                                        for(int i = 0; i < 4 ; i++){
                                            if(user_entered_pin[i] == pin[i] ){
                                                right++;
                                            }
                                            else{
                                                cout<<"\nwrong PIN \nTransaction Decline\n\nThank you";
                                                break;
                                                // return 0;
                                            }
                                        }
                                        if(right == 4){
                                            if(Amt <= balance){
                                                balance -= Amt;
                                                cout<<"\n\tPlease Collect Cash and Take Your Card\n";
                                                cout<<"Press Enter...";
                                                getch();
                                                cout<<"\nWould you like to Display the Balance on the Screen?\n";
                                                cout<<"\nA. Yes \nB. No\n";
                                                cout<<"\nSelect: ";
                                                char S; //select
                                                cin>> S;
                                                
                                                if(S == 'a' || S == 'A'){
                                                    cout<<"\n Your Balance is : "<< balance << endl;
                                                    break;
                                                }
                                                else{
                                                    cout<<"\nThank You";
                                                    return 0;
                                                }
    
                                            }
                                            else{
                                                cout<<"\nInsufficient balance\n\n Thank you";
                                                // return 0;
                                                    break;
                                            }
                                        

                                        }
                                        
                                        
                                        break;

                                        

                            case 'a':
                            case 'A':

                            case 'b':
                            case 'B':

                            default : cout<<"\nWrong option \n\n Thank you";
                                        return 0;

                        }
                        break;

            case 'b':       //balance enquiry
            case 'B':   cout<<"\nEnter PIN: ";
                            for(int i = 0 ; i < 4; i++){
                                user_entered_pin[i] = getch() - '0';
                                cout<<"*";
                            }
                            getch();

                            // int right = 0;
                            for(int i = 0; i < 4 ; i++){
                                if(user_entered_pin[i] == pin[i] ){
                                    right++;
                                }
                                else{
                                    cout<<"\nwrong PIN \n\nThank you";
                                    // return 0;
                                    break;
                                }
                            }
                            if(right == 4){
                                cout<<"\n\nYour current balance: "<< balance << endl;
                               

                            }
                    
                        break;

            case 'c':   //pin change section
            case 'C':   cout<<"\nEnter old PIN: ";
                        for(int i = 0 ; i < 4 ; i++){
                            user_entered_pin[i] = getch() - '0';
                            cout<<"*";
                        }
                        getch();
                        right = 0;
                        for(int i = 0; i < 4 ; i++){
                            if(user_entered_pin[i] == pin[i]){
                                right++;

                            }
                            
                            
                        }
                        if(right == 4){
                            cout<<"\n\nEnter new PIN: ";
                            for(int i = 0 ; i < 4 ; i++){
                                N_pin[i] = getch() - '0';
                                cout<<"*";
                            }
                            getch();
                            cout<<"\n\nConfirm your PIN: ";
                            for(int i = 0 ; i < 4 ; i++){
                                user_entered_pin[i] = getch() - '0';
                                cout<<"*";

                            }
                            
                            
                            getch();
                            int j = 0;
                            for(int i = 0 ; i < 4 ; i++){
                                if(user_entered_pin[i] == N_pin[i]){
                                    
                                    j++;

                                }
                                

                            }
                            if(j == 4){
                                for(int i = 0; i < 4 ; i++){
                                    pin[i] = N_pin[i];
                                }
                                cout<<"\n\nyour PIN successful set\n";
                            }
                            else{
                                
                                cout<<"\n\nTransaction Decline \nYour new PIN and Confirm PIN not match";


                            }

                        }
                        else{
                            cout<<"\n\nWrong PIN \n\nThank you";
                            // return 0;
                            break;
                        }
                        break;
                        

            case 'd':   //Deposit section
            case 'D': cout<<"\nDEPOSIT PER TRANSACTION LIMIT : 100000\n";
                        cout<<"A. Continue \nB. Cancel\n";
                        char s2;
                        cout<<"\nSelect: ";
                        cin>> s2;
                        if(s2 == 'a' || s2 == 'A'){
                       
                            int D_amt;
                            cout<<"\nEnter amount: ";
                            cin>> D_amt;

                            
                            cout<<"\nEnter PIN: ";
                            for(int i = 0 ; i < 4; i++){
                                user_entered_pin[i] = getch() - '0';
                                cout<<"*";
                            }
                            getch();

                           
                            for(int i = 0; i < 4 ; i++){
                                if(user_entered_pin[i] == pin[i] ){
                                    right++;
                                }
                                else{
                                    cout<<"\nwrong PIN \n\nThank you";
                                    // return 0;
                                    break;
                                }
                            }
                            if(right == 4){
                                balance += D_amt;
                                cout<<"\nSuccessful added\n";

                            }


                        }
                        else{
                            cout<<"\nTransaction Cancelled\n\nThank you";
                            return 0;
                            
                        }
                        break;

            case 'e':   //exit section
            case 'E': cout<<"\n\t Thank You ";
                        return 0;

            case 'f':
            case 'F':

            default: cout<<"\nWrong input \n\n Thank you";
                        return 0;


        }


        cout<<"\n----------------------------------------------------------------";       
        cout<<"\n\nPress Enter...";
        getch();
    }
    cout<<"\n\tThank You";


    getch();
    return 0;






}
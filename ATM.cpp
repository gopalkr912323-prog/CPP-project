# include <iostream>
# include <conio.h>
using namespace std;
int main(){
    unsigned int balance = 0;
    char Select_option;
    char select_lang;

    cout<<"\n\n\t\t\tWelecome!"<<endl;
    cout<<"\t\t Please insert Your card.\n";
    getch();
    cout<<"----------------------------------------------------------------";
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
        case 'b':   cout<<"\nSorry your card is not international card\n\nThank you";
                    return 0;

        default : cout<<"\nWrong option \n\nThank you";
                    return 0;
    }

    for(int i = 1 ; i <= 6 ; i++){
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
            case 'a':
            case 'A': cout<<"\n\t\tPlease Select Account Type\n";
                        cout<<"A. Credit \nB. Current \nc. Saving\n";
                        cout<<"Select: ";
                        char select;
                        cin >> select;
                        cout<<"----------------------------------------------------------------";
                        switch(select){
                            case 'c':
                            case 'C': cout<<"\n\t\tPlease Enter Amount\n";
                                        cout<<"\t\t(Cash Available : Rs 100 , 500)\n";
                                        int Amt;
                                        cout<<"\nEnter Amount: ";
                                        cin>> Amt;
                                        balance -= Amt;
                                        cout<<"----------------------------------------------------------------";
                                        // cout<<"A. Yes \nB. No\n";
                                        
                                            cout<<"\n\tPlease Collect Cash and Take Your Card\n";
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
                                        break;

                                        

                            case 'a':
                            case 'A':

                            case 'b':
                            case 'B':

                            default : cout<<"\nWrong option \n\n Thank you";
                                        return 0;

                        }
                        break;

            case 'b':
            case 'B':   cout<<"\nEnter PIN: ";
                        for(int i = 1 ; i <= 4 ; i++){
                            getch();
                            cout<<"*";
                        }
                        getch();
                        cout<<"\n\nYour current balance: "<< balance << endl;
                        break;

            case 'c':
            case 'C':

            case 'd':
            case 'D': cout<<"\nDEPOSIT PER TRANSACTION LIMIT : 100000\n";
                        cout<<"A. Continue \nB. Cancel\n";
                        char s2;
                        cout<<"\nSelect: ";
                        cin>> s2;
                        if(s2 == 'a' || s2 == 'A'){
                            // cout<<"\nPlease Enter your PIN: ";
                            // cin
                            int bal;
                            cout<<"\nEnter amount: ";
                            cin>> bal;
                            balance += bal;
                            cout<<"\nSuccessful added\n";

                        }
                        else{
                            cout<<"\nTransaction Cancelled\n\nThank you";
                            return 0;
                            
                        }
                        break;

            case 'e':
            case 'E': cout<<"\n\t Thank You ";
                        return 0;

            case 'f':
            case 'F':

            default: cout<<"\nWrong input \n\n Thank you";


        }


        cout<<"----------------------------------------------------------------";       
        
    }
    cout<<"\n\tThank You";






















    return 0;
}
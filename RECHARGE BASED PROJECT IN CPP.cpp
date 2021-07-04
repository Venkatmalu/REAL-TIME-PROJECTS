#include<iostream>

using namespace std;

int number_of_data_packs=0,number_of_talktime_packs=0,number_of_unlimited_packs=0,active_pack=0;
float main_balance=0;
int data_pack1=0;
int data_pack2=0;
int data_pack3=0;
int data_pack4=0;
int data_pack5=0;
int data_pack6=0;
int data_pack7=0;
int data_pack8=0;
int talktime_pack1=0;
int talktime_pack2=0;
int talktime_pack3=0;
int talktime_pack4=0;
int talktime_pack5=0;
int talktime_pack6=0;
int unlimited1=0;
int unlimited2=0;
int unlimited3=0;
int unlimited4=0;
int unlimited5=0;
int unlimited6=0;
int unlimited7=0;
int unlimited8=0;
int unlimited9=0;
int unlimited10=0;
int unlimited11=0;
int unlimited12=0;
string active="Active";
string non_active="Not Activated";

void Numberofpacks(int NDP,int NTP,int NUP)
{
    int count=1;
    cout<<"Your Recharged Packs Are : "<<endl<<endl;
    cout<<"DATA PACKS :"<<endl;
            cout<<" ____________________________________________________________________________________________________________\n";
            cout<<"|______Cost______|______Data______|______Validity_______|______No.Of.Times Recharged______|______Active______|\n";
        if(data_pack1!=0)
        {
            cout<<"|"<<count<<".Rs.401        |30GB            |28 days              |U Recharged "<<data_pack1<<"times               |   Active         |"<<endl;
            count++;
        }
        if(data_pack2!=0)
        {
            cout<<"|"<<count<<".Rs.251        |25GB            |20 days              |U Recharged "<<data_pack2<<" times              |   Active         |"<<endl;
            count++;
        }
        if(data_pack3!=0)
        {
            cout<<"|"<<count<<".Rs.248        |20GB            |Existing             |U Recharged "<<data_pack3<<" times              |   Active         |"<<endl;
            count++;
        }
        if(data_pack4=0)
        {
            cout<<"|"<<count<<".Rs.131        |15GB            |15 days              |U Recharged "<<data_pack4<<" times              |   Active         |"<<endl;
            count++;
        }
        if(data_pack5!=0)
        {
            cout<<"|"<<count<<".Rs.98         |12GB            |Existing             |U Recharged "<<data_pack5<<" times              |   Active         |"<<endl;
            count++;
        }
        if(data_pack6!=0)
        {
            cout<<"|"<<count<<".Rs.89         |6GB             |Existing             |U Recharged "<<data_pack6<<" times              |   Active         |"<<endl;
            count++;
        }
        if(data_pack7!=0)
        {
            cout<<"|"<<count<<".Rs.78         |5GB             |Existing             |U Recharged "<<data_pack7<<" times              |   Active         |"<<endl;
            count++;
        }
        if(data_pack8!=0)
        {
            cout<<"|"<<count<<".Rs.48         |3GB             |28 days              |U Recharged "<<data_pack8<<" times              |   Active         |"<<endl;
            count++;
        }
            cout<<"|________________|________________|_____________________|_________________________________|__________________|\n"<<endl;
              cout<<"TALK TIME PACKS :"<<endl;
    cout<<" ____________________________________________________________________________________________\n";
    cout<<"|______Cost______|______Talktime______|______Validity______|______No.Of.Times Recharged______|"<<endl;
        if(talktime_pack1!=0)
        {
            cout<<"|"<<count<<".Rs.5000       |     Rs.4899.46     |      NA            |      U Recharged "<<talktime_pack1<<" times        |"<<endl;
            count++;
        }
        if(talktime_pack2!=0)
        {
            cout<<"|"<<count<<".Rs.1000       |     Rs.847.46      |      NA            |      U Recharged "<<talktime_pack2<<" times        |"<<endl;
            count++;
        }
        if(talktime_pack3!=0)
        {
            cout<<"|"<<count<<".Rs.500        |     Rs.423.73      |      NA            |      U Recharged "<<talktime_pack3<<" times        |"<<endl;
            count++;
        }
        if(talktime_pack4!=0)
        {
            cout<<"|"<<count<<".Rs.100        |     Rs.81.75       |      NA            |      U Recharged "<<talktime_pack4<<" times        |"<<endl;
            count++;
        }
        if(talktime_pack5!=0)
        {
            cout<<"|"<<count<<".Rs.20         |     Rs.14.95       |      NA            |      U Recharged "<<talktime_pack5<<" times        |"<<endl;
            count++;
        }
        if(talktime_pack6!=0)
        {
            cout<<"|"<<count<<".Rs.10         |     Rs.7.47        |      NA            |     U Recharged "<<talktime_pack6<<" times         |"<<endl;
            count++;
        }
            cout<<"|________________|____________________|____________________|_________________________________|\n"<<endl<<endl;
              cout<<"UNLIMITED PACKS :"<<endl;
        cout<<" ________________________________________________________________________________________________________________________________\n";
        cout<<"|______Cost______|______Calls______|______Data______|______Validity______|______No.Of.Times Recharged______|_______Active________|"<<endl;
        if(unlimited1!=0)
        {
            cout<<"|"<<count<<".Rs.2698       |Unlimited        |2GB/day         |365days             |U Recharged "<<unlimited1<<" times              |      "<<active<<"         |"<<endl;
            count++;
        }
        if(unlimited2!=0)
        {
            cout<<"|"<<count<<".Rs.2498       |Unlimited        |2GB/day         |335days             |U Recharged "<<unlimited2<<" times              |      "<<non_active<<"  |"<<endl;
            count++;
        }
        if(unlimited3!=0)
        {
            cout<<"|"<<count<<".Rs.1498       |Unlimited        |24GB            |365days             |U Recharged "<<unlimited3<<" times              |      "<<non_active<<"  |"<<endl;
            count++;
        }
        if(unlimited4!=0)
        {
            cout<<"|"<<count<<".Rs.698        |Unlimited        |2GB/day         |84days              |U Recharged "<<unlimited4<<" times              |      "<<non_active<<"  |"<<endl;
            count++;
        }
        if(unlimited5!=0)
        {
            cout<<"|"<<count<<".Rs.599        |Unlimited        |2GB/day         |56days              |U Recharged "<<unlimited5<<" times              |      "<<non_active<<"  |"<<endl;
            count++;
        }
        if(unlimited6!=0)
        {
            cout<<"|"<<count<<".Rs.598        |Unlimited        |1.5GB/day       |84days              |U Recharged "<<unlimited2<<" times              |      "<<non_active<<"  |"<<endl;
            count++;
        }
            cout<<"|________________|_________________|________________|____________________|_________________________________|_____________________|\n"<<endl;
}

void datapack(string phone_number)
{
    int selected,already;
    cout<<" ____________________________________________________________\n";
    cout<<"|_______Cost_______|_______Data_______|_______Validity_______|\n";
    cout<<"|1.Rs.401          |30GB              |28 days               |\n";
    cout<<"|2.Rs.251          |25GB              |20 days               |\n";
    cout<<"|3.Rs.248          |20GB              |Existing              |\n";
    cout<<"|4.Rs.131          |15GB              |15 days               |\n";
    cout<<"|5.Rs.98           |12GB              |Existing              |\n";
    cout<<"|6.Rs.89           |6GB               |Existing              |\n";
    cout<<"|7.Rs.78           |5GB               |Existing              |\n";
    cout<<"|8.Rs.48           |3GB               |28 days               |\n";
    cout<<"|__________________|__________________|______________________|\n";
    cout<<"Select Any One : ";
    cin>>selected;
    switch(selected)
    {
    case 1:
        {
           if(data_pack1==0)
           {
               cout<<endl<<"Recharge of Rs.401.00 is successful for "<<phone_number;
               number_of_data_packs++;
               data_pack1++;
               if(active_pack==0)
               {
                   active_pack++;

               }
           }
           else
           {
               cout<<"You Have Already This Pack...If U Want Press 1 : ";
               cin>>already;
               if(already==1)
               {
                   cout<<endl<<"Recharge of Rs.401.00 is successful for "<<phone_number;
                   number_of_data_packs++;
                   data_pack1++;
               }
           }
           break;
        }
    case 2:
        {
           if(data_pack2==0)
           {
               cout<<endl<<"Recharge of Rs.251.00 is successful for "<<phone_number;
               number_of_data_packs++;
               data_pack2++;
           }
           else
           {
               cout<<"You Have Already This Pack...If U Want Press 1 : ";
               cin>>already;
               if(already==1)
               {
                   cout<<endl<<"Recharge of Rs.251.00 is successful for "<<phone_number;
                   number_of_data_packs++;
                   data_pack2++;
               }
           }
           break;
        }
    case 3:
        {
           if(data_pack3==0)
           {
               cout<<endl<<"Recharge of Rs.248.00 is successful for "<<phone_number;
               number_of_data_packs++;
               data_pack3++;
           }
           else
           {
               cout<<"You Have Already This Pack...If U Want Press 1 : ";
               cin>>already;
               if(already==1)
               {
                   cout<<endl<<"Recharge of Rs.248.00 is successful for "<<phone_number;
                   number_of_data_packs++;
                   data_pack3++;
               }
           }
           break;
        }
    case 4:
        {
           if(data_pack4==0)
           {
               cout<<endl<<"Recharge of Rs.131.00 is successful for "<<phone_number;
               number_of_data_packs++;
               data_pack4++;
           }
           else
           {
               cout<<"You Have Already This Pack...If U Want Press 1 : ";
               cin>>already;
               if(already==1)
               {
                   cout<<endl<<"Recharge of Rs.131.00 is successful for "<<phone_number;
                   number_of_data_packs++;
                   data_pack4++;
               }
           }
           break;
        }
    case 5:
        {
           if(data_pack5==0)
           {
               cout<<endl<<"Recharge of Rs.98.00 is successful for "<<phone_number;
               number_of_data_packs++;
               data_pack5++;
           }
           else
           {
              cout<<"You Have Already This Pack...If U Want Press 1 : ";
              cin>>already;
               if(already==1)
               {
                   cout<<endl<<"Recharge of Rs.98.00 is successful for "<<phone_number;
                   number_of_data_packs++;
                   data_pack5++;
               }
           }
           break;
        }
    case 6:
        {
           if(data_pack6==0)
           {
              cout<<endl<<"Recharge of Rs.89.00 is successful for "<<phone_number;
               number_of_data_packs++;
               data_pack6++;
           }
           else
           {
               cout<<"You Have Already This Pack...If U Want Press 1 : ";
               cin>>already;
               if(already==1)
               {
                   cout<<endl<<"Recharge of Rs.89.00 is successful for "<<phone_number;
                   number_of_data_packs++;
                   data_pack6++;
               }
           }
           break;
        }
    case 7:
        {
           if(data_pack7==0)
           {
               cout<<endl<<"Recharge of Rs.78.00 is successful for "<<phone_number;
               number_of_data_packs++;
               data_pack7++;
           }
           else
           {
              cout<<"You Have Already This Pack...If U Want Press 1 : ";
              cin>>already;
               if(already==1)
               {
                   cout<<endl<<"Recharge of Rs.78.00 is successful for "<<phone_number;
                   number_of_data_packs++;
                   data_pack7++;
               }
           }
           break;
        }
    case 8:
        {
           if(data_pack8==0)
           {
               cout<<endl<<"Recharge of Rs.48.00 is successful for "<<phone_number;
               number_of_data_packs++;
               data_pack8++;
           }
           else
           {
               cout<<"You Have Already This Pack...If U Want Press 1 : ";
               cin>>already;
               if(already==1)
               {
                   cout<<endl<<"Recharge of Rs.48.00 is successful for "<<phone_number;
                   number_of_data_packs++;
                   data_pack8++;
               }
           }
           break;
        }
    default:
        {
            cout<<"Invalid Option"<<endl;
        }
    }
}

void talktime(string phone_number)
{
    int selected,already;
    cout<<" _______________________________________________________"<<endl;
    cout<<"|_______Cost_______|_____Talktime_____|_____Validity____|"<<endl;
    cout<<"|1.Rs.5000         |Rs.4899.46        |NA               |"<<endl;
    cout<<"|2.Rs.1000         |Rs.847.46         |NA               |"<<endl;
    cout<<"|3.Rs.500          |Rs.423.73         |NA               |"<<endl;
    cout<<"|4.Rs.100          |Rs.81.75          |NA               |"<<endl;
    cout<<"|5.Rs.20           |Rs.14.95          |NA               |"<<endl;
    cout<<"|6.Rs.10           |Rs.7.47           |NA               |"<<endl;
    cout<<"|__________________|__________________|_________________|"<<endl;
    cout<<"Select Any One : ";
    cin>>selected;
    switch(selected)
    {
    case 1:
        {
           if(talktime_pack1==0)
           {
               cout<<endl<<"Recharge of Rs.5000.00 is successful for "<<phone_number;
               number_of_data_packs++;
               talktime_pack1++;
               main_balance=main_balance+4899.46;
           }
           else
           {
               cout<<"You Have Already This Pack...If U Want Press 1 : ";
               cin>>already;
               if(already==1)
               {
                   cout<<endl<<"Recharge of Rs.5000.00 is successful for "<<phone_number;
                   number_of_data_packs++;
                   talktime_pack1++;
                   main_balance=main_balance+4899.46;
               }
           }
           break;
        }
    case 2:
        {
           if(talktime_pack2==0)
           {
               cout<<endl<<"Recharge of Rs.1000.00 is successful for "<<phone_number;
               number_of_data_packs++;
               talktime_pack2++;
               main_balance=main_balance+847.46;
           }
           else
           {
               cout<<"You Have Already This Pack...If U Want Press 1 : ";
               cin>>already;
               if(already==1)
               {
                   cout<<endl<<"Recharge of Rs.1000.00 is successful for "<<phone_number;
                   number_of_data_packs++;
                   talktime_pack2++;
                   main_balance=main_balance+847.46;
               }
           }
           break;
        }
    case 3:
        {
           if(talktime_pack3==0)
           {
               cout<<endl<<"Recharge of Rs.500.00 is successful for "<<phone_number;
               number_of_data_packs++;
               talktime_pack3++;
               main_balance=main_balance+423.73;
           }
           else
           {
               cout<<"You Have Already This Pack...If U Want Press 1 : ";
               cin>>already;
               if(already==1)
               {
                   cout<<endl<<"Recharge of Rs.500.00 is successful for "<<phone_number;
                   number_of_data_packs++;
                   talktime_pack3++;
                   main_balance=main_balance+423.73;
               }
           }
           break;
        }
    case 4:
        {
           if(talktime_pack4==0)
           {
               cout<<endl<<"Recharge of Rs.100.00 is successful for "<<phone_number;
               number_of_data_packs++;
               talktime_pack4++;
               main_balance=main_balance+81.75;
           }
           else
           {
               cout<<"You Have Already This Pack...If U Want Press 1 : ";
               cin>>already;
               if(already==1)
               {
                   cout<<endl<<"Recharge of Rs.100.00 is successful for "<<phone_number;
                   number_of_data_packs++;
                   talktime_pack4++;
                   main_balance=main_balance+81.75;
               }
           }
           break;
        }
    case 5:
        {
           if(talktime_pack5==0)
           {
               cout<<endl<<"Recharge of Rs.20.00 is successful for "<<phone_number;
               number_of_data_packs++;
               talktime_pack5++;
               main_balance=main_balance+14.95;
           }
           else
           {
               cout<<"You Have Already This Pack...If U Want Press 1 : ";
               cin>>already;
               if(already==1)
               {
                   cout<<endl<<"Recharge of Rs.20.00 is successful for "<<phone_number;
                   number_of_data_packs++;
                   talktime_pack5++;
                   main_balance=main_balance+14.95;
               }
           }
           break;
        }
    case 6:
        {
           if(talktime_pack6==0)
           {
               cout<<endl<<"Recharge of Rs.10.00 is successful for "<<phone_number;
               number_of_data_packs++;
               talktime_pack6++;
               main_balance=main_balance+7.47;
           }
           else
           {
               cout<<"You Have Already This Pack...If U Want Press 1 : ";
               cin>>already;
               if(already==1)
               {
                   cout<<endl<<"Recharge of Rs.10.00 is successful for "<<phone_number;
                   number_of_data_packs++;
                   talktime_pack6++;
                   main_balance=main_balance+7.47;
               }
           }
           break;
        }
    }
}

void unlimited(string phone_number)
{
    int selected,already;
    cout<<" ________________________________________________________________________"<<endl;
    cout<<"|______Cost______|______Calls______|______Data______|______Validity______|"<<endl;
    cout<<"|1.Rs.2698       |  Unlimited      |  2GB/day       |  365days           |"<<endl;
    cout<<"|2.Rs.2498       |  Unlimited      |  2GB/day       |  335days           |"<<endl;
    cout<<"|3.Rs.1498       |  Unlimited      |  24GB          |  365days           |"<<endl;
    cout<<"|4.Rs.698        |  Unlimited      |  2GB/day       |  84days            | "<<endl;
    cout<<"|5.Rs.599        |  Unlimited      |  2GB/day       |  56days            |"<<endl;
    cout<<"|6.Rs.598        |  Unlimited      |  1.5GB/d       |  84days            |"<<endl;
    cout<<"|7.Rs.558        |  Unlimited      |  3GB/d         |  48days            |"<<endl;
    cout<<"|8.Rs.499        |  Unlimited      |  2GBay         |  56days            |"<<endl;
    cout<<"|9.Rs.448        |  Unlimited      |  3/day         |  28days            |"<<endl;
    cout<<"|10.Rs.399       |  Unlimited      |  1.5GB/day     |  56days            |"<<endl;
    cout<<"|11.Rs.299       |  Unlimited      |  2GB/day       |  28days            |"<<endl;
    cout<<"|12.Rs.249       |  Unlimited      |  1.5GB/day     |  28days            |"<<endl;
    cout<<"|13.Rs.199       |  Unlimited      |  1GB/day       |  24days            |"<<endl;
    cout<<"|14.Rs.149       |  Unlimited      |  2GB           |  28days            |"<<endl;
    cout<<"|11.Rs.129       |  Unlimited      |  1GB           |  28days            |"<<endl;
    cout<<"|12.Rs.19        |  Unlimited      |  200MB         |  2days             |"<<endl;
    cout<<"|________________|_________________|________________|____________________|"<<endl;
    cout<<"Select Any One : ";
    cin>>selected;
    switch(selected)
    {
    case 1:
        {
           if(unlimited1==0)
           {
               cout<<endl<<"Recharge of Rs.2698.00 is successful for "<<phone_number;
               number_of_unlimited_packs++;
               unlimited1++;
           }
           else
           {
               cout<<"You Have Already This Pack...If U Want Press 1 : ";
               cin>>already;
               if(already==1)
               {
                   cout<<endl<<"Recharge of Rs.3698.00 is successful for "<<phone_number;
                   number_of_unlimited_packs++;
                   unlimited1++;
               }
           }
           break;
        }
    case 2:
        {
           if(unlimited2==0)
           {
               cout<<endl<<"Recharge of Rs.2498.00 is successful for "<<phone_number;
               number_of_unlimited_packs++;
               unlimited2++;
           }
           else
           {
               cout<<"You Have Already This Pack...If U Want Press 1 : ";
               cin>>already;
               if(already==1)
               {
                   cout<<endl<<"Recharge of Rs.2498.00 is successful for "<<phone_number;
                   number_of_unlimited_packs++;
                   unlimited2++;
               }
           }
           break;
        }
    case 3:
        {
           if(unlimited3==0)
           {
               cout<<endl<<"Recharge of Rs.1498.00 is successful for "<<phone_number;
               number_of_unlimited_packs++;
               unlimited3++;
           }
           else
           {
               cout<<"You Have Already This Pack...If U Want Press 1 : ";
               cin>>already;
               if(already==1)
               {
                   cout<<endl<<"Recharge of Rs.1498.00 is successful for "<<phone_number;
                   number_of_unlimited_packs++;
                   unlimited3++;
               }
           }
           break;
        }
    case 4:
        {
           if(unlimited4==0)
           {
               cout<<endl<<"Recharge of Rs.698.00 is successful for "<<phone_number;
               number_of_unlimited_packs++;
               unlimited4++;
           }
           else
           {
               cout<<"You Have Already This Pack...If U Want Press 1 : ";
               cin>>already;
               if(already==1)
               {
                   cout<<endl<<"Recharge of Rs.698.00 is successful for "<<phone_number;
                   number_of_unlimited_packs++;
                   unlimited4++;
               }
           }
           break;
        }
    case 5:
        {
           if(unlimited5==0)
           {
               cout<<endl<<"Recharge of Rs.599.00 is successful for "<<phone_number;
               number_of_unlimited_packs++;
               unlimited5++;
           }
           else
           {
               cout<<endl<<"You Have Already This Pack...If U Want Press 1 : ";
               cin>>already;
               if(already==1)
               {
                   cout<<endl<<"Recharge of Rs.599.00 is successful for "<<phone_number;
                   number_of_unlimited_packs++;
                   unlimited5++;
               }
           }
           break;
        }
    case 6:
        {
           if(unlimited6==0)
           {
               cout<<endl<<"Recharge of Rs.598.00 is successful for "<<phone_number;
               number_of_unlimited_packs++;
               unlimited6++;
           }
           else
           {
               cout<<"You Have Already This Pack...If U Want Press 1 : ";
               cin>>already;
               if(already==1)
               {
                   cout<<endl<<"Recharge of Rs.598.00 is successful for "<<phone_number;
                   number_of_unlimited_packs++;
                   unlimited6++;
               }
           }
           break;
        }
    default:
        {
           cout<<"Invalid Option";
        }
    }
}

void prepaid(string phone_number)
{
    string cphno;
    int pack;
    cout<<"Please Enter and Confirm Your Phone Number Once Again : ";
    cin>>cphno;
    if(cphno==phone_number)
    {
        cout<<"Please Choose You Want to Recharge \n 1.Data Pack Only \n 2.TalkTime Balance \n 3.Unlimited Calls And Data Balance \n";
        cin>>pack;
        switch(pack)
        {
        case 1:
            {
                datapack(cphno);
                break;
            }
        case 2:
            {
                talktime(cphno);
                break;
            }
        case 3:
            {
                unlimited(cphno);
                break;
            }
        default:
            {
                cout<<"Invalid Option";
            }
        }
    }
    else
    {
        cout<<"Your Phone Number is Invalid....please Enter valid Number";
    }
}

void postpaid(string phone_number)
{
    string confirm;
    cout<<endl<<"***Thank You For Choosing PostPaid***"<<endl<<endl;
    cout<<"Please Confirm Once Again Your Phone Number : ";
    cin>>confirm;
    if(confirm==phone_number)
    {
        cout<<endl<<"Your MObile Number Registered Successfully For Post Paid!!!"<<endl<<endl;;
        cout<<"***Now You Can Pay Your Bill Monthly Once***"<<endl;
    }
    else
    {
        cout<<"Invalid Number,Please Try Again...."<<endl;
    }
}

int main()
{
    cout<<endl<<endl<<"                                                                                  WELCOME TO FRIENDLY RECHARGE APP(FRA)!!!                                                               "<<endl;;
    string phno;
    int RT,NDP,NTP,NUP,x,choice;
    cout<<"Enter your phone number : ";
    cin>>phno;
    if(phno.length()==10)
    {
       if(phno[0]=='9' || phno[0]=='8' || phno[0]=='7' || phno[0]=='6')
       {
        while(choice)
        {
             cout<<"Choose Ur Recharging type \n 1.Prepaid \n 2.Postpaid \n 3.You Recharged Packs \n 4.Main Balance \n";
             cin>>RT;
            switch(RT)
            {
        case 1:
               {
                  prepaid(phno);
                  break;
               }
        case 2:
               {
                  postpaid(phno);
                  break;
               }
        case 3:
               {
                  NDP=number_of_data_packs;
                  NUP=number_of_unlimited_packs;
                  Numberofpacks(NDP,NTP,NUP);
                  break;
               }
        case 4:
               {
                  cout<<endl<<"Your Main.Balance is : "<<main_balance;
                  break;
               }
        default:
               {
                  cout<<"Invalid Option";
               }
            }
             cout<<"\n\nIf u Want to Go Menu Press Greater or Equal to 1 else 0 : ";
             cin>>choice;
         }
       }
       else
       {
           cout<<"\nInvalid Number.....Please Enter a Valid Number\n\n";
       }
    }
    else
    {
         cout<<"\n\nInvalid Number....Please Enter A Valid Number\n\n" ;
    }
    cout<<endl<<endl<<"                                                                                                        Thank You!!!                                                               ";
}

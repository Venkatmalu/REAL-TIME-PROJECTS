#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<sstream>

using namespace std;

//this structure for customers
struct customer_node
{
    int customer_id;
    int customer_product_id;
    int customer_finalaized_bidding_amount;
    struct customer_node *buyer_next;
};
struct customer_node *buyer_newnode,*head1,*head2,*head3,*head4,*head5,*tail1,*tail2,*tail3,*tail4,*tail5,*temp1;

//this structure for former
struct node
{
    int product_id;
    string product_name;
    int starting_bid_amount;
    int customer_finalaized_bidding_paisa;
    struct node *next;
};
struct node *head,*newnode,*tail,*temp;
int bidding_numbers,product_count=0,starting_value,Number_of_Products_selled=0;

//adding products by the former
void add_product(string New_Product_Name,int New_Product_Id,int starting_value)
{
    newnode=new node();
    newnode->product_id=New_Product_Id;
    newnode->product_name=New_Product_Name;
    newnode->starting_bid_amount=starting_value;
    newnode->next=NULL;
    if(head==0)
    {
        head=tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
    }
    product_count++;
}

//here adding maximum amount paid by the customers to the products
void add_max_amount(int final_product_id,int finalized_bidding_amount)
{
    temp=head;
    while(temp!=NULL)
    {
        if((temp->product_id)==final_product_id)
        {
            temp->customer_finalaized_bidding_paisa=finalized_bidding_amount;
            break;
        }
        temp=temp->next;
    }
}

//adding products by the customers
void add_customer_product(int buyer_id,int buyer_product_id,int finalaized_bidding_amount)
{
    switch(buyer_id)
    {
    case 1:
        {
           buyer_newnode=new customer_node();
           buyer_newnode->customer_id=buyer_id;
           buyer_newnode->customer_product_id=buyer_product_id;
           buyer_newnode->customer_finalaized_bidding_amount=finalaized_bidding_amount;
           buyer_newnode->buyer_next=NULL;
           if(head1==0)
           {
             head1=tail1=buyer_newnode;
           }
           else
           {
             tail1->buyer_next=buyer_newnode;
             tail1=buyer_newnode;
           }
           Number_of_Products_selled++;
           break;
        }
    case 2:
        {
           buyer_newnode=new customer_node();
           buyer_newnode->customer_id=buyer_id;
           buyer_newnode->customer_product_id=buyer_product_id;
           buyer_newnode->customer_finalaized_bidding_amount=finalaized_bidding_amount;
           buyer_newnode->buyer_next=NULL;
           if(head2==0)
           {
             head2=tail2=buyer_newnode;
           }
           else
           {
             tail2->buyer_next=buyer_newnode;
             tail2=buyer_newnode;
           }
           Number_of_Products_selled++;
           break;
        }
    case 3:
        {
           buyer_newnode=new customer_node();
           buyer_newnode->customer_id=buyer_id;
           buyer_newnode->customer_product_id=buyer_product_id;
           buyer_newnode->customer_finalaized_bidding_amount=finalaized_bidding_amount;
           buyer_newnode->buyer_next=NULL;
           if(head3==0)
           {
             head3=tail3=buyer_newnode;
           }
           else
           {
             tail3->buyer_next=buyer_newnode;
             tail3=buyer_newnode;
           }
           Number_of_Products_selled++;
           break;
        }
    case 4:
        {
           buyer_newnode=new customer_node();
           buyer_newnode->customer_id=buyer_id;
           buyer_newnode->customer_product_id=buyer_product_id;
           buyer_newnode->customer_finalaized_bidding_amount=finalaized_bidding_amount;
           buyer_newnode->buyer_next=NULL;
           if(head4==0)
           {
             head4=tail4=buyer_newnode;
           }
           else
           {
             tail4->buyer_next=buyer_newnode;
             tail4=buyer_newnode;
           }
           Number_of_Products_selled++;
           break;
        }
    case 5:
        {
           buyer_newnode=new customer_node();
           buyer_newnode->customer_id=buyer_id;
           buyer_newnode->customer_product_id=buyer_product_id;
           buyer_newnode->customer_finalaized_bidding_amount=finalaized_bidding_amount;
           buyer_newnode->buyer_next=NULL;
           if(head5==0)
           {
             head5=tail5=buyer_newnode;
           }
           else
           {
             tail5->buyer_next=buyer_newnode;
             tail5=buyer_newnode;
           }
           Number_of_Products_selled++;
           break;
        }
    default:
        {
            cout<<"Invalid option...";
        }
    }
}

//Displaying the total products added by the former
void view_products()
{
    temp=head;
    int bidding_type;
    cout<<"Enter any one option\n 1.Before Bidding \n 2.After Bidding \n";
    cin>>bidding_type;
    switch(bidding_type)
    {
    case 1:
        {
           if(temp==0)
           {
              cout<<"NO Stock,Sorry....";
           }
           else
           {
              cout<<"The Total Products are : "<<endl;
              cout<<"***(The Products are Displayed Product_Id,Product_Name And Starting_Bidding_Amount Respectively***"<<endl;
              int i=1;
              while(temp!=NULL)
              {
                cout<<i<<".          "<<temp->product_name<<"          "<<temp->starting_bid_amount<<endl;
                i++;
                temp=temp->next;
              }
           }
           break;
        }
    case 2:
        {
           if(temp==0)
           {
              cout<<"NO Stock,Sorry....";
           }
           else
           {
              cout<<"The Total Products are : "<<endl;
              cout<<"***(The Products are Displayed Product_Id,Product_Name,Starting_Bidding_Amount and Finalaized_Bidding_Amount Respectively***)"<<endl;
              int i=1;
              while(temp!=NULL)
              {
                cout<<i<<".          "<<temp->product_name<<"          "<<temp->starting_bid_amount<<"          "<<temp->customer_finalaized_bidding_paisa<<endl;
                i++;
                temp=temp->next;
              }
            }
            break;
        }
    default:
        {
            cout<<"Invalid option...";
            break;
        }
    }

}

//This area for bidding on the products
void bidding()
{
    cout<<"Number of Buyers ready to bidding : ";
    cin>>bidding_numbers;
    view_products();
    int i=1;
    while(i<=product_count)
    {
        cout<<endl<<i<<".Product is : ";
        temp=head;
        while(temp!=NULL)
        {
            if(temp->product_id==i)
            {
                cout<<temp->product_name;
                break;
            }
            temp=temp->next;
        }
        int time,buyer_id=1,select_product,finalaized_buyer_id,finalized_bidding_amount=0,initail_amount_count=0;
        cout<<endl<<"Bidding Time For Product "<<i<<" Is : ";
        cin>>time;
        while(time)
        {
            cout<<"Customer "<<buyer_id<<" If u want this Product Press 1 else 0 : ";
            cin>>select_product;
            if(select_product==1)
            {
                int bidding_amount;
                cout<<"Customer "<<buyer_id<<" Say Your Bidding Amount : ";
                cin>>bidding_amount;
                if(initail_amount_count==0 && bidding_amount>(temp->starting_bid_amount))
                {
                   finalized_bidding_amount=bidding_amount;
                   finalaized_buyer_id=buyer_id;
                   initail_amount_count++;
                }
                else
                {
                    if(initail_amount_count==1 && bidding_amount>finalized_bidding_amount)
                    {
                         finalized_bidding_amount=bidding_amount;
                         finalaized_buyer_id=buyer_id;
                    }
                }
            }
            time--;
            buyer_id++;
        }
         if(initail_amount_count>0)
         {
             add_customer_product(finalaized_buyer_id,(temp->product_id),finalized_bidding_amount);
             add_max_amount((temp->product_id),finalized_bidding_amount);
         }
       i++;
    }
}

//Displaying the total products bought by each customer
void view_customer_brought_products(int select_customer)
{
   if(select_customer==1)
    {
        temp1=head1;
    }
    else if(select_customer==2)
    {
        temp1=head2;
    }
    else if(select_customer==3)
    {
        temp1=head3;
    }
    else if(select_customer==4)
    {
        temp1=head4;
    }
    else
    {
        temp1=head5;
    }
    if(temp1==0)
    {
        cout<<"Customer "<<select_customer<<" was not bought any thing..."<<endl;
    }
    else
    {
        cout<<endl<<"Customer "<<temp1->customer_id<<" bought Products are : "<<endl;
        cout<<"***(The Products are Displayed Product_Id,Product_Name And Starting_Bidding_Amount And Customer_Paid_Amount Respectively***"<<endl;
        while(temp1!=NULL)
        {
            temp=head;
            while(temp!=NULL)
            {
                if((temp1->customer_product_id)==(temp->product_id))
                {
                    cout<<temp1->customer_product_id<<"."<<"          "<<temp->product_name<<"          "<<temp->starting_bid_amount<<"          "<<temp1->customer_finalaized_bidding_amount<<endl;
                    break;
                }
                temp=temp->next;
            }
            temp1=temp1->buyer_next;
        }
    }
}

//Here calculating today's total income
int today_income()
{
    temp=head;
    int income=0;
    if(temp==0)
    {
        cout<<"No Products Selled,";
    }
    else
    {
        while(temp!=NULL)
        {
            income=income+(temp->customer_finalaized_bidding_paisa);
            temp=temp->next;
        }
    }
    return income;
}

int main()
{
    head=0,head1=0,head2=0,head3=0,head4=0,head5=0;
    int who_are_you,seller_choice,buyer_menu_choice=1,buyer_choice;
    cout<<"                                                                                             WELCOME TO YOUR FORMER WORLD"<<endl;
   while(buyer_menu_choice)
   {
    cout<<"Choose Your Type :  \n 1.Buyer \n 2.Former"<<endl;
    cin>>who_are_you;
    if(who_are_you==1 && head!=0)
    {
        cout<<"Enter your choice \n 1.Total Products \n 2.Bidding \n 3.Customer Bought Products\n";
        cin>>buyer_choice;
         switch(buyer_choice)
         {
         case 1:
            {
                view_products();
                break;
            }
         case 2:
            {
                bidding();
                break;
            }
         case 3:
            {
                int select_customer;
                cout<<"Enter the customer id in between 1-"<<bidding_numbers<<" : ";
                cin>>select_customer;
                switch(select_customer)
                {
                case 1:
                    {
                        view_customer_brought_products(select_customer);
                        break;
                    }
                case 2:
                    {
                        view_customer_brought_products(select_customer);
                        break;
                    }
                case 3:
                    {
                        view_customer_brought_products(select_customer);
                        break;
                    }
                case 4:
                    {
                        view_customer_brought_products(select_customer);
                        break;
                    }
                case 5:
                    {
                        view_customer_brought_products(select_customer);
                        break;
                    }
                default:
                    {
                        cout<<"Invalid option...";
                    }
                }
                break;
            }
                default:
                    {
                        cout<<"Invalid option...";
                    }
         }
    }
    else if(who_are_you==2)
    {
        int seller_menu_choice=1;
        while(seller_menu_choice)
        {
            cout<<"\nEnter Your Event \n 1.Add New Product \n 2.View Total Products \n 3.Number Of Products Selled \n 4.Todays My Income \n";
            cin>>seller_choice;
            switch(seller_choice)
            {
              case 1:
              {
                string New_Product_Name;
                int New_Product_Id;
                cout<<"Enter the New Product Id : ";
                cin>>New_Product_Id;
                cout<<"Enter the New Product Name : ";
                cin>>New_Product_Name;
                cout<<"Enter the starting bidding amount for the New Product : ";
                cin>>starting_value;
                add_product(New_Product_Name,New_Product_Id,starting_value);
                break;
              }
              case 2:
              {
                view_products();
                break;
              }
              case 3:
                {
                    cout<<Number_of_Products_selled<<" Products Was Today Selled";
                    break;
                }
              case 4:
                {
                    int income=today_income();
                    cout<<"Today's Your Income Is : Rs."<<income;
                    break;
                }
              default:
                {
                    cout<<"Invalid Option...";
                }
             }
             cout<<endl<<"If u want to Go Seller Menu Press Greater than 0 else 0 : ";
             cin>>seller_menu_choice;
        }
    }
    else
    {
        if(who_are_you==1 && head==0)
        {
            cout<<endl<<"***There is No Products...So,Please Wait For Adding Products By Former***"<<endl;
        }
        else
        {
            cout<<endl<<"***Invalid option...Please try again***"<<endl;
        }
    }
             cout<<endl<<"If u want to Go Main Menu Press Greater than 0 else 0 : ";
             cin>>buyer_menu_choice;
   }
   cout<<endl<<"                                                                                               THANK YOU FOR YOUR VISIT";
}


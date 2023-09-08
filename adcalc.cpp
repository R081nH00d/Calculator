#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    system ("CLS");
    double a,b,c,d,e;
    int op,f;

    cout<<endl;
    cout<<endl;
    cout<<"CALCULATOR";
    cout<<endl;
    cout<<endl;
    cout<<"To select an operator.\n";
    cout<<"Enter the number beside the operator.\n";
    cout<<"To exit Enter 0.";
    cout<<endl;
    cout<<" _____ "<<"  "<<" _____ "<<"  "<<" _____ "<<"  "<<" _____ "<<endl;
    cout<<"|1    |"<<"  "<<"|2    |"<<"  "<<"|3    |"<<"  "<<"|4    |"<<endl;
    cout<<"|    +|"<<"  "<<"|    -|"<<"  "<<"|    /|"<<"  "<<"|    *|"<<endl;
    cout<<endl;
    cout<<" _____ "<<"  "<<" _____ "<<"  "<<" _____ "<<"  "<<" _____ "<<endl;
    cout<<"|5    |"<<"  "<<"|6    |"<<"  "<<"|7    |"<<"  "<<"|8    |"<<endl;
    cout<<"| sqrt|"<<"  "<<"|    !|"<<"  "<<"|    ^|"<<"  "<<"|  |A||"<<endl;
    cout<<endl;

    lab1:
    cin>>d;
    while(d!=0){

     if(d<=8 && d>0.9){
  
       op=d;
         
      if(op==d){

        break;
      }else{

       cout<<"Why are you testing me\n";
       cin>>d;
        }
     }else{

     cout<<"Select a correct operator\n";
     cin>>d;
    }

  }

    switch(op){
        
        case 1 :                                        /* + */
        op=0;                                          /*assigned op value to 0 for the while loop to start again*/
        for(int i=1;i==1;i++){                        /*using for loop so that the case 1 executes only once as the array cal[f] jumps to other cases*/
         
         cout<<"\n\"Addition ( + )\" ";
         cout<<endl;
         cout<<endl;                                   
         cout<<"Total number of operands = "; 
         cin>>a;

         if(a==1 || a==0){

            while(a==1 || a==0){
                 
                cout<<endl; 
                cout<<"Minimum two operands required."<<endl;
                cout<<"Total number of operands =";
                cin>>a;
                cout<<endl;
            }
            f=a;
          }else{
           f=a;
          }
         cout<<"Ready to Enter numbers "<<endl;
         b=0;

         double cal[f];
 
         for(int i=0;i<f;i++){

            cin>>cal[i];
         }

         for(int i=0;i<f;i++){

             b=b+cal[i];

         }
         for(int i=0;i<f;i++){

            if(i==f-1){
              cout<<cal[i];
            }else{
                cout<<cal[i]<<" + ";
            }
         }
         cout<<"="<<b<<endl;
         cout<<endl;
         cout<<endl;

         cout<<"To exit Enter 0.\nOr to continue enter the operator number."<<endl;
         
         goto lab1;
        }
        break;

        
        case 2:                                     /* - */                                       
        op=0;                                          
        for(int i=1;i==1;i++){
         
         cout<<"\n\"Subraction ( - )\" ";
         cout<<endl;
         cout<<endl;                                   
         cout<<"Total number of operands = "; 
         cin>>a;
         
         if(a==1 || a==0){

            while(a==1 || a==0){
                 
                cout<<endl; 
                cout<<"Minimum two operands required."<<endl;
                cout<<"Total number of operands =";
                cin>>a;
                cout<<endl;
            }
            f=a;
          }else{
           f=a;
          }
         cout<<"Ready to Enter numbers "<<endl;
         b=0;

         double cal[f];
 
         for(int i=0;i<a;i++){

            cin>>cal[i];
         }

         for(int i=0;i<a;i++){
         
             if(b<=cal[i]){

                 b=cal[i]-b;
             }else{
                 b=b-cal[i];
             }


         }
         for(int i=0;i<a;i++){

            if(i==a-1){
              cout<<cal[i];
            }else{
                cout<<cal[i]<<" - ";
            }
         }
         if(b<=cal[f-1] && b!=0){
            cout<<"=-"<<b<<endl;
            cout<<endl;
            cout<<endl;

         cout<<"To exit Enter 0.\nOr to continue enter the operator number."<<endl;    
         }else{

         cout<<"="<<b<<endl;
         cout<<endl;
         cout<<endl;

         cout<<"To exit Enter 0.\nOr to continue enter the operator number."<<endl;
         
         }
         
         goto lab1;
        
        }
        
        break;
        
        case 3:                                   /* / */
         op=0;
         cout<<"\nEnter first number = ";
         cin>>a;
         cout<<"Enter second number = ";
         cin>>b;
         if(b==0){

            cout<<a<<"/"<<b<<"="<<" ∞ "<<"."<<endl;
            cout<<endl;
            cout<<endl;   
         }else{

            c=a/b;
            cout<<a<<"/"<<b<<"="<<c<<".\nAfter round up ="<<ceil(c)<<endl;
            cout<<endl;
            cout<<endl;

         }

         cout<<"To exit Enter 0.\nOr to continue enter the operator number."<<endl;
         goto lab1;
         break;
        
         case 4:                                  /* * */
         op=0;                                          
         for(int i=1;i==1;i++){
         
         cout<<"\n\"Multiplication ( * )\" ";
         cout<<endl;
         cout<<endl;                                   
         cout<<"Total number of operands = "; 
         cin>>a;
         
         if(a==1 || a==0){

            while(a==1 || a==0){
                 
                cout<<endl; 
                cout<<"Minimum two operands required."<<endl;
                cout<<"Total number of operands =";
                cin>>a;
                cout<<endl;
            }
            f=a;
          }else{
           f=a;
          }
         cout<<"Ready to Enter numbers "<<endl;
         b=1;

         double cal[f];
 
         for(int i=0;i<a;i++){

            cin>>cal[i];
         }

         for(int i=0;i<a;i++){

             b=b*cal[i];

         }
         for(int i=0;i<a;i++){

            if(i==a-1){
              cout<<cal[i];
            }else{
                cout<<cal[i]<<" * ";
            }
         }
         cout<<"="<<b<<endl;
         cout<<endl;
         cout<<endl;

         cout<<"To exist Enter 0.\nOr to continue enter the operator number."<<endl;
         
         goto lab1;
         }
         break;
        
        case 5:                                    /* √ */
        op=0;
        cout<<"\n\"Square Root\"";
        cout<<endl;
        cout<<"\nEnter the number = ";
        cin>>a;
        
        if(a<0){

            a=0-a;

            c=sqrt(a);
            cout<<"\nSquareroot of "<<a<<" is "<<c<<"i."<<endl;
            cout<<"The value of i is SquareRoot of -1."<<endl;
            cout<<endl;
            cout<<endl;
        }else{

            c=sqrt(a);
            cout<<"\n√"<<a<<" = "<<c<<"."<<endl;
            cout<<endl;
            cout<<endl;

        }

        cout<<"To exit Enter 0.\nOr to continue enter the operator number."<<endl;
        goto lab1;
        break;

        case 6:                                   /* ! */ 
        op=0;       
        cout<<"\nEnter the number = ";            
        cin>>a;

        c=1;
        for(int i=1;i<=a;i++){

            c=i*c;
        }
        cout<<"\nFactorial of "<<a<<" is "<<c<<endl;
        cout<<endl;
        cout<<endl;

        cout<<"To exit Enter 0.\nOr to continue enter the operator number."<<endl;
        goto lab1;
        break;
        
        case 7:                                      /* ^ */
        op=0;
        cout<<"\n\"Power of number ( ^ )\"";
        cout<<endl;
        cout<<endl;
        cout<<"\nEnter the number = ";
        cin>>a;
        cout<<"Enter the Power = ";
        cin>>b;

        cout<<"\n"<<a<<"^"<<b<<" = ";

        if(b<0){

            e=0-b;

            c=1;
 
            while(e!=0){

                c=a*c;
                e--;
            }

            c=1/c;
            cout<<c;
        }else{

        c=1;
        while(b!=0){

            c=a*c;
            --b;
        } 
        cout<<c;
        }
        cout<<endl;
        cout<<endl;

        cout<<"To exit Enter 0.\nOr to continue enter the operator number."<<endl;
        goto lab1;       
        break;

        case 8:                                      /* |A| */
        op=0;
        for(int i=1;i==1;i++){
            
            double ar1[3], ar2[3], ar3[3], res;
            cout<<"\n\"DETERMINENT OF MATRIX !!!\""; 

            cout<<endl;
            cout<<endl;
            cout<<"Enter"<<endl;
            cout<<"Elements of First Row:";

            for(int i=0;i<3;i++){

                cin>>ar1[i];
            }

            cout<<"Elements of Second Row.";

            for(int i=0;i<3;i++){
         
                cin>>ar2[i];
            }

            cout<<"Elements of Third Row.";

            for(int i=0;i<3;i++){

                cin>>ar3[i];
            }

            res=(ar1[0]*((ar2[1]*ar3[2])-(ar3[1]*ar2[2])))-(ar1[1]*((ar2[0]*ar3[2])-(ar3[0]*ar2[2])))+(ar1[2]*((ar2[0]*ar3[1])-(ar3[0]*ar2[1])));

            cout<<endl;
            cout<<endl;

            cout<<"    | "<<ar1[0]<<" "<<ar1[1]<<" "<<ar1[2]<<" |"<<endl;
            cout<<"A = | "<<ar2[0]<<" "<<ar2[1]<<" "<<ar2[2]<<" |"<<" = "<<res<<endl;
            cout<<"    | "<<ar3[0]<<" "<<ar3[1]<<" "<<ar3[2]<<" |"<<endl;
            cout<<endl;
            cout<<"|A| = "<<res<<endl;  
           
           cout<<endl;
           cout<<endl;

            cout<<"To exit Enter 0.\nOr to continue enter the operator number."<<endl;
            goto lab1;
        }
        break;
        
        default :
        cout<<"Invalid operator bye.";
        break;
    }
       
    system("pause>0");
}
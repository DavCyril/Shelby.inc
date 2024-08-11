#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int opt;
    double s,u,t,a,v;


    cout<<"1. v = u + at "<<endl;
    cout<<"2. s = ut + 1/2*at²"<<endl;
    cout<<"3. s= 1/2*(u+v)*t "<<endl;
    cout<<"4. v²= u² + 2as "<<endl;
    cout<<"5. s = vt - 1/2*at² "<<endl;
    cout<<"Please choose the formula you want to use: ";
    cin>>opt; 

    if(opt==1){
        cout<<"Initial velocity: ";
        cin>>u;
        cout<<"Acceleration: ";
        cin>>a;
        cout<<"Time (seconds): ";
        cin>>t;
        v = u+(a*t);
        cout<<"The final velocity is "<<v;
    }
   else if(opt==2){
        cout<<"Initial velocity: ";
        cin>>u;
        cout<<"Time (seconds): ";
        cin>>t;
         cout<<"Acceleration: ";
        cin>>a;
        s= (u*t) +((1/2)*(a*pow(t,2)));
        cout<<"The displacement was "<<s;

    }
   else if(opt==3){
        cout<<"Initial velocity: ";
        cin>>u;
        cout<<"Final velocity: ";
        cin>>v;
        cout<<"Time (seconds): ";
        cin>>t;
        s = (1/2)*((u+v)*t);
        cout<<"The displcement is "<<s;

    }
   else if(opt==4){
        cout<<"Initial velocity: ";
        cin>>u;
        cout<<"Acceleration: ";
        cin>>a;
        cout<<"Displacement: ";
        cin>>s;
        v= pow((pow(u,2))+(2*a*s),.5);
        cout<<"The final velocity "<<v;
        
    }
    else if(opt==5){
        cout<<"Final velocity: ";
        cin>>v;
         cout<<"Time (seconds): ";
        cin>>t;
        cout<<"Acceleration: ";
        cin>>a;
        s= v*t -(0.5*(a*pow(t,2)));
        cout<<"The displacement is "<<s;

    }

    else if (opt==0){
        cout<<"Invalid choice";
        return 0;
    }
    
    else{
        cout<<"Enter a valid argument dickhead, Bad gyal Sabrina";
        return 0;
    }





 return 0;   
}
 #include <iostream>
 using namespace std;
 int main ()
 {
    float age;
    cout<<"enter your age :"<<endl;
    cin>>age;
    if(age>=18){
    cout<<"you are an  adult "<<endl;}
    else if(age>=13){
    cout<<"you are a teenager"<<endl;}
     else{
    cout<<"you are a child"<<endl;}
    float totalmarks;
    cout<<"enter your total marks : ";
    cin>>totalmarks;
    if(totalmarks>=300){
        cout<<"your grad is : A"<<endl;

    }
    else if (totalmarks<=200){
        cout<<"your grad is : c"<<endl;}
        else{
            cout<<"your grad is B : "<<endl;
        }
        char ch;
        
    cout<<"enter cherecter : ";
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<" UPPERCASE";
    }
     else{
        cout<<" lowercase";
     }
     
        return 0;
    }
    
       
    
    



    
     

     
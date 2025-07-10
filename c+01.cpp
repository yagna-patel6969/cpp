 #include <iostream>
 using namespace std;
 int main ()
 {
    cout<<"i want apples";
     
    cout<<"\n how much you want?";
    float apples;
    
    cin>>apples;
     
     
    cout <<"\n i want : ;"<<apples<<endl;
    cout<<"\n lets do some sum  ";
    cout<<"\ngive me two variables";
    cout<<"\ngive me first value of variable :";
    float a;
    cin>>a;
    cout<<"\ngive me second value of variable";
    float b;
    cin>>b;
    cout<<"\nfor given this two value your answere is :"<<a+b<<endl; 
      

    cout<<"\nnice well done";
    cout<<"\nlets do some devison";
    cout<<"\nfor devision give me two variable number";
    cout<<"\n give me first number:";
    float A;
    cin>>A;
    cout<<"give me second number:";
    float B;
    cin>>B;
    cout<<"\nfor given this two number your answere is:"<<A/B<<endl;
    cout<<"lets calculate your percentage";
    cout<<"give me your markes";
    cout<<"\ngive me your MATHS marks : ";
    float M;
    cin>>M;
    cout<<"give me your SCIENCE marks : ";
    float s;
    cin>>s;
    cout<<"give me your ENGLISH marks : ";
    float e;
    cin>> e;
    cout<<"give me your SANSKRIT marks : ";
    float sa;
    cin>> sa;
    cout<<"give me your GUJRATI marks : ";
    float guj;
    cin>> guj;
    cout<<"give me your SOCIAL SCIENCE marks : ";
    float ss;
    cin>>ss;
    cout<<"give me your COMPTURE marks : ";
    float co;
    cin>> co;
    float totalobtainedmarks=M+s+e+sa+guj+ss+co;
    int totalmarks=700;
    float percentage=(totalobtainedmarks/totalmarks)*100;
    cout<<"total obtained marks is : "<<totalobtainedmarks<<endl;  cout<<"of 700"<<totalobtainedmarks<<endl;  
    cout<<"your persentage is :"<<percentage<<endl;
    if(totalobtainedmarks<=650){
        cout<<"your grage is : A+";}
    else {
        cout<<"your grade is : a";
    }    
    




    return 0;
}
 


     
     

 
 





  

  
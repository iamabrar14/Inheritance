#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
class info{
     public:
     string Fname,Lname;
     long int id;
     
     void getinfo(){
        cout<<"Welcome to our quick quizz !"<<endl;
        cout<<"Program Made by Abrar Rahman "<<endl;
        cout<<"***************************************"<<endl;
        cout<<"Enter first name : ";
        cin>>Fname;
        cout<<"Enter last name ";
        cin>>Lname;
     }
};
class quiz:public info{
    public:
    int a,b,c,d,e,f,g,h,i,j;
     int t=0;
    void quizz(){
      cout<<"1-What is the capital of France ?"<<endl;
      cout<<"1: Paris , 2:Dhaka , 3:Lusail , 4:Madrid "<<endl;
      cin>>a;
      if(a==1){
        cout<<"Correct!!"<<endl;
        t++;
    } 
    else{
        cout<<"Wrong!"<<endl;
    }
    cout<<"2-Who won most Balon D'Or in the history of football ?"<<endl;
      cout<<"1:Ronaldo , 2:Messi , 3:Maradona , 4:Pele "<<endl;
      cin>>b;
      if(b==2){
        cout<<"Correct!!"<<endl;
        t++;
    }  
    else{
        cout<<"Wrong!!"<<endl;
    }
    
    
      cout<<"3-Who is the founder & CEO of Facebook?"<<endl;
      cout<<"1: Mark Zuckerberg , 2:Steve Jobs , 3:Jawed Karim , 4:Jeff Bezos "<<endl;
      cin>>c;
      if(c==1){
        cout<<"Correct!!"<<endl;
        t++;
    } 
    else{
        cout<<"Wrong!"<<endl;
    }
     cout<<"4-Who is the director of famous movie Interstellar ?"<<endl;
      cout<<"1: Rajkumar Hirani , 2:James Cameron , 3:Nolan , 4:Tomasz Mendes "<<endl;
      cin>>d;
      if(d==3){
        cout<<"Correct!!"<<endl;
        t++;
    } 
    else{
        cout<<"Wrong!"<<endl;
    }
     cout<<"5-Who is the inventor of Quantum physics theory ?"<<endl;
      cout<<"1: Einstien , 2:Newton , 3:Thomas Adisson , 4:Max Planck "<<endl;
      cin>>e;
      if(e==4){
        cout<<"Correct!!"<<endl;
        t++;
    } 
    else{
        cout<<"Wrong!"<<endl;
    }
     cout<<"6-Who is the founder of Youtube amongst them?"<<endl;
      cout<<"1: Zuckerberg , 2:Elon Musk , 3:Martin Lorenzton , 4:Jawad Karim "<<endl;
      cin>>f;
      if(f==4){
        cout<<"Correct!!"<<endl;
        t++;
    } 
    else{
        cout<<"Wrong!"<<endl;
    }
     cout<<"7-Who is the current PM of Australia "<<endl;
      cout<<"1: Joe Biden , 2:Jimmy Curter , 3:Anthony Albanese , 4:Marshall Mathers "<<endl;
      cin>>g;
      if(g==3){
        cout<<"Correct!!"<<endl;
        t++;
    } 
    else{
        cout<<"Wrong!"<<endl;
    }
     cout<<"8-What is the capital of Finland?"<<endl;
      cout<<"1: Helsinki , 2:Palermo , 3:Rio , 4:Berlin "<<endl;
      cin>>h;
      if(h==1){
        cout<<"Correct!!"<<endl;
        t++;
    } 
    else{
        cout<<"Wrong!"<<endl;
    }
     cout<<"9-Who won best young player award at Qatar World cup 2022?"<<endl;
      cout<<"1: Pedri , 2:Kylian Mbappe , 3:Richarlison , 4:Enzo Fernandez "<<endl;
      cin>>i;
      if(i==4){
        cout<<"Correct!!"<<endl;
        t++;
    } 
    else{
        cout<<"Wrong!"<<endl;
    }
     cout<<"10-Who is the inventor of C++ Language ?"<<endl;
      cout<<"1: Dennis Ritchie, 2:Bjarne Stroustrup , 3:Guido van Rossum , 4:James Gosling "<<endl;
      cin>>i;
      cout<<"*************************************"<<endl;
      if(i==2){
        cout<<"Correct!!"<<endl;
        t++;
    } 
    else{
        cout<<"Wrong!"<<endl;
    }
    }
     void showinfo(){
    cout<<"First name : "<<Fname<<endl;
    cout<<"Last name : "<<Lname<<endl;
    cout<<"*************************************"<<endl;
    cout<<"Your result : "<<t<<endl;
    if(t>=8){
        cout<<"Congratulations!You are selected for next round!"<<endl;

    }
    else{
        cout<<"Your score is below 8!,Keep improving"<<endl;
    }
    }
    
    
};

int main()
{   quiz obj;
    obj.getinfo();
    obj.quizz();
    obj.showinfo();
    getch();
     return 0;
}
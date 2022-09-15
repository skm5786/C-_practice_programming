#include <iostream>
#include <string>
using namespace::std;
class staff{
protected:
    int code;
    string name;
protected:
    staff(){
        code=0;
        name="0";
    }
    staff(int a,string p){
        code =a;
        name=p;
    }
    void showcode(){
        cout<<"code is "<<code<<"\n";
    }
    void showname(){
        cout<<"name is "<<name<<"\n";
    }
};
class educational_qualification{
protected:
    string generaleducation;
protected:
    educational_qualification(){
        generaleducation="0";
    }
    educational_qualification(string e){
        generaleducation=e;
    }
    void showgeneraleducation(){
        cout<<"general education is "<<generaleducation<<"\n";
    }
};
    class teacher:protected staff,protected educational_qualification{
        string subject;
        string publication;
    public:
        void getinfo();
        teacher(){};
        teacher(int w,string a,string b,string p,string e):staff(w,a),subject(b),publication(p),educational_qualification(e){};
        void showinfo(){
           
            showcode();
            showname();
            cout<<"subject of teacher is "<<subject<<"\n";
            cout<<"publication of teacher is "<<publication<<"\n";
            showgeneraleducation();
        }
        
    };
class officer:protected staff,protected educational_qualification{
    int grade;
public:
    officer(int w,string a,int b,string e):staff(w,a),grade(b),educational_qualification(e){}
    void showinfo(){
        showcode();
        showname();
        cout<<"grade of officer is "<<grade<<"\n";
        showgeneraleducation();
    }
};
class typist: protected staff{
    int speed;
protected:
    typist(int w,string a,int b):staff(w,a),speed(b){};
    void showspeed(){
        cout<<"speed of typist in words per minute is "<<speed<<"\n";
    }
};
class regulartypist:protected typist{
public:
    regulartypist(int w,string a,int b):typist(w,a,b){};
    void showinfo(){
        showcode();
        showname();
        showspeed();
    }
    
};
class casualtypist:protected typist{
    int dailywages;
public:
    casualtypist(int w,string a,int b,int c):typist(w,a,b),dailywages(c){};
    void showinfo(){
        showcode();
        showname();
        showspeed();
        cout<<"daily wages of casual typist is "<<dailywages<<"\n";
    }
    
};
void teacher::getinfo(){
    
    cout<<"enter teacher code: ";
    cin>>code;
    cout<<"name of teacher: ";
    cin>>name;
    cout<<"enter subject of teacher: ";
    cin>>subject;
    cout<<"enter publication of teacher: ";
    cin>>publication;
    cout<<"enter general education of teacher: ";
    cin>>generaleducation;
    
    
}
int main(){
    
    regulartypist a(123,"babloo",62);
    
    a.showinfo();
    cout<<"\n";
    casualtypist b(456,"jabloo",62,150);
    b.showinfo();
    cout<<"\n";
    teacher c;//(789,"mmie",4,"jaipub","BA");
    c.getinfo();
    c.showinfo();
    cout<<"\n";
    officer d(321,"jaiparkash",1,"B.LLB");
    d.showinfo();
    cout<<"\n";
    
    return 0;
}

#include <iostream>
using namespace::std;
class staff{
    int code;
    char *name;
protected:
    staff(int a, char *p){
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
    class teacher:protected staff{
        int subject;
        char *publication;
    public:
        teacher(int w,char*a,int b,char*p):staff(w,a),subject(b),publication(p){}
        void showinfo(){
           
            showcode();
            showname();
            cout<<"subject of teacher is "<<subject<<"\n";
            cout<<"publication of teacher is "<<publication<<"\n";
        }
        
    };
class officer:protected staff{
    int grade;
public:
    officer(int w,char*a,int b):staff(w,a),grade(b){}
    void showinfo(){
        showcode();
        showname();
        
        cout<<"grade of officer is "<<grade<<"\n";
    }
};
class typist: protected staff{
    int speed;
protected:
    typist(int w,char*a,int b):staff(w,a),speed(b){};
    void showspeed(){
        cout<<"speed of typist is "<<speed<<"\n";
    }
};
class regulartypist:protected typist{
public:
    regulartypist(int w,char*a,int b):typist(w,a,b){};
    void showinfo(){
        showcode();
        showname();
        showspeed();
    }
    
};
class casualtypist:protected typist{
    int dailywages;
public:
    casualtypist(int w,char*a,int b,int c):typist(w,a,b),dailywages(c){};
    void showinfo(){
        showcode();
        showname();
        showspeed();
        cout<<"daily wages of casual typist is "<<dailywages<<"\n";
    }
    
};

int main(){
    
    regulartypist a(123,"babloo",62);
    a.showinfo();
    cout<<"\n";
    casualtypist b(456,"jabloo",62,150);
    b.showinfo();
    cout<<"\n";
    teacher c(789,"mmie",4,"jaipub");
    c.showinfo();
    cout<<"\n";
    officer d(321,"jaiparkash",1);
    d.showinfo();
    cout<<"\n";
    
    return 0;
}

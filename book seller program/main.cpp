#include <iostream>
#include <string>
using namespace::std;
void linkfloat( ) {
 char a = '\0', *b ;
b = &a ; /* cause emulator to be linked */
a = *b ; /* suppress the warning - variable not used */
}
class book{
    char author[30];
    char title[30];
    float price;
    char publisher[30];
    int stockavailable;
public:
   
    book(char *a,char *b,float p,char*q,int h){
        a=author;
        b=title;
        p=price;
        q=publisher;
        h=stockavailable;
    }
    void checkavailability(char*,char*);
    void showbill(int);
};

void book::checkavailability(char *a,char *b){
    int w,j = 0;
    for (int i=0; i<strlen(author); i++,j++) {
        if (a[i]!=author[i]) {
            cout<< "book you are seeking is not available" <<endl;
        }
    }
    
        if (j==strlen(author)) {
            cout<< "enter number of books you want" <<endl;
            cin>>w;
            showbill(w);
        }
}
void book:: showbill(int q){
    if (q>=stockavailable) {
        cout<<"your total price is: "<<(float)q*price;
    }
    
}
int main(){
    char r[30];
    char s[30];
    char ax1[30],ax2[30];
    char bx1[30],bx2[30];
    float px1,px2;
    char qx1[30],qx2[30];
    int hx1,hx2;
    
    
        cout<<"enter author\n";
        scanf("%s",ax1);
        cout<<"enter title\n";
    scanf("%s",bx1);
        cout<<"enter price\n";
        cin>>px1;
        cout<<"enter publisher\n";
    scanf("%s",qx1);
        cout<<"enter stockavailable\n";
        cin>>hx1;
        cout<<"enter author\n";
    scanf("%s",ax2);
        cout<<"enter title\n";
    scanf("%s",bx2);
        cout<<"enter price\n";
        cin>>px2;
        cout<<"enter publisher\n";
    scanf("%s",qx2);
        cout<<"enter stockavailable\n";
        cin>>hx2;
    book ary[]={ book (ax1,bx1,px1,qx1,hx1),book (ax2,bx2,px2,qx2,hx2)};
        
        
    
        for (int i=0; i<2; i++) {
            cout<<"enter your author\n";
            scanf("%s",r);
            cout<<"enter your title\n";
            scanf("%s",s);
            ary[i].checkavailability(r, s);
             
        }
    
        
    
    return 0;
}

#include <iostream>

using namespace std;

class Point {
    private:
    int x;
    int y;
    int z;
    public:
        Point(){
            x = 0;
            y = 0;
        }
        Point(int x1, int y1){
            x = x1;
            y = y1;
        }
        
    
    void print() {
        cout<<x<< "  ----  "<<y<<endl;

    }    
};

int main() {
    Point p1, p2(10, 50);
    cout<<"The First Output"<<endl;
    p1.print();
    cout<<"The second Output"<<endl;
    p2.print();
    cout<<" Initializing new value after creating new object to it ";
    Point *ptr = new Point(5, 10);
    cout<<"Last Output"<<endl;
    ptr->print();
    return 0;    
} 



/* 
class Point2 {
    private:
        char s;
        char p;
        char q;
        char r;
    
    public:
        Point2() {
            s = 'A';
            p = 'B';
            q = 'C';
            r = 'D';
        }

        Point2(char s1, char p1) {
            s = s1;
            p = p1;
        }
        Point2(char s1, char p1, char q1) {
            s = s1;
            p = p1;
            q = q1;
        }
        Point2(char s1, char p1, char q1, char r1) {
            s = s1;
            p = p1;
            q = q1;
            r = r1; 
        }
    
    void print(){
        cout<<s<< "  -----  "<<p<<endl;
    }

    void print1() {
        cout<<s<< "  ----  "<<p<< "  ----  "<<q<<endl;
    }
    
    void print2() {
        cout<<s<< "  ----  "<<p<<"  ----   "<<q<<"  ----  "<<r<<endl;
    }
};

int main (){
    Point2 a1, a2('P', 'Q'), a3('M', 'N', 'O');
    cout<<"The First Output of the of the sequence in the char: "<<endl;
    a1.print();
    cout<<"The Second Output of the sequence in the char: "<<endl;
    a2.print();
    cout<<"The Third output of the sequence in the char: "<<endl;
    a3.print1();
    cout<<"The Last output of the character sequence: "<<endl;
    
    //This is how we can set the value of Point2 function using ptr pointer
    Point2 *ptr = new Point2('X', 'Y', 'Z', 'A');
    ptr->print2();

    return 0;
} */


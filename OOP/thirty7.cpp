#include <iostream>
#include <cstring> //This module is used to work with strings function.
using namespace std;

//Virtual Function Example.

class YC{
    protected:      //Here I am using protected because I want to inherit but not directly. 
        string title;
        float rating;

    public:
        YC(string s, float r){
            title = s;
            rating = r;
        }

        //if we are removing the virtual from here then this display will be called.
        //To avoid this issue we are using virtual keyword.
        virtual void display(){
            cout<<"Garbage code"<<endl;
        }
};

class YCVideo : public YC{
    float videoLen;
    public:
        //Here YC(s, r) is used to call the Base class constructor with s & r.
        YCVideo(string s, float r, float vl): YC(s, r){
            videoLen = vl;
        }

        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout << "Ratings: " << rating <<" out of 5 stars. " << endl;
            cout << "Length of this video is: " << videoLen << " minutes. " << endl;
        }
};

class YCText : public YC
{
    int words;

public:
    // Here YC(s, r) is used to call the Base class constructor with s & r.
    YCText(string s, float r, int wc) : YC(s, r)
    {
        words = wc;
    }

    void display()
    {
        cout << "This is an amazing video with title: " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars. " << endl;
        cout << "No. o words in this text tutorial is: " << words << " words. " << endl;
    }
};

int main() {

    string title;
    float rating, vlen;
    int words;

    //Data for youtube channel video(YCVideo)
    title = "I danced with my friend";
    vlen = 4.56;
    rating = 4.89;
    //Here we are creating djVideo as an object of YCVideo
    YCVideo djVideo(title, rating, vlen);
    //djVideo.display();

    // Data for youtube channel Text (YCTEXT)
    title = "I danced with my friend";
    words = 40;
    rating = 4.19;
    // Here we are creating djText as an object of YCText
    YCText djText(title, rating, words);
    //djText.display();

    //Here we are creating a pointer object;
    YC *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    cout<<"\n";
    tuts[1]->display();

    return 0;
}

/* 

Rules for Virtual Function:
1. They cannot be static.
2. They are accessed by object pointers.
3. Virtual functions can be a friend of another class.
4. A virtual function in base class might not be used.
5. If a virtual function is defined in a base class, there is no necessity of redefining it in derived class.
 
 */
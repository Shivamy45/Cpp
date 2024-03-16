#include <iostream>
#include <cstring>
using namespace std;
// Virtual function - creation rules
class CodeWithShivam
{
protected:
    string title;
    float rating;

public:
    CodeWithShivam(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {
        cout << "Derived class function is not found" << endl;
    }
};

class Video : public CodeWithShivam
{
    int dislike;

public:
    Video(string s, float r, int d) : CodeWithShivam(s, r)
    {
        dislike = d;
    }
    void display()
    {
        cout << "Video title \"" << title << "\"" << endl;
        cout << "Rating: " << rating << endl;
        cout << "Dislikes: " << dislike << endl;
    }
};
class Words : public CodeWithShivam
{
    int word_count;

public:
    Words(string s, float r, int wc) : CodeWithShivam(s, r)
    {
        word_count = wc;
    }
    void display()
    {
        cout << "Video title is " << title << endl;
        cout << "Rating is " << rating << endl;
        cout << "SubTitle words count is " << word_count << endl;
    }
};

class Views : public CodeWithShivam
{
    int view_count;

public:
    Views(string s, float r , int v) : CodeWithShivam(s,r)
    {
        view_count = v;
    }
};


int main()
{
    string video_title;
    float video_rating;
    int video_dislike, video_words, video_views;

    video_title = "Code With Shivam";
    video_rating = 4.3;
    video_dislike = 40;
    video_words = 456;
    video_views = 12432;

    Video w_video(video_title, video_rating, video_dislike);
    Words w_text(video_title, video_rating, video_words);
    Views w_views(video_title, video_rating, video_views);

    CodeWithShivam *vds[3];
    vds[0] = &w_video;
    vds[1] = &w_text;
    vds[2] = &w_views;

    vds[0]->display();
    vds[1]->display();
    cout << endl;
    cout << "Display() is not available in the derived class so base class virtual function display() called";
    cout << endl;
    vds[2]->display();

    cout << endl;
    return 0;
}
/*
Rules for virtual function
1. They cannot be static
2. They are accessed by object pointers
3. Virtual function can be a friend of another class
4. A virtual function in base class might not be used
5. If a virtal funtion is defined in a base class, there is no necessity of redefining it in the derived class
*/
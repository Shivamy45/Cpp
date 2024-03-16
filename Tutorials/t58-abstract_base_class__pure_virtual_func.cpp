#include <iostream>
#include <cstring>
using namespace std;
// Abstract Base Class & Pure virtual function
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
    virtual void display() = 0; // do-nothng function --> pure virtual function
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

class Views : public CodeWithShivam
{
    int view_count;

public:
    Views(string s, float r, int v) : CodeWithShivam(s, r)
    {
        view_count = v;
    }
    void display()
    {
        cout << "Video title is " << title << endl;
        cout << "Rating is " << rating << endl;
        cout << "Total views " << view_count << endl;
    }
};

int main()
{
    string video_title;
    float video_rating;
    int video_dislike, video_views;

    video_title = "Code With Shivam";
    video_rating = 4.3;
    video_dislike = 40;
    video_views = 12432;

    Video w_video(video_title, video_rating, video_dislike);
    Views w_views(video_title, video_rating, video_views);

    CodeWithShivam *ptr[2];
    ptr[0] = &w_video;
    ptr[1] = &w_views;

    ptr[0]->display();
    ptr[1]->display();

    cout << endl;
    return 0;
}
/*
Abstract base class - at least one virtual function is present
Virtual function - the functions should be defined in derived classes
*/
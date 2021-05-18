#include <iostream>
#include "list"
using namespace std;

class YouTubeChannel {
public:
    string name;
    string OwnerName;
    int32_t SubscribersCount;
    list<string> PublishedVideoTitles;

    YouTubeChannel( string Name, string ownerName){
        name = Name;
        OwnerName = ownerName;
        SubscribersCount = 0;

    }

    void GetInfo(){
        cout << "Name: " << name << endl;
        cout << "Owner Name: " << OwnerName << endl;
        cout << "Subscriptors: " << SubscribersCount << endl;
        cout << "Published Videos Titles: " << endl;

        for (string videoTitles : PublishedVideoTitles) {
            cout << videoTitles << endl;
        }
        cout << "    " << endl;
    }
};

int32_t  main()
{
    YouTubeChannel ytChannel("Sabrina", " el canal de sabrina");
    ytChannel.PublishedVideoTitles.push_back("La calabera del desierto");
    ytChannel.PublishedVideoTitles.push_back("Heaven good");
    ytChannel.SubscribersCount = 44;


    YouTubeChannel ytChannel2("Yorlondon","Yornary Londoño Gomez");

    ytChannel.GetInfo();
    ytChannel2.GetInfo();




}
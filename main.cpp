#include <iostream>
#include "list"
using namespace std;

class YouTubeChannel {
private:
    string name;
    int32_t SubscribersCount;
    list<string> PublishedVideoTitles;
protected:
    string OwnerName;

public:
    YouTubeChannel( string Name, string ownerName){
        name = Name;
        OwnerName = ownerName;
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

    void Subscribe(){
        SubscribersCount++;
    }

    void Unsubscribe() {
        if (SubscribersCount > 0)
            SubscribersCount--;
    }

    void publishVideos(string Title)
    {
        PublishedVideoTitles.push_back(Title);
    }


};
class cookingYouTubeChannel:public YouTubeChannel{
public:
    cookingYouTubeChannel(const string &name, const string &ownerName) : YouTubeChannel(name, ownerName) {

    }
    void practice(string title){
        cout << OwnerName <<" -- " << title << endl;
    }

};
int32_t  main()
{
    YouTubeChannel ytChannel("Sabrina", " el canal de sabrina");
    YouTubeChannel ytChannel2("Yorlondon","Yornary Londoño Gomez");
    ytChannel.publishVideos("EL deseo mas profundo");

    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.GetInfo();

    ytChannel2.Subscribe();
    ytChannel2.GetInfo();

    ytChannel.Unsubscribe();
    ytChannel.GetInfo();



    cookingYouTubeChannel ytcooking("Sabrina Cocina ", " Marina Luz");
    ytcooking.practice("Estamos cocinando muy bien, que sigamos asi");
    ytcooking.Subscribe();
    ytcooking.Subscribe();
    ytcooking.Subscribe();
    ytcooking.GetInfo();

    cookingYouTubeChannel cookingYoup("JoelCooking","Jhon Camargo");
    cookingYoup.practice("Y aqui para aprender en lo mas duro");


}
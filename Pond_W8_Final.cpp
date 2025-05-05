#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    char name[25];

    cout<< "----------------Chapter One: Arrival-----------------\n\n";
    cout<< "You have survived the long voyage across the sea "
           "and have finally docked ship at the port of  Valestia.\n" 
           "As you make your way through town and old man " 
           "approaches and asks.\n\n" D
           "Old man: You there, what is your name?"<< endl;
    cin.getline(name, 25);
    cout<<" \n";
    cout<< "Old man: Well " << name << " have a got an offer for you! "
           "The blacksmith is showing off his new wares and those\n"
           "who are there to see them are all being given a new dagger!\n"
           "You: Where can I find this blacksmith?\n"
           "Old man: Well I can tell you of course...for 25 coin.\n\n";

    int choice1;
    cout<< "What will you do?\n";
    cout<< "Enter 1 to give the man 25 coin.\n";
    cout<< "Enter 2 to refuse the offer.\n\n"; 
    retry:  
    cout<< "Your choice is: ";
    cin>> choice1;

    if(choice1 == 1)
    {
        cout<< "\nOld man: Smart you are to jump on the bargain he says. "
                "Now take this road down to the end and turn left and\n" 
                "walk until you see the smoke down on your right " 
                "and you'll find the blacksmith. Hurry now before\n"
                "you miss it!\n\n"
                "You run down the street and find where the smoke is "
                "coming from. There is the blacksmith, but no crowd.\n\n"
                "You: Hello, is there not a demonstration going on? "
                "I heard there were free daggers here I could get.\n"
                "A voice from the back.\n\n"
                "Stranger: You were fooled I'm afraid. My name is Maria.\n"
                "Maria: I am this nice blacksmiths daughter. Sorry you were "
                "tricked but I could use your help if you willing?\n"
                "You: Ok I'm listening.\n"
                "Maria: I could use some help to gather minerals from outside "
                "of town. Could you come and help me, I'll make it worth your "
                "time.\n\n";

        int choice2;
        cout<< "What will you do?\n";
        cout<< "Enter 1 to help Maria.\n";
        cout<< "Enter 2 to refuse the request.\n"; 
        //retry:  
        cout<< "Your choice is: ";
        cin>> choice2;

        if(choice2 == 1)
        {
            cout<< "\nMaria: I am so glad you could help me. I will give "
            "you one of the daggers you were wanting for the help.\n"
            "Hopefully we won't need it. What is your name?\n\n"
            "You: My name is " << name << ". I've got a bad feeling about "
            "this though. It hasn't been my lucky day.\n\n"
            "You both head out into the wilderness to where the minerals "
            "are to be found. But along the way you hear a wild howl!\n\n"
            "Maria: Thats not good, you still have that dagger on you?\n"
            "You: Yeah here it is.\n"
            "!!!!!!!!!!!!!!!!\n\n"
            "A huge wolf jumps from the bushes, growling and showing his "
            "teeth. You both run away and seem to loose the wolf after\n"
            "you reach an opening in the woods. Good thing too because you "
            "have reached the very edge of a cliff.\n\n"
            "Maria: Oh no, we didnt loose him!\n\n"
            "There stands the wolf only feet from you, he stares at you "
            "for only a second and then pounces at you!\n\n";

            int choice3;
            cout<< "What will you do?\n";
            cout<< "Enter 1 to jump out of the way.\n";
            cout<< "Enter 2 to attack with the dagger.\n"; 
            //retry:  
            cout<< "Your choice is: ";
            cin>> choice3;

            if(choice3 == 1)
            {    
                cout<< "\nYou dive over to you left as hard as you can to get out "
                       "of the way. It all happens so fast and this was all you\n"
                       "could think to do. You unfortuately didn't think about "
                       "how close to the edge of the cliff you were, and well....\n"
                       "now you falling down the depths of the cliffs and you will "
                       "not survive.\n"
                       "\n"
                       "-----------------------DEAD------------------------------\n"
                       "-------------Start over from the beggining---------------\n";
            }
            else if(choice3 == 2)
            {
                cout<< "\nAs the wolf jumps through the air you take the dagger and "
                       "thrust it into the wolfs side. It lays on the ground wounded\n"
                       "and you grab your dagger and kick the wolf off the side of the cliff.\n\n"
                       "Maria: Whew that was a close one. I thought we were done for.\n"
                       "You: Glad my luck finally got better.\n\n"
                       "You both run back to where the minerals were and gather them up.\n\n"
                       "Maria: I am so glad you were along to help me. I would have "
                       "been killed if you weren't here. Are you staying anywhere tonight?\n"
                       "You: No I just arrived today, haven't found a place to stay yet.\n"
                       "Maria: Well "<< name << ", I want you to stay with me and my "
                       "father tonight. We will have a warm bed and food for you.\n"
                       "You: Thanks you so much I would be so gratefull to have a place "
                       "to stay.\n\n"
                       "You both walk back towards town, and just in time because the sun "
                       "is about to set. Not a bad first day in Valestia, we will see\n"
                       "what tomorrow holds.\n"
                       "\n"
                       "----------------End Chapter One: Arrival---------------------\n";
            }
        }
        else if(choice2 == 2)
        {
            cout<< "\nYou: No way I have been tricked enough already today "
                   "I am done with the people in this town.\n\n"
                   "You storm off and wander around town for the rest of "
                   "the day looking for food and somewhere to rest.\n"
                   "Unable to find food or a place to rest you slump down "
                   "against the wall under a bridge and slowly fall asleep.\n"
                   "Not a very good first day here in Valestia you think to "
                   "yourself. I hope tomorrow goes better.\n"
                   " \n"
                   "--------------End of Chapter One: Arrival--------------\n";
        }
        else
	    {
		cout << "You are doing it wrong! Press either 1 or 2." << endl;
		goto retry;
	    }
    }
    else if(choice1 == 2)
    {
        cout<< "\nOld man: I can't beleive you would reject such a great "
               "offer he says. You had better learn how to listen to the\n" 
               "advice of your elders next time. For now we will just "
               "be taking that coin by force!\n\n"
               "Three large men come from out of the shadows and before"
               " you know it they attack!!!\n"
               "You try and fight off the attackers grabbing what you "
               "find lying around. You end up hitting one of them over\n"
               "the head with a stick you found on the ground. He becomes "
               "enraged and pulls out his knife, yelling and screaming\n"
               "he charges at you and stabs you in the stomach!!! "
               "The other to run of cursing you and the man who stabbed\n"
               "you. Everything starts to go black...\n"
               " \n"
               "------------------------DEAD---------------------------\n"
               "--------------Start from the beggining-----------------\n";
    }
    else
	{
		cout << "You are doing it wrong! Press either 1 or 2." << endl;
		goto retry;
    }
}
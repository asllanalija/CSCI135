//
/*
  Name: Asllan Alija
  Course: CSCI 135
  Instructor: Genady Maryash
  Assignment: Project2: final phase


  Takes in a word from the user and prints the pronounciation, indentical words, add phenomes,
  remove phenomes, and replace phenomes.
 */

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>

using std::string;


// to uppercase function so checking if input = dictionary word is easier.
void toUpper(string &str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
    }
}

//Remove spaces at the end of word
string removeTrailingSpaces(string str)
{
    int i = 0;
    string other = "";
    while (!isspace(str[i]) && i < str.length())
    {
        other += str[i];
        i++;
    }

    return other;
}

//Remove spaces at beginning of word
string removeLeadingSpaces(string str)
{
    int i = 0;
    string other = "";
    if (!isspace(str[i]))
        return str;

    while (isspace(str[i]))
        i++;
    for (int i; i < str.length(); i++)
        other += str[i];

    return other;
}

//Count how many phenomes there are in a pronounciation
int countSpaces(string str)
{
    int count = 0;

    for (int i = 0; i < str.length(); i++)
        if (isspace(str[i]))
            count++;
    return count + 1;
}

void splitOnSpace(string s, string & before, string & after) {
  // reset strings
    before = "";
    after = "";
  // accumulate before space
    int i = 0;
    while (i < s.size() && not isspace(s[i])) {
        before = before + s[i];
        i++;
    }
  // skip the space
    i += 2;
    // accumulate after space
    while (i < s.size()) {
        after = after + s[i];
        i++;
    }
}

//Check if a string contains non alpha-numerics
bool containsNonAlpha(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122) && str[i] != '\'')
            return true;
    }
    return false;
}

//get pronounciation of word
string getPronounciation(string word)
{
    std::ifstream fin("cmudict.0.7a");
    string str = "";
    string dicword = "";
    string pron = "";
    string wordpron = "";
    string ret = "";
    while (std::getline(fin, str))
    {
        // if the word does not contain any non alphanumerics, perform check
        splitOnSpace(str, dicword, pron);
        if (!containsNonAlpha(dicword))
        {
            if (word == dicword)
            {
                wordpron = pron;
            }
        }
    }
    return wordpron;
}

//turn a string into an array by splitting on space.
string* splitSpaceArray(string word)
{
    string* arrptr = new string[19];
    int idx = 0;
    int lastidx = -1;
    int currlen = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == ' ')
        {
            // if the current index is a space, split from last space until right before this one.
            arrptr[idx] = word.substr(lastidx + 1, currlen);
            lastidx = i;
            idx++;
            currlen = 0;
        }
        currlen++;
    }
    //Last phenome is ignored, so do it manually.
    arrptr[idx] =  word.substr(lastidx + 1, currlen);
    return arrptr;
}

bool checkReplace(string pron1, string pron2)
{
    int len = countSpaces(pron1);
    int count = 0;
    if (len == countSpaces(pron2))
    {
        string* w1 = splitSpaceArray(pron1);
        string* w2 = splitSpaceArray(pron2);
        for (int i = 0; i < len + 1; i++)
        {
            if (*w1 == *w2)
                count++;
            w1++;
            w2++;
        }
        return count == len;
    }
    else
        return false;
}

bool checkIdentical(string pron1, string pron2)
{
    return pron1 == pron2;
}
int smaller(int a, int b)
{
    if (a < b)
        return a;
    return b;
}
bool checkAdd(string pron1, string pron2)
{
    int len1 = countSpaces(pron1);
    int len2 = countSpaces(pron2);
    int count = 0;
    int epsilon = 0;
    //std::cout << pron1 << " " << pron2 << " " << len2 << '\n';
    if (len1 == len2 + 1)
    {
        string * w1 = splitSpaceArray(pron1);
        string * w2 = splitSpaceArray(pron2);
        for (int i = 0; i < len2; i++)
        {
            if (removeLeadingSpaces(removeTrailingSpaces(*w1)) == removeLeadingSpaces(removeTrailingSpaces(*w2)))
            {
                count++;
            }
            else
            {
                //if they are not equal, increment larger array by one and then compare.
                // if they are not equal again, cannot be an add phenome, so return false.
                epsilon++;
                if (epsilon > 1)
                    return false;
                w1++;
                // now it is pointing at the same w2, but the larger one skipped the nonequal
                // phenome so now it is going to perform the check again.
                if (removeLeadingSpaces(removeTrailingSpaces(*w1)) == removeLeadingSpaces(removeTrailingSpaces(*w2)))
                    count++;
            }
            w1++;
            w2++;
        }
        if (count == len2)
            return true;
    }
    return false;
}
bool checkRemove(string pron1, string pron2)
{
    //exactly the same as add phenome, except that the word we inputted is the bigger one.
    // its like performing add phenome on the other form. they are inverse operations.
    return checkAdd(pron2, pron1);
}
int main()
{
    //string test = "";
    string word = "";
    std::cin >> word;
    toUpper(word);
    string wordpron = getPronounciation(word);
    string str = "";
    string dicword = "";
    string pron = "";
    string* replace = new string[100];
    string* identical = new string[100];
    string* add = new string[100];
    string* remove = new string[100];
    int addlength = 0;
    int replength = 0;
    int idlength = 0;
    int removelength = 0;
    std::ifstream fin("cmudict.0.7a");


    bool found = false;
    if (getPronounciation(word) != "")
        found = true;
    if (!found)
        std::cout << "Not found";
    else
    {
        while(std::getline(fin,str))
        {
            //std::cout << str << '\n';
            // if it starts with a letter
            splitOnSpace(str, dicword, pron);
            if (!containsNonAlpha(dicword))
            {
                if (checkReplace(pron, wordpron))
                {
                    replace[replength] = dicword;
                    replength = replength + 1;
                }
                if (checkIdentical(pron, wordpron) && dicword != word)
                {
                    identical[idlength] = dicword;
                    idlength = idlength + 1;
                }
                if (checkAdd(pron, wordpron) && dicword != word)
                {
                    add[addlength] = dicword;
                    addlength = addlength + 1;
                }
                if (checkRemove(pron, wordpron) && dicword != word)
                {
                    remove[removelength] = dicword;
                    removelength++;
                }
            }
        }
        //print out all the arrays
        //
        std::cout << "Pronounciation   : " << wordpron << "\n";
        std::cout << "\nIdentical        : ";
        for (int i = 0; i < idlength; i++)
        {
            std::cout << *identical << " ";
            identical++;
        }
        std::cout << "\nReplace phoneme  : ";
        for (int i = 0; i < replength; i++)
        {
            std::cout << *replace << " ";
            replace++;
        }
        std::cout << "\nAdd phoneme      : ";
        for (int i = 0; i < addlength; i++)
        {
            std::cout << *add << " ";
            add++;
        }
        std::cout << "\nRemove phoneme   : ";
        for (int i = 0; i < removelength; i++)
        {
            std::cout << *remove << " ";
            remove++;
        }
        std::cout << '\n';
    }
}





/**
 * Section 14
 * Subject: Operator Overloading
 *
 * Lesson 165 [ The Section 14 Challenge ]
 *
 * Expected result:
                _________lesson_165_________

                true
                false
                false
                true
                true
                false
                frank
                frank ***
                frank *** ___
                12345
                123451234512345
                abcd,abcd,abcd,abcd,abcd,
                FRANK
                frank
                Pre increment (test = ++s; )
                FRANK
                FRANK
                Frank
                frank
                Post increment (test = s++; )
                FRANK
                frank
                -= END =-
 */

#include <iostream>
#include <vector>

#include "Mystring.h"

using namespace std;

int main()
{
    cout << "_________lesson_165_________" << endl;
    cout << boolalpha << endl;

    Mystring a{"frank"};
    Mystring b{"frank"};

    cout << (a == b) << endl; // true
    cout << (a != b) << endl; // false

    b = "greench";

    cout << (a == b) << endl; // false
    cout << (a != b) << endl; // true
    cout << (a < b) << endl;  // true
    cout << (a > b) << endl;  // false

    ///////

    Mystring s1{"FRANK"};
    s1 = -s1;           // tolowercase
    cout << s1 << endl; // frank

    s1 = s1 + " ***"; // frank ***
    cout << s1 << endl;

    s1 += " ___"; // frank *** ___
    cout << s1 << endl;
    ////////

    Mystring s2{"12345"};
    cout << s2 << endl; // 12345

    s1 = s2 * 3;
    cout << s1 << endl; // 123451234512345

    ////////

    Mystring s3{"abcd,"};
    s3 *= 5;
    cout << s3 << endl; // abcd,abcd,abcd,abcd,abcd,

    ////////

    Mystring s{"Frank"};
    ++s;
    cout << s << endl; // FRANK

    s = -s;
    cout << s << endl; // frank

    ////////
    cout << "Pre increment (test = ++s; ) " << endl;
    Mystring test;
    test = ++s;           // pre increment
    cout << s << endl;    // FRANK
    cout << test << endl; // FRANK

    ////////

    s = "Frank";
    cout << s << endl; // FRANK

    s = -s;
    cout << s << endl; // frank

    cout << "Post increment (test = s++; ) " << endl;
    test = s++;           // post increment
    cout << s << endl;    // FRANK
    cout << test << endl; // frank

    cout << "-= END =-" << endl;
    cout << endl;
    return 0;
}

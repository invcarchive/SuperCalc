#include <list>
#include <iostream>
using namespace std;
#include <iterator>
#include <algorithm>
// I think this needs to be compiled with the C++11 libs
class statlist {
    public:
        float getmedain() {
            list<int> value2(value);
            value2.sort();
            if(value2.size() % 2 == 0) {
	              list<int>::iterator it = value2.begin();
	              cout << "3rd element = " << *it << endl;
                advance(it, 1);
                cout << *it << endl;*/
                advance(it, (((value2.size()-1)/2)+1));
                int a;
                a=*it;
                int b;
                advance(it, 1);
                b=*it;
                // cout << a << endl;
                // cout << b << endl;
                // cout << (a+b) << endl;
                float returnvalue;
                returnvalue = (a+b);
                // cout << returnvalue;
                returnvalue = returnvalue/2;
                // cout << returnvalue;
                return returnvalue;
            }
            else {
	              list<int>::iterator it = value2.begin();
                advance(it, ((value2.size()-1)/2));
                //cout << *it;
                float returnvalue = *it;
                return returnvalue;
            };
        }
        statlist(int initvalue) { // Initvalue is the init value to init the list.
            value.push_front(initvalue);
        };
        void getlist() {
            cout << endl;
            for (list<int>::iterator it=value.begin(); it != value.end(); ++it) { // yes this was copied from <http://www.cplusplus.com/reference/list/list/begin/>
                cout << ' ' << *it;
            };
            cout << endl;
        }
        list<int> value; // this feels inefficent
        //float medain = getmedain();
        //int medainI = getmedainasint();
};
